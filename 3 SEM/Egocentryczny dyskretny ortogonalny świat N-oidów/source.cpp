#include <iostream>
#include <cstring> // memset

bool isZeroNot(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i])
            return true;
    }
    return false;
}

bool isProstopadly(int* arr1, int* arr2, int size)
{
    int suma = 0;
    for (int i = 0; i < size; i++)
    {
        suma += arr1[i] * arr2[i];
    }
    return suma == 0;
}

int main()
{
    int ilosc = {};
    std::cin >> ilosc;
    while (ilosc--)
    {
        int rozmiar = {};
        int ile = {};
        std::cin >> rozmiar >> ile;
        auto aktualny = std::make_unique<int[]>(rozmiar);
        auto arrPoprzedni = std::make_unique<int[]>(rozmiar);
        auto suma = std::make_unique<int[]>(rozmiar);
        memset(suma.get(), 0, sizeof(int) * rozmiar);
        memset(arrPoprzedni.get(), 0, sizeof(int) * rozmiar);
        for (int i = 0; i < ile; i++)
        {
            for (int j = 0; j < rozmiar; j++)
                std::cin >> aktualny[j];

            if (isZeroNot(aktualny.get(), rozmiar) && isProstopadly(aktualny.get(), arrPoprzedni.get(), rozmiar))
            {
                for (int k = 0; k < rozmiar; k++)
                {
                    suma[k] += aktualny[k];
                }
                std::swap(arrPoprzedni, aktualny);
            }
        }

        for (int i = 0; i < rozmiar; i++)
        {
            std::cout << suma[i] << " ";
        }
        std::cout << std::endl;
    }
}