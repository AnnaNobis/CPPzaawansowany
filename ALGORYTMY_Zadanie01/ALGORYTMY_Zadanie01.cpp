// ALGORYTMY_Zadanie01.cpp : Zad 0.1 Lambda
//Napisz zwyk³¹ funkcj¹ oraz lambdê(przypisz j¹ do zmiennej) Nastêpnie je wywo³aj :
//a) funkcj¹ wypisuj¹ca “Hello World”
//b) Funkcja dodaj¹ca dwie liczby do siebie(i zwracaj¹ca j¹)

#include <iostream>
#include <string>
#include <algorithm>

void hello()
{
    std::cout << "Hello World";
}

void print(std::string text)
{
    std::cout << text;
}

auto cwiczeLambde = []() { std::cout << "Hello World"; };

int add(int a, int b)
{
    return a + b;
}

int main()
{

    //a)

print("Hello World1");
std::cout << std::endl;
cwiczeLambde();
std::cout << std::endl;




//b)

std::cout << "SUMA: " << add(1, 2) << std::endl;
auto addTwoNumbers = [](int a, int b) {return a + b; };


//WSKANIKI NA FUNKCJÊ:
auto helloFunc = hello;//wskaznik na funkcje hello przy uzyciu auto
helloFunc();
helloFunc();
void(*PtrName)() = hello; //archaizm
PtrName(); //wywo³anie funkcji

int (*addPtrFunc)(int, int) = add;
std::cout << "SUMA1: " << addPtrFunc(5, 6) << std::endl;


return 0;


}

