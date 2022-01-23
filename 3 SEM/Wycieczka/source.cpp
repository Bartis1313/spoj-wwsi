#include <iostream>

int main()
{
	const int MAX_M = 100;

	int matrix[MAX_M][MAX_M] = {0};
	int returnmatrix[MAX_M][MAX_M] = {0};

	int temp1, temp2;
	while (std::cin >> temp1 >> temp2)
	{
		matrix[temp1 - 1][temp2 - 1] = 1;
	}

	for (int i = 0; i < MAX_M; i++)
	{
		for (int j = 0; j < MAX_M; j++)
		{
			for (int k = 0; k < MAX_M; k++)
				returnmatrix[i][j] += matrix[i][k] * matrix[k][j];
		}
	}

	bool check = false;

	for (int i = 0; i < MAX_M; i++)
	{
		for (int j = 0; j < MAX_M; j++)
		{
			if (returnmatrix[i][j] > 0 && matrix[i][j] == 0)
			{
				check = true;
				break;
			}
		}
	}

	if (check == true)
		std::cout << "NIE";
	else
		std::cout << "TAK";

	return 0;
}