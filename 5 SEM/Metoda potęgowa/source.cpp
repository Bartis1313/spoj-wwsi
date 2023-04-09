#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

const double eps = 1e-14;
const int max_iter = 10000000;

std::vector<double> operator*(const std::vector<double>& v, const std::vector<std::vector<double>>& m) 
{
    std::vector<double> result(v.size());
    for (int i = 0; i < v.size(); ++i) {
        result[i] = 0;
        for (int j = 0; j < v.size(); ++j)
        {
            result[i] += v[j] * m[j][i];
        }
    }
    return result;
}

double norm(const std::vector<double>& v)
{
    double result = 0;
    for (int i = 0; i < v.size(); ++i) 
    {
        result += v[i] * v[i];
    }
    return sqrt(result);
}

std::vector<double> normalize(const std::vector<double>& v) 
{
    double n = norm(v);
    std::vector<double> result(v.size());
    for (int i = 0; i < v.size(); ++i) 
    {
        result[i] = v[i] / n;
    }
    return result;
}

std::pair<std::vector<double>, double> power_method(const std::vector<std::vector<double>>& m) 
{
    int n = m.size();
    std::vector<double> v(n, 1);
    int iteration = 0;
    double lambda_prev = 0;
    double lambda = 0;
    while (iteration < max_iter) 
    {
        v = normalize(v * m);
        lambda = norm(v * m);
        if (std::abs(lambda - lambda_prev) < eps) 
        {
            break;
        }
        lambda_prev = lambda;
        ++iteration;
    }
    return std::make_pair(v, lambda);
}
int main() 
{
    int t;
    std::cin >> t;
    while (t--) 
    {
        int n;
        std::cin >> n;
        std::vector<std::vector<double>> m(n, std::vector<double>(n));
        for (int i = 0; i < n; ++i) 
        {
            for (int j = 0; j < n; ++j)
            {
                std::cin >> m[i][j];
            }
        }
        auto result = power_method(m);
        for (const auto& el : result.first)
        {
            std::cout << std::setprecision(6) << std::fixed << el << " ";
        }
        std::cout << '\n';
        std::cout << std::setprecision(6) << std::fixed << result.second << '\n';
        if (t) 
        {
            std::cout << '\n';
        }
    }
    return 0;
}