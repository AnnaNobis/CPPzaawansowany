// Wyjatki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int readParamenters(int howManyNumbers, int* tableWithParamenters)
{
    if (tableWithParamenters == nullptr)
    {
        return -1; //oznacza, ¿e nie otrzymalismy poprawnbej tablicy
    }
    if (howManyNumbers < 0)
    {
        return -2; // oznacza ¿e dostaliœmy b³êdn¹ (ujem¹) iloœæ parametrów do wczytania
    }
    for (int i = 0; i < howManyNumbers; ++i)
    {
        // 
    }
    return 0;

}

static int error = 0; //globalna flaga b³êdu

Vector readParamenters(int howManyNumbers)
{
    error = 0; //zerowanie flagi b³êdu
    Vector vect;
    
    if (howManyNumbers < 0)
    {
        error = -2;
        return vect; // zwracamy pusty/domyslny obiekt, ktorego nie powinno sie u¿ywac
    }

    for (int i = 0; i < howManyNumbers; ++i)
    {
        // vect.push_back(); //zape³nienie vectora w pêtli
    }
    return vect;
}

int main3()
{
    Vector vect;
    try
    {
        vect = readParamenters(7);
    }

    catch (std::string& errorString)
    {
        std::cout << errorString << std::endl;
        throw errorString; //rethrow
    }

    catch (...) //tak sie raczej nie powinno robic
    {
        std::cout << "Jakis nieznany blad" << std::endl;
    }
}

int main1()
{
    int* tab = new int[7];
    int error = readParamenters(7, tab);

    if (!error) //sprawdzanie flagi b³êdu
    {
        //tutaj kod ktory siê wykona jak funkcja readParameters zadzia³a
    }
    else
    {
        std::cout << "Zdazylo sie cos zlego\m";
        //obs³uga b³êdu
    }
}

int main2()
{

}

