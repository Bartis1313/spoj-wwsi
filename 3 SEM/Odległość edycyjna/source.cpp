#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

int levenshtein(const std::string& first, const std::string& second)
{
    if (first.empty())
        return second.length();

    if (second.empty())
        return first.length();

    int firstLen = first.length();
    int secondLen = second.length();

    std::vector<int> rows(secondLen + 1);
    for (int i = 0; i < secondLen + 1; i++)
    {
        rows.at(i) = i;
    }

    for (int i = 0; i < firstLen; i++)
    {
        rows.at(0) = i + 1;

        int edge = i;

        for (int j = 0; j < secondLen; j++)
        {
            int upper = rows.at(j + 1);

            if (first[i] == second[j])
            {
                rows.at(j + 1) = edge;
            }
            else
            {
                int cost = upper < edge ? upper : edge;
                rows.at(j + 1) = (rows.at(j) < cost ? rows.at(j) : cost) + 1;
            }

            edge = upper;
        }
    }

    return rows.at(secondLen);
}

int main()
{
    std::string temp;
    std::vector<std::string> vec;

    //int c = 0;
    while (std::cin >> temp) // bo spoj mi wywala na getline :)
    {
        vec.push_back(temp);

        /*if (vec.size() == 7)
            break;*/
    }

    //std::cout << "\n";

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

    int** matrix = new int* [vec.size()];
    for (int i = 0; i < vec.size(); i++)
    {
        matrix[i] = new int[vec.size()];
    }

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << i + 1 << " | ";

        for (int j = 0; j < vec.size(); j++)
        {
            matrix[i][j] = levenshtein(vec.at(i), vec.at(j));

            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    std::cout.precision(3);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            float leven = matrix[i][j];
            auto max = std::max(vec.at(i).length(), vec.at(j).length());

            float wynik = 1 - (leven / max);

            std::cout << std::fixed << wynik << " ";
        }
        std::cout << "\n";
    }
}