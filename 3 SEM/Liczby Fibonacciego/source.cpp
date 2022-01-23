#include <iostream>

struct Matrix
{
    long long x, y, z, w;
    Matrix(long long x, long long y, long long z, long long w)
    {
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = w;
    }
};

Matrix multiply(const Matrix& first, const Matrix& second)
{
    Matrix temp(1, 1, 1, 0);
    temp.x = (first.x * second.x + first.y * second.z) % 1000000007;
    temp.y = (first.x * second.y + first.y * second.w) % 1000000007;
    temp.z = (first.z * second.x + first.w * second.z) % 1000000007;
    temp.w = (first.z * second.y + first.w * second.w) % 1000000007;
    return temp;
}

Matrix power(int number)
{
    Matrix temp(1, 1, 1, 0);
    if(number == 1)
        return temp;
    else if(number % 2 == 0)
    {
        temp = power(number / 2);
        temp = multiply(temp, temp);
    }
    else if(number % 2 == 1)
    {
        temp = power((number - 1) / 2);
        temp = multiply(temp, temp);
        temp = multiply(temp, Matrix(1, 1, 1, 0));
    }
    return temp;
}

long long fib(int number)
{
    if(number == 0)
        return 0;
    if(number == 1)
        return 1;
    
    Matrix temp = power(number - 1);
    return temp.x;
}

int main()
{
	int testNum = {};
	std::cin >> testNum;
	for(int i = 0; i < testNum; i++)
	{
	    int temp = {};
	    std::cin >> temp;
	    std::cout << fib(temp) << std::endl;
	}
	return 0;
}