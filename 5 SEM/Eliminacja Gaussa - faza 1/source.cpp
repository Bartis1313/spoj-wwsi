#include <iostream>
#include <vector>
#include <iomanip>

struct Holder
{
    Holder(size_t num)
    {
        data.resize(num);
        for (auto& el : data)
            el.resize(num + 1);
    }

    auto begin()
    {
        return data.begin();
    }

    auto end()
    {
        return data.end();
    }

    using ARR_2 = std::vector<std::vector<double>>;
    ARR_2 data;
};

int main()
{
    size_t n;
    std::cin >> n;
    Holder holder(n);

    size_t HOLDER_SIZE = holder.data.size();

    for (auto& el : holder)
    {
        for (size_t i = 0; i < HOLDER_SIZE; i++)
        {
            std::cin >> el[i];
        }
    }

    for (size_t i = 0; i < HOLDER_SIZE; i++)
    {
        std::cin >> holder.data[i].back();
    }

    for (size_t i = 0; i < HOLDER_SIZE - 1; i++)
    {
        for (size_t j = i + 1; j < HOLDER_SIZE; j++)
        {
            double ratio = (holder.data[j][i] / holder.data[i][i]);

            for (size_t k = 0; k < HOLDER_SIZE + 1; k++)
            {
                holder.data[j][k] -= holder.data[i][k] * ratio;
            }
        }
    }

    std::cout << n;
    for (auto el : holder)
    {
        std::cout << '\n';
        for (size_t i = 0; i < HOLDER_SIZE; i++)
        {
            std::cout << std::setprecision(6) << std::fixed << el[i] << ' ';
        }
    }

    for (auto el : holder)
    {
        std::cout << '\n' << std::setprecision(6) << std::fixed << el.back() << ' ';
    }
}