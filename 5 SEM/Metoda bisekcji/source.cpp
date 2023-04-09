#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

constexpr auto EPSILON = 1e-6;

double polynomial(const std::vector<double>& coeffs, double x)
{
    double r = 0.0;
    double powX = 1.0;
    for (double c : coeffs)
    {
        r += c * powX;
        powX *= x;
    }
    return r;
}

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;

        std::vector<double> coeffs(m + 1);
        for (auto& el : coeffs)
        {
            std::cin >> el;
        }

        int k;
        std::cin >> k;
        
        for (int j = 0; j < k; j++)
        {
            double start, end;
            std::cin >> start >> end;
            double valStart = polynomial(coeffs, start);
            double valEnd = polynomial(coeffs, end);
            if (valStart * valEnd > 0.0)
                continue;

            double middle, middleVal;
            do
            {
                middle = (start + end) / 2;
                middleVal = polynomial(coeffs, middle);
                if (middleVal == 0.0)
                {
                    break;
                }
                if (valStart * middleVal < 0.0)
                {
                    end = middle;
                    valEnd = middleVal;
                }
                else
                {
                    start = middle;
                    valStart = middleVal;
                }
            } while ((end - start) / 2 >= EPSILON);
            std::cout << std::setprecision(6) << std::fixed << middle << '\n';
        }
    }
}