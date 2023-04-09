#include <iostream>
#include <vector>
#include <cmath>

using matrixT = std::vector<std::vector<double>>;

matrixT matrix;
matrixT transposed;
matrixT result;
matrixT inverse;
std::vector<double> xP;
std::vector<double> yP;
std::vector<double> solution;

void multiply(matrixT& vec1, matrixT& vec2)
{
	for (int i = 0; i < vec1.size(); i++)
	{
		result.push_back(std::vector<double>());
		for (int j = 0; j < vec2[0].size(); j++)
		{
			double val = 0;
			for (int k = 0; k < vec2.size(); k++)
			{
				val += vec1[i][k] * vec2[k][j];
			}
			result[i].push_back(val);
		}
	}
}

void multiply(matrixT& vec1, std::vector<double>& vec2)
{
	for (int i = 0; i < vec1.size(); i++)
	{
		double tmp = 0;
		for (int j = 0; j < vec2.size(); j++)
		{
			tmp += vec1[i][j] * vec2[j];
		}
		solution.push_back(tmp);
	}
}

void invertMatrix(matrixT& vec1)
{
	for (int i = 0; i < vec1.size(); i++)
	{
		inverse.push_back(std::vector<double>());
		for (int j = 0; j < vec1[0].size(); j++)
		{
			inverse[i].push_back(vec1[i][j]);
		}
		for (int j = 0; j < vec1[0].size(); j++) 
		{
			inverse[i].push_back(i == j ? 1 : 0);
		}
	}

	for (int j = 0; j < vec1[0].size(); j++)
	{
		for (int i = 0; i < vec1.size(); i++) 
		{
			int idx = 0;
			if (i == j)
			{
				if (inverse[i][j] == 0) 
				{
					for (int k = 0; k < vec1.size(); k++)
					{
						if (inverse[k][j] != 0)
						{
							idx = k;
							break;
						}
					}
					
					for (int k = 0; k < inverse[0].size(); k++)
					{
						inverse[i][k] += inverse[idx][k];
					}
				}
				double tmp = inverse[i][j];
				for (int k = 0; k < inverse[0].size(); k++) 
				{
					inverse[i][k] *= (1.0 / tmp);
				}
			}
			else
			{
				if (inverse[i][j] == 0)
				{
					for (int k = 0; k < vec1.size(); k++) 
					{
						if (inverse[k][j] != 0) 
						{
							idx = k;
							break;
						}
					}
					for (int k = 0; k < inverse[0].size(); k++)
					{
						inverse[i][k] += inverse[idx][k];
					}
				}
				double tmp = inverse[i][j];
				for (int k = 0; k < inverse[0].size(); k++) 
				{
					inverse[i][k] -= (inverse[j][k] * tmp / inverse[j][j]);
				}
			}
		}
	}

	for (int i = 0; i < vec1.size(); i++)
	{
		for (int j = 0; j < vec1[0].size(); j++) 
		{
			inverse[i].erase(inverse[i].begin());
		}
	}

	result.clear();
}

int main()
{
	int unknwons = 2;
	int num;
	std::cin >> num;
	for (int i = 0; i < num; i++)
	{
		matrix.push_back(std::vector<double>());
		double x, y;
		std::cin >> x >> y;
		xP.push_back(x);
		yP.push_back(y);
		for (int j = unknwons; j >= 0; j--)
		{
			matrix[i].push_back(pow(x, j));
		}
	}

	for (int i = 0; i <= unknwons; i++)
	{
		transposed.push_back(std::vector<double>());
		for (int j = 0; j < num; j++)
		{
			transposed[i].push_back(matrix[j][i]);
		}
	}

	multiply(transposed, matrix);
	invertMatrix(result);
	multiply(inverse, transposed);
	multiply(result, yP);

	for (int i = solution.size() - 1; i >= 0; i--)
	{
		std::cout << solution[i] << ' ';
	}
}