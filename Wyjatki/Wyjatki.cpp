// Wyjatki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int readParamenters(int howManyNumbers, int* tableWithParamenters)
{
    if (tableWithParamenters == nullptr)
    {
        return -1; //oznacza, �e nie otrzymalismy poprawnbej tablicy
    }
    if (howManyNumbers < 0)
    {
        return -2; // oznacza �e dostali�my b��dn� (ujem�) ilo�� parametr�w do wczytania
    }
    for (int i = 0; i < howManyNumbers; ++i)
    {
        // 
    }
    return 0;

}

static int error = 0; //globalna flaga b��du

Vector readParamenters(int howManyNumbers)
{
    error = 0; //zerowanie flagi b��du
    Vector vect;
    
    if (howManyNumbers < 0)
    {
        error = -2;
        return vect; // zwracamy pusty/domyslny obiekt, ktorego nie powinno sie u�ywac
    }

    for (int i = 0; i < howManyNumbers; ++i)
    {
        // vect.push_back(); //zape�nienie vectora w p�tli
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

    if (!error) //sprawdzanie flagi b��du
    {
        //tutaj kod ktory si� wykona jak funkcja readParameters zadzia�a
    }
    else
    {
        std::cout << "Zdazylo sie cos zlego\m";
        //obs�uga b��du
    }
}

int main2()
{

}

