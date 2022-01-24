#include <iostream>
//#include <limits> // bo int max z tego to za duzy jest, albo cos zle robie
#include <utility>

constexpr int MAX_INT = 99999;
constexpr int MAX_SIZE = 101; // 100 + 1 bo spoj

void FW(int** graph, int size)
{
    int** dist = new int* [size];
    for (int i = 0; i < size; i++)
    {
        dist[i] = new int[size];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (graph[i][j] == 1)
            {
                dist[i][j] = 1;
            }
            else
            {
                dist[i][j] = MAX_INT;
            }
        }
        dist[i][i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (dist[j][k] > (dist[j][i] + dist[i][k]) && (dist[i][k] != MAX_INT && dist[j][i] != MAX_INT))
                {
                    dist[j][k] = dist[j][i] + dist[i][k];
                }
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (dist[i][j] == MAX_INT)
            {
                std::cout << "NaN ";
            }
            else
            {
                std::cout << dist[i][j] << " ";
            }
        }
        std::cout << "\n";
    }
}

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;

        int** graph = new int* [MAX_SIZE];
        for (int j = 0; j < MAX_SIZE; j++)
        {
            graph[j] = new int[MAX_SIZE];
        }

        int _max = 0;

        for (int i = 0; i < m; i++)
        {
            std::pair<int, int> p;
            std::cin >> p.first >> p.second;

            if (p.first > _max)
                _max = p.first;
            if (p.second > _max)
                _max = p.second;

            graph[p.first - 1][p.second - 1] = 1;
            graph[p.second -1][p.first - 1] = 1;
        }
        FW(graph, _max);
    }
    return 0;
}