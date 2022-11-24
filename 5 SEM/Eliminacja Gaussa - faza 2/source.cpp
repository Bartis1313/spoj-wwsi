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

    std::vector<double> vec(HOLDER_SIZE);
    for (int i = HOLDER_SIZE - 1; i >= 0; i--)
    {
        vec[i] = holder.data[i].back();
        for (size_t j = 0; j < HOLDER_SIZE; j++)
        {
            if (j != i)
                vec[i] -= holder.data[i][j] * vec[j];
        }
        vec[i] /= holder.data[i][i];
    }
    for (auto el : vec)
        std::cout << std::setprecision(6) << std::fixed << el << '\n';
}