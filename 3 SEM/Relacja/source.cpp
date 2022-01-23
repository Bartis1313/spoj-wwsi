#include <iostream>

bool wykonane = false;
int zwrotna(int** R, int n)
{
    for (int i = 0; i < n; i++)
        if (R[i][i] == 0)
            return false;
    wykonane = true;
    return true;
}

bool przeciwzwrotna(int** R, int n)
{
    for (int i = 0; i < n; i++)
        if (R[i][i] != 0)
            return false;
    wykonane = true;
    return true;
}

bool symetryczna(int** R, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (R[i][j] != R[j][i])
                return false;
    }
    wykonane = true;
    return true;
}

bool antysymetryczna(int** R, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (R[i][j] && R[j][i])
                return false;
    }
    wykonane = true;
    return true;
}

bool spojna(int** R, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (!(R[i][j] || R[j][i]))
                return false;
    }
    wykonane = true;
    return true;
}

bool przechodnia(int** R, int n)
{
    int B = {};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B = 0;
            for (int k = 0; (!B) && (k < n); k++)
            {
                B = R[i][k] && R[k][j];
                if (R[i][j] < B)
                    return false;
            }
        }
    }
    wykonane = true;
    return true;
}

int main()
{
    int x = 0, y = 0;
    int maks1 = 0, maks2 = 0;

    int** temp = new int* [100];
    for (int i = 0; i < 100; i++)
        temp[i] = new int[100];

    while (std::cin >> x >> y)
    {
        temp[x - 1][y - 1] = 1;
        if (x > maks1)
            maks1 = x;
        if (y > maks2)
            maks2 = y;
    }

    size_t rozmiar = maks1 > maks2 ? maks1 : maks2;
    
    int** arr = new int* [rozmiar];
    for (int i = 0; i < rozmiar; i++)
        arr[i] = new int[rozmiar];

    //memset(arr, 0, sizeof(int) * rozmiar * rozmiar);

    for (int i = 0; i < rozmiar; i++)
        for (int j = 0; j < rozmiar; j++)
            arr[i][j] = temp[i][j];

    bool flagtrue = true;
    if (zwrotna(arr, rozmiar)) std::cout << "Z ";
    if (przeciwzwrotna(arr, rozmiar)) std::cout << "PZ ";
    if (symetryczna(arr, rozmiar)) std::cout << "S ";
    if (antysymetryczna(arr, rozmiar)) std::cout << "AS ";
    if (przechodnia(arr, rozmiar)) std::cout << "P ";
    if (spojna(arr, rozmiar)) std::cout << "SP ";
    if (wykonane == false)
    {
        std::cout << "X ";
        return 0;
    }
    std::cout << std::endl;

    if (zwrotna(arr, rozmiar) && symetryczna(arr, rozmiar) && przechodnia(arr, rozmiar))
    {
        flagtrue = false;
        std::cout << "RR ";
    }

    if (zwrotna(arr, rozmiar) && antysymetryczna(arr, rozmiar) && przechodnia(arr, rozmiar) && spojna(arr, rozmiar))
    {
        flagtrue = false;
        std::cout << "RPL ";
    }

    if (zwrotna(arr, rozmiar) && antysymetryczna(arr, rozmiar) && przechodnia(arr, rozmiar) && !spojna(arr, rozmiar))
    {
        flagtrue = false;
        std::cout << "RPCz ";
    }

    if (flagtrue == true)
    {
        std::cout << "X ";
        return 0;
    }

    for (int i = 0; i < rozmiar; i++)
        delete[] arr[i];
    delete[] arr;

    for (int i = 0; i < 100; i++)
        delete[] temp[i];
    delete[] temp;

    return 0;
}