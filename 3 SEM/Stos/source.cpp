#include <iostream>
#include <array>
#include <vector>
#include <string>

size_t size = 0;
std::array<int, 10> arr;
std::vector<std::string> toWrite;

void push()
{
    if (size >= 10)
        toWrite.emplace_back(":(");
    else
    {
        std::cin >> arr.at(size);
        size = size + 1;
        toWrite.emplace_back(":)");
    }
}

void pop()
{
    if (size >= 1)
    {
        toWrite.emplace_back(std::to_string(arr.at(size - 1)));
        size = size - 1;
    }
    else
    {
        toWrite.emplace_back(":(");
    }
}

int main()
{
    char sign;
    //int counter = 0;
    while (std::cin >> sign)
    {
        //counter++;
        if (sign == '+')
        {
            push();
        }
        else if (sign == '-')
        {
            pop();
        }
        //if (counter == 23)
        //    break;
    }

    for (const auto& el : toWrite)
    {
        std::cout << el << "\n";
    }

    return 0;
}