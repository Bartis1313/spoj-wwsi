#include <iostream>

int main()
{
	int rows;
	std::cin >> rows;
	int colums;
	std::cin >> colums;

	int** matrix = new int* [rows];
	int** transpose = new int* [colums];

	for (int i = 0; i < rows; ++i)
		matrix[i] = new int[colums];
	
	for (int i = 0; i < colums; ++i)
		transpose[i] = new int[rows];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colums; j++)
			std::cin >> matrix[i][j];
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < colums; j++)
			transpose[j][i] = matrix[i][j];
	}

	int** returnMatrix = new int*[colums];
	for (int i = 0; i < colums; ++i)
		returnMatrix[i] = new int[colums];

	int sum = 0;
	for (int i = 0; i < colums; i++)
	{
		for (int j = 0; j < colums; j++)
		{
			for (int k = 0; k < rows; k++)
				sum += transpose[i][k] * matrix[k][j];	
			returnMatrix[i][j] = sum;
			sum = 0;
		}
	}

	for (int i = 0; i < colums; i++)
	{
		for (int j = 0; j < colums; j++)
			std::cout << returnMatrix[i][j] << " ";
		std::cout << std::endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	for (int i = 0; i < colums; i++)
	{
		delete[] transpose[i];
	}
	delete[] transpose;

	for (int i = 0; i < colums; i++)
	{
		delete[] returnMatrix[i];
	}
	delete[] returnMatrix;
	
	return 0;
}