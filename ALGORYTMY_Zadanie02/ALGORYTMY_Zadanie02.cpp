// ALGORYTMY_Zadanie02.cpp : 
//Zad 0.2
//Stwórz wektor 100 kolejnych liczb ca³kowitych z zakresu od 1 do 100
//a) Wypisz wszystkie liczby(for_each + unary function)
//b) Wypisz wszystkie liczby mniejsze od 50 (for_each + funktor)
//c) Nastêpnie policz ile jest liczb wiêkszych ni¿ 4 (count_if + predykat)
//d) Zrób to samo dla a, b i c, ale wykorzystaj lambdê
//e) W zale¿noœci od zmiennej lokalnej dzielnik wypisz wszystkie liczby podzielne przez
//niego(for_each + lambda
//    f) Zlicz sumê wszystkich liczb parzystych i zapisz j¹ do zmiennej lokalnej int sum;

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <iterator>


void printLiczby(const int value)
{
    std::cout << value << "; " << std::endl;
}

class PrintLessThan
{
    int _limit;

public:
    PrintLessThan(int limit)
        : _limit(limit)
    {};

    void operator()(int value)
    {
        if (value < _limit)
        {
            std::cout << value << std::endl;
        }
    }

};

bool biggerThan4(const int i)
{
    return i > 4;
}


int main()
{
    //a)
    std::cout << " a) Wypisz wszystkie liczby(for_each + unary function)" << std::endl;


    std::vector <int> liczby(100);

    std::iota(liczby.begin(), liczby.end(), 1);

    //WERSJA Z LAMBD¥
    std::for_each(liczby.rbegin(), liczby.rend(), [](const int i) {std::cout << i << " - "; });
    std::cout << std::endl;

    std::for_each(liczby.begin(), liczby.end(), printLiczby);
    std::cout << std::endl;

    //b)
    std::cout << "b) Wypisz wszystkie liczby mniejsze od 50 (for_each + funktor)" << std::endl;

    std::for_each(liczby.begin(), liczby.end(), PrintLessThan(50));

    // //WERSJA Z LAMBD¥
    std::for_each(liczby.begin(), liczby.end(),
        [](int i)
        {
            if (i < 50)
            {
                std::cout << i << std::endl;
            }
        });


    //c)

    std::cout << "c) Nastêpnie policz ile jest liczb wiêkszych ni¿ 4 (count_if + predykat)" << std::endl;


    int countBiggerThan4 = std::count_if(liczby.cbegin(), liczby.cend(), biggerThan4);
    std::cout << "Liczb wiêkszych od 4 jest: " << countBiggerThan4 << std::endl;


    // //WERSJA Z LAMBD¥
  /*  int countBiggerThan4 = std::count_if(liczby.cbegin(), liczby.cend(),
        [](int i)
        {
            if (i > 4)
            {
                std::cout << i << std::endl;
            }
        });
    std::cout << " *Liczb wiêkszych od 4 jest: " << countBiggerThan4 << std::endl;*/


    //e)

    std::cout << "e) W zale¿noœci od zmiennej lokalnej dzielnik wypisz wszystkie liczby podzielne przez niego(for_each + lambda)" << std::endl;

    int dzielnik = 3;
    auto divByDzielnik = [dzielnik](int i)
    {
        if ((i % dzielnik) == 0)
        {
            std::cout << i << std::endl;
        }
    };

    std::for_each(liczby.cbegin(), liczby.cend(), divByDzielnik);

    std::for_each(liczby.cbegin(), liczby.cend(),
        [&dzielnik](int i)
        {
            if ((i % dzielnik) == 0)
            {
                std::cout << i << std::endl;
            }
        });


    //f)
    std::cout << "f) Zlicz sumê wszystkich liczb parzystych i zapisz j¹ do zmiennej lokalnej int sum" << std::endl;

    int sum = 0;

    std::for_each(liczby.cbegin(), liczby.cend(),
        [&sum](int i)
        {
            if (i % 2 == 0)
                sum += i;
        });
    std::cout << "Suma liczby parzystych to: " << sum << std::endl;

    //wersja z acumulate

    auto sumOdd = [](int a, int b) {
        if (b % 2 == 0)
            return a + b;
        else
            return a; };

    int result = std::accumulate(liczby.cbegin(), liczby.cend(), 0, sumOdd);

    std::cout << std::endl << "RESULT = " << result << std::endl;
    
 

}


