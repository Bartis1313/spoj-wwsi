#include <vector>
#include <iostream>

class Matrix
{
public:
    Matrix(size_t rows, size_t cols)
        : rows(rows), cols(cols), data(rows* cols)
    {}

    double& operator()(size_t i, size_t j)
    {
        return data.at(i * cols + j);
    }
    void zero(size_t i, size_t j)
    {
        (*this)(i, j) = 0.0;
    }
    void correct(size_t i, size_t j) 
    {
        (*this)(i, j) = 1.0;
    }
    Matrix transpose()
    {
        Matrix transposed(cols, rows);

        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < cols; j++)
            {
                transposed(j, i) = (*this)(i, j);
            }
        }
        return transposed;
    }
    Matrix triangular()
    {
        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < cols; j++)
            {
                if (i == j)
                {
                    (*this).correct(i, j);
                }
                else
                {
                    (*this).zero(i, j);
                }
            }
        }
        return (*this);
    }
    std::pair<Matrix, Matrix> makeLUVec()
    {
        Matrix l(rows, cols);
        Matrix u(rows, cols);

        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < cols; j++)
            {
                if (j < i)
                    l.zero(j, i);
                else
                {
                    l(j, i) = (*this)(j, i);
                    for (size_t k = 0; k < i; k++)
                    {
                        l(j, i) -= l(j, k) * u(k, i);
                    }
                }
            }
            for (size_t j = 0; j < rows; j++)
            {
                if (j < i)
                    u.zero(i, j);
                else if (j == i)
                    u.correct(i, j);
                else
                {
                    u(i, j) = (*this)(i, j) / l(i, i);
                    for (size_t k = 0; k < i; k++)
                    {
                        u(i, j) -= ((l(i, k) * u(k, j)) / l(i, i));
                    }
                }
            }
        }

        return { l, u };
    }
    Matrix multiply(Matrix m)
    {
        Matrix multi(rows, m.getCols());
        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < m.getCols(); j++)
            {
                double sum = 0;
                for (size_t k = 0; k < cols; k++)
                {
                    sum += (*this)(i, k) * m(k, j);
                }
                multi(i, j) = sum;
            }
        }
        return multi;
    }
    Matrix invertLU()
    {
        auto LU = (*this).makeLUVec();
        auto L = LU.first;
        auto U = LU.second;

        Matrix triangular(L.getRows(), L.getCols());
        triangular = triangular.triangular();

        Matrix Z(L.getRows(), L.getCols());
        for (size_t z = 0; z < L.getCols(); z++)
        {
            for (size_t row = 0; row < L.getRows(); row++)
            {
                double s = 0;
                for (size_t j = 0; j < row; j++)
                {
                    s += Z(j, z) * L(row, j);
                }
                Z(row, z) = (triangular(row, z) - s) / L(row, row);
            }
        }

        Matrix X(U.getRows(), U.getCols());
        for (size_t x = 0; x < U.getCols(); x++)
        {
            for (size_t r = 0; r < U.getRows(); r++)
            {
                size_t row = U.getRows() - r - 1;
                double s = 0;
                for (size_t j = row; j < U.getRows(); j++)
                {
                    s += X(j, x) * U(row, j);
                }
                X(row, x) = (Z(row, x) - s) / U(row, row);
            }
        }
        return X;
    }
    size_t getRows()
    {
        return rows;
    }
    size_t getCols()
    {
        return cols;
    }
    static void input(Matrix& X, Matrix& Y, size_t n, size_t m)
    {
        double t;
        for (size_t i = 0; i < m; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    X.correct(i, j);
                }
                else
                {
                    std::cin >> t;
                    X(i, j) = t;
                }
            }
            std::cin >> t;
            Y(i, 0) = t;
        }
    }
    void print()
    {
        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < cols; j++)
            {
                std::cout << data.at(i * cols + j) << " ";
            }
        }
    }
private:
    size_t rows;
    size_t cols;
    std::vector<double> data;
};

int main() 
{
    size_t n, m;
    std::cin >> n >> m;
    double tmp;
    n++;

    Matrix X(m, n);
    Matrix Y(m, 1);
    Matrix::input(X, Y, n, m);

    auto solution = ((X.transpose()).multiply(X).invertLU()).multiply(X.transpose()).multiply(Y);
    solution.print();
}