#include <iostream>

int main()
{
	int temp = {};
	int tempMin = {};
	int tempPlace = {};
	int count = 0;
	while(true)
	{
		std::cin >> temp;
		if(temp == 0)
			break;
		++count;
		if(temp <= tempMin)
		{
			tempMin = temp;
			tempPlace = count;
		}
	}
	std::cout << tempMin << std::endl;
	std::cout << tempPlace << std::endl;
	return 0;
}