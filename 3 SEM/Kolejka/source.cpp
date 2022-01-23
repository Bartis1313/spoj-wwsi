#include <iostream>
#include <string>
#include <array>
#include <vector>

int main()
{
	int n = 0;
	std::array<int, 10> arr;
	std::string temp;
	std::vector<std::string> toPrint;
	while (std::cin >> temp)
	{
		if (temp == "Enqueue" && n != 10)
		{
			std::cin >> arr.at(n);
			n++;
			toPrint.push_back("--->");
		}
		else if (temp == "Enqueue" && n == 10)
		{
			toPrint.push_back("Error: queue is full");
		}

		if (temp == "Dequeue" && n != 0)
		{			
			toPrint.push_back(std::to_string(arr.at(0)));


			for (int i = 0; i < n - 1; i++)
			{
				arr.at(i) = arr.at(i + 1);
			}
			n--;
		}
		else if (temp == "Dequeue" && n == 0)
		{
			toPrint.push_back("Error: queue is empty");
		}

		if (temp == "Print" && n != 0)
		{
			std::string t = "Print: ";
			for (int i = 0; i < n; i++)
			{
				t += std::to_string(arr.at(i)) += " ";
			}
			toPrint.push_back(t);
			t.clear();
		}
		else if (temp == "Print" && n == 0)
		{
			toPrint.push_back("Print: Queue is empty");
		}
	}

	for (const auto& el : toPrint)
	{
		std::cout << el << "\n";
	}
}