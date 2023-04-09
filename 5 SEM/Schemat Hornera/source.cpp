#include <iostream>
#include <vector>
#include <iomanip>

double horner(const std::vector<double> v, double x)
{
    double ret = 0;

    for (auto i = v.rbegin(); i != v.rend(); i++)
        ret = ret * x + *i;

    return ret;
}

int main()
{
    size_t n;
    std::cin >> n;
    std::vector<double> arr(n + 1);
    for (auto& el : arr)
        std::cin >> el;

    double num;
    while (std::cin >> num)
        std::cout << std::setprecision(6) << std::fixed << horner(arr, num) << '\n';
}
