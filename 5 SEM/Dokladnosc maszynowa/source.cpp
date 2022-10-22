#include <iostream>
#include <cmath>

template<typename T>
T counter()
{
    T one = 1;
    T epsilon = 1;
    while (one < one + epsilon)
        epsilon /= 2;

    return epsilon * 2;
}

void solver(size_t arg)
{
    // 1 - float
    // 2 - double
    // 3 - long double

    switch (arg)
    {
    case 1:
        std::cout << counter<float>() << std::endl;
        break;
    case 2:
        std::cout << counter<double>() << std::endl;
        break;
    case 3:
        std::cout << counter<long double>() << std::endl;
        break;
    }
}

int main()
{
    size_t num;
    std::cin >> num;

    solver(num);

    return 0;
}