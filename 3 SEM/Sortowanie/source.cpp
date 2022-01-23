#include <iostream>
#include <vector>

int partition(std::vector<int>& arr, int left, int high)
{
    int x = arr[high];
    int i = (left - 1);

    for (int j = left; j <= high - 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quicksortR(std::vector<int>& arr, int left, int right)
{
    if (left < right)
    {
        int mid = partition(arr, left, right);
        quicksortR(arr, left, mid - 1);
        quicksortR(arr, mid + 1, right);
    }
}

int main()
{
    std::vector<int> arr;
    int temp;
    while (std::cin >> temp)
    {
        arr.push_back(temp);
    }

    quicksortR(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr.at(i) << "\n";
    }
}