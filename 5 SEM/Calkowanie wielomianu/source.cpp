#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

double intergralPolynomal(const std::vector<double>& coeff, int degree, double lowerLimit, double upperLimit)
{
    double result = 0;
    for (int i = 0; i <= degree; i++)
        result += coeff[i] / (i + 1) * (std::pow(upperLimit, i + 1) - std::pow(lowerLimit, i + 1));
    return result;
}

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;
        std::vector<double> coeff(m + 1);
        
        for (auto& el : coeff)
            std::cin >> el;
            
        int deg;
        std::cin >> deg;
        for (int j = 0; j < deg; j++)
        {
            double min;
            double max;
            std::cin >> min;
            std::cin >> max;
            std::cout << std::setprecision(6) << std::fixed << intergralPolynomal(coeff, m, min, max) << '\n';
        }
    }
}