#include <iostream>
#include <cmath>
#include <iomanip>

#define PRECIZED std::cout << std::fixed << std::setprecision(6)

double m = 0, s = 1;
double z(double x) 
{
	return (1.0 / (s * sqrt(2 * 3.14))) * exp(-0.5 * pow((x - m) / s, 2));
}

double p_normal_lt_x(double a)
{
	return 0.5 * (1.0 + erf((a - m) / (s * sqrt(2))));
}

#define TRAPEZOID_ITERATION 1e-4

void oblicz(const std::string& komenda, double a, double b) 
{
	if (komenda == "Over") 
	{
		double suma = 0;
		for (double i = a; i < b; i += TRAPEZOID_ITERATION)
		{
			suma += z(i) * TRAPEZOID_ITERATION;
		}
		PRECIZED << suma << '\n';
	}
	else if (komenda == "Outside") 
	{
		double suma = 1;
		for (double i = a; i < b; i += TRAPEZOID_ITERATION)
		{
			suma -= z(i) * TRAPEZOID_ITERATION;
		}
		PRECIZED << suma << '\n';
	}
	if (komenda == "Final") 
	{
		PRECIZED << p_normal_lt_x(a) << '\n';
	}
	else if (komenda == "Initial") 
	{
		std::cout << 1.0  - p_normal_lt_x(a) << '\n';
	}
}

bool startsWith(const std::string& name, const std::string& what) {
	return name.rfind(what, 0) == 0;
}

int main() {
	std::cout << "N(" << (int)m << "," << (int)s << ")\n";
	std::string komenda;
	bool zmiana = false;
	while (std::cin >> komenda) 
	{
		if (komenda == "Mean") 
		{
			std::cin >> m;
			zmiana = true;
		}
		else if (komenda == "Std") 
		{
			std::cin >> s;
			zmiana = true;
		}
		else if (komenda == "Both") 
		{
			std::cin >> m >> s;
			zmiana = true;
		}
		else 
		{
			double a, b;
			if (!startsWith(komenda, "Final") && !startsWith(komenda, "Initial"))
			{
				std::cin >> a >> b;
				oblicz(komenda, a, b);
			}
			else
			{
				std::cin >> a;
				oblicz(komenda, a, INFINITY);
			}
		}
		if (zmiana) {
			std::cout << "N(" << (int)m << "," << (int)s << ")\n";
		}
	}
}