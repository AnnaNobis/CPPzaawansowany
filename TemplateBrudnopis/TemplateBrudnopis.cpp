// TemplateBrudnopis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

template <typename T>
void print(T s)
{
    std::cout << s << std::endl;
}

template <int N>
void printKu()
{
    for (int i = 0; i < 10; ++i)
        std::cout << "Ku ";
}

template<>
void print(double s)
{
    std::cout << std::setprecision(2) << s << std::endl;

}

template <>
void print(bool s)
{
    if (s)
    {
        std::cout << "Prawda" << std::endl;
    }
    else
    {
        std::cout << "Falsz" << std::endl;
    }
}

struct D
{
private:
    int z;
};


int main()
{
  

    int i = 1;
    double d = 123.21;
    bool b = true;

    print(i);
    print(d);
    print(b);
    printKu<100>();
    print(b);

}

