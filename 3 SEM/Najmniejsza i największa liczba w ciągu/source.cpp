#include <iostream>

int main()
{
	int max, maxI;
	int min, minI;
	int i;
	int t;
	std::cin >> t;
	max = min = t;
	maxI = minI = i = 1;
	while (std::cin >> t) {
		++i;
		if (t < min)
		{
			min = t;
			minI = i;
		}
		else if (max <= t)
		{
			max = t;
			maxI = i;
		}
	}
	std::cout << min << std::endl;
	std::cout << minI << std::endl;
	std::cout << max << std::endl;
	std::cout << maxI << std::endl;
}