#include <iostream>
#include <vector>
#include <string>

class Type
{
public:
    int id;
    float nums;
    std::string imie;
    std::string nazwisko;
    friend std::ostream& operator<<(std::ostream& os, const Type& obj)
    {
        os << obj.nazwisko << " " << obj.imie << " " << obj.nums << " " << obj.id;
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Type& obj)
    {
        is >> obj.id >> obj.nums >> obj.imie >> obj.nazwisko;
        return is;
    }
};

void mergeNum(std::vector<Type>& a, int left, int mid, int right)
{
    int midleft = mid - left + 1;
    int midright = right - mid;
    int toSort = left;
    int iLeft = {};
    int iRight = {};

    std::vector<Type> leftArray(midleft);
    std::vector<Type> rightArray(midright);

    for (int i = 0; i < midleft; i++)
        leftArray.at(i) = a.at(left + i);
    for (int i = 0; i < midright; i++)
        rightArray.at(i) = a.at(mid + 1 + i);

    while (iLeft < midleft && iRight < midright)
    {
        if (leftArray.at(iLeft).nums <= rightArray.at(iRight).nums)
        {
            a.at(toSort) = leftArray.at(iLeft);
            iLeft++;
        }
        else
        {
            a.at(toSort) = rightArray.at(iRight);
            iRight++;
        }
        toSort++;
    }
    while (iLeft < midleft)
    {
        a.at(toSort) = leftArray.at(iLeft);
        iLeft++;
        toSort++;
    }
    while (iRight < midright) {
        a.at(toSort) = rightArray.at(iRight);
        iRight++;
        toSort++;
    }
}

void mergeSortNum(std::vector<Type>& a, int b, int e)
{
    if (b >= e)
        return;

    int mid = b + (e - b) / 2;
    mergeSortNum(a, b, mid);
    mergeSortNum(a, mid + 1, e);
    mergeNum(a, b, mid, e);
}

void mergeImie(std::vector<Type>& a, int left, int mid, int right)
{
    int midleft = mid - left + 1;
    int midright = right - mid;
    int toSort = left;
    int iLeft = {};
    int iRight = {};

    std::vector<Type> leftArray(midleft);
    std::vector<Type> rightArray(midright);

    for (int i = 0; i < midleft; i++)
        leftArray.at(i) = a.at(left + i);
    for (int i = 0; i < midright; i++)
        rightArray.at(i) = a.at(mid + 1 + i);

    while (iLeft < midleft && iRight < midright)
    {
        if (leftArray.at(iLeft).imie <= rightArray.at(iRight).imie)
        {
            a.at(toSort) = leftArray.at(iLeft);
            iLeft++;
        }
        else
        {
            a.at(toSort) = rightArray.at(iRight);
            iRight++;
        }
        toSort++;
    }
    while (iLeft < midleft)
    {
        a.at(toSort) = leftArray.at(iLeft);
        iLeft++;
        toSort++;
    }
    while (iRight < midright) {
        a.at(toSort) = rightArray.at(iRight);
        iRight++;
        toSort++;
    }
}


void mergeImie(std::vector<Type>& a, int b, int e)
{
    if (b >= e)
        return;

    int mid = b + (e - b) / 2;
    mergeImie(a, b, mid);
    mergeImie(a, mid + 1, e);
    mergeImie(a, b, mid, e);
}


void mergeNazw(std::vector<Type>& a, int left, int mid, int right)
{
    int midleft = mid - left + 1;
    int midright = right - mid;
    int toSort = left;
    int iLeft = {};
    int iRight = {};

    std::vector<Type> leftArray(midleft);
    std::vector<Type> rightArray(midright);

    for (int i = 0; i < midleft; i++)
        leftArray.at(i) = a.at(left + i);
    for (int i = 0; i < midright; i++)
        rightArray.at(i) = a.at(mid + 1 + i);

    while (iLeft < midleft && iRight < midright)
    {
        if (leftArray.at(iLeft).nazwisko <= rightArray.at(iRight).nazwisko)
        {
            a.at(toSort) = leftArray.at(iLeft);
            iLeft++;
        }
        else
        {
            a.at(toSort) = rightArray.at(iRight);
            iRight++;
        }
        toSort++;
    }
    while (iLeft < midleft)
    {
        a.at(toSort) = leftArray.at(iLeft);
        iLeft++;
        toSort++;
    }
    while (iRight < midright) {
        a.at(toSort) = rightArray.at(iRight);
        iRight++;
        toSort++;
    }
}

void mergeNazw(std::vector<Type>& a, int b, int e)
{
    if (b >= e)
        return;

    int mid = b + (e - b) / 2;
    mergeNazw(a, b, mid);
    mergeNazw(a, mid + 1, e);
    mergeNazw(a, b, mid, e);
}

int main()
{
    std::vector<Type> temp;
    Type t;
    while (std::cin >> t)
    {
        temp.push_back(t);
    }

    mergeSortNum(temp, 0, temp.size() - 1);
    mergeImie(temp, 0, temp.size() - 1);
    mergeNazw(temp, 0, temp.size() - 1);

    for (int i = 0; i < temp.size(); i++)
    {
        std::cout << i + 1 << " " << temp.at(i) << "\n";
    }

    return 0;
}