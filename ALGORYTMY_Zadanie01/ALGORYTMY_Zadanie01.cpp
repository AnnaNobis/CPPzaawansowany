// ALGORYTMY_Zadanie01.cpp : Zad 0.1 Lambda
//Napisz zwyk³¹ funkcj¹ oraz lambdê(przypisz j¹ do zmiennej) Nastêpnie je wywo³aj :
//a) funkcj¹ wypisuj¹ca “Hello World”
//b) Funkcja dodaj¹ca dwie liczby do siebie(i zwracaj¹ca j¹)

#include <iostream>
#include <string>
#include <algorithm>

std::string text = "Hello World";

void sayHello()
{
    std::cout << "Hello World";
}

auto cwiczeLambde = [](std::string text) {return  text; };

int main()
{
sayHello();
std::cout << std::endl;




return 0;


}

