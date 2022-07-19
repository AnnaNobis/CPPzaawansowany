// Zadanie2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//● Stwórz klase positiveNumber (przechowująca double) i zaimplementuj:
// geter i setter(przyjmujący inta, float i double)
// operatory wewnatrz klasy : +-(/ *dla chętnych)
// Zaimplementuj też operator + -przyjmujący double
// Dodaj w main() kod wywołujący funkcję z parametrami podanymi przez użytkownika w pętli.
// Dodaj w main() kod obsługujący wyjątek

#include <iostream>
#include "PositiveNumber.hpp"



int main()
{
    PositiveNumber num1(100);
    double num = 10;
    PositiveNumber num2 = num1 - num;

    PositiveNumber num3 = (num2 + (num1 + (num1+num1)));

    PositiveNumber num5 = 5;
    PositiveNumber num6 = 10 - num5;

   PositiveNumber a;

    try
    {
        a.setValue(100);

        for (int i = 15; i >= 0; --i)
        {
            a.substract(10);
            std::cout << a.getValue() << std::endl;
        }
        std::cout << "Poza petla";
    }
    catch (const std::out_of_range& error)
    {
        std::cout << error.what() << std::endl;
    }
    catch (const std::bad_alloc& error)
    {
        std::cout << error.what() << std::endl;
    }
    catch (const std::exception& ex) //złapanie każdego wyjątku 
    {
        std::cout << "Unexpected exception caught: "<< ex.what() << std::endl;
    }
    catch (...) // łapie każdy obiekt rzucony, raczej nie powinniśmy z tego korzystać!
    {
//nic nie możemy zrobić ze złapanym obiektem
    }

    std::cout << "Wartosc liczby poza petla" << a.getValue() << std::endl;
 
}