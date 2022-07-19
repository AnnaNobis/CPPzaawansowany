// Zadanie1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double divide(double a, double b)
{
    if (b != 0)
    {
        throw std::string("nie dziel przez 0!!!");
    }

    return a / b;
}
   


int main()
{
    
    while (true)
    {
        int a = 0;
        int b = 0;
        std::cout << "Podaj 1-sza liczbe: ";
        std::cin >> a;
        std::cout << "Podaj 2-ga liczbê:  ";
        std::cin >> b;

        try
        {
            double wynik = divide(a, b);
            std::cout << "Wynik dzielenia: " << wynik << std::endl << std::endl;
        }
        catch (std::string& error)
        {
            std::cout << error << std::endl;
        }
    }
        divide(3, 1);

}

