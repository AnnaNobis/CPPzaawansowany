// ALGORYTMY_Zadanie01.cpp : Zad 0.1 Lambda
//Napisz zwyk�� funkcj� oraz lambd�(przypisz j� do zmiennej) Nast�pnie je wywo�aj :
//a) funkcj� wypisuj�ca �Hello World�
//b) Funkcja dodaj�ca dwie liczby do siebie(i zwracaj�ca j�)

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

