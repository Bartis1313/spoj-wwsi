#include <iostream>

int main()
{
	int max = 0;
	while(true)
	{
		int temp = 0;
		std::cin >> temp;
		if(temp == 0)
			break;
		if(temp > max)
			max = temp;
			
	}
	std::cout << max;
	
	return 0;
}