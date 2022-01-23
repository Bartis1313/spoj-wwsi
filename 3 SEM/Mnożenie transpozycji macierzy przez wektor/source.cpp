#include <iostream>
#include <iomanip>

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::swap(n, m);
    std::setprecision(4);
    double* v = new double[n];
    double** matrix = new double* [n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new double[m];
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
        }
        std::cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        double result = 0;
        for (int j = 0; j < n; j++)
        {
            result += matrix[j][i] * v[j];
        }
        std::cout << std::fixed << result;
        if (i == m - 1)
            std::cout << "\n";
        else
            std::cout << " ";
    }
    
    return 0;
}