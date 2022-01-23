#include <iostream>
#include <vector>

using MATRIX = std::vector<std::vector<float>>;

void Merge(MATRIX& p, MATRIX& vec, int r, int l, int half, int hp)
{
    int i = l, j = half + 1;
    for (int i = l; i <= r; i++)
        vec.at(i) = p.at(i);

    for (int n = l; n <= r; n++)
    {
        if (i <= half)
        {
            if (j <= r)
            {
                if (p.at(j).at(hp) < vec.at(i).at(hp))
                    p.at(n) = vec.at(j++);

                else
                    p.at(n) = vec.at(i++);
            }
            else
                p.at(n) = vec.at(i++);
        }
        else
            p.at(n) = vec.at(j++);
    }
}
void MergeSort(MATRIX& p, MATRIX& vec, int l, int r, int hp)
{
    if (l >= r)
        return;
    int half = (l + r) / 2;
    MergeSort(p, vec, l, half, hp);
    MergeSort(p, vec, half + 1, r, hp);
    Merge(p, vec, r, l, half, hp);
}


int main()
{
    int n;
    std::cin >> n;
    int m;
    std::cin >> m;
    std::vector<int> numbersToSort(m);
    for (int i = 0; i < m; i++)
    {
        int temp;
        std::cin >> temp;
        numbersToSort.at(i) = temp - 1;
    }

    MATRIX arr;
    std::vector<float> temp;
    float number;
    int counter = 0;
    while (std::cin >> number)
    {
        temp.push_back(number);
        counter++;
        if (counter % n == 0)
        {
            arr.push_back(temp);
            temp.clear();
        }
    }

    for (const auto& el : numbersToSort) {

        std::vector<std::vector<float>>vec(arr.size());
        MergeSort(arr, vec, 0, arr.size() - 1, el);
    }

    for (const auto& cl : arr)
    {
        for (const auto& r : cl)
        {
            std::cout << r << " ";
        }
        std::cout << "\n";
    }

    return 0;
}