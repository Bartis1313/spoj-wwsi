#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>

int levenshtein(const std::string& first, const std::string& second)
{
    if (first.empty())
        return second.length();

    if (second.empty())
        return first.length();

    int firstLen = first.length();
    int secondLen = second.length();

    std::vector<std::pair<int, int>> rows(secondLen + 1);
    for (int i = 0; i < rows.size(); i++)
        rows.at(i).first = i;

    for (int i = 0; i < firstLen; i++)
    {
        rows.at(0).second = i + 1;

        for (int j = 0; j < secondLen; j++)
        {
            int cost;
            if (first[i] == second[j])
                cost = 0;
            else
                cost = 1;

            std::vector<int> temp =
            {
                rows.at(j).second + 1,
                rows.at(j + 1).first + 1,
                rows.at(j).first + cost
            };

            rows.at(j + 1).second = *std::min_element(temp.begin(), temp.end());
        }

        for (auto& row : rows)
            row.first = row.second;
    }

    return rows.at(secondLen).second;
}

int main()
{
    std::string temp;
    std::vector<std::string> vec;

    while (std::getline(std::cin >> std::ws, temp))
    {
        vec.push_back(temp);
    }

    std::cout << "\n";

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << i + 1 << ": " << vec.at(i) << " - " << vec.at(i).length() << "\n";
    }

    std::cout << "\n";


    std::cout << "x |";
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << " " << i + 1;
    }
    std::cout << "\n";
    std::cout << "- +";
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << " " << "-";
    }
    std::cout << "\n";

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << i + 1 << " | ";      

        for (int j = 0; j < vec.size(); j++)
        {           
           std::cout << levenshtein(vec.at(i), vec.at(j)) << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";
    
    std::cout.precision(3);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {           

            float leven = static_cast<float>(levenshtein(vec.at(i), vec.at(j)));
            auto max = std::max(vec.at(i).length(), vec.at(j).length());

            float wynik = 1 - (leven / max);

            std::cout << std::fixed << wynik << " ";
        }
        std::cout << "\n";
    }
}