#include <iostream>

template<typename T>
size_t counter()
{
    T one = 1;
    T epsilon = 1;
    
    size_t ctr = 0;

    while (one < one + epsilon)
    {
        epsilon /= 2;
        ctr++;
    }

    return ctr -1;
}

void solver(size_t arg)
{
    // 1 - float
    // 2 - double
    // 3 - long double

    switch (arg) {
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

    return;
}

int main()
{
    size_t num;
    std::cin >> num;

    solver(num);

    return 0;
}