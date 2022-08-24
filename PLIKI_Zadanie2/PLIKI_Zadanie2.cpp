// PLIKI_Zadanie2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Zad 2.
//Wczytaj plik zdania.csv(Podczas pracy z tym zadaniem NIE NADPISUJ tego pliku).
//Wypisz na konsolê :
//-najd³u¿sze zdanie(najwiêcej s³ów)
//- najd³u¿sze zdanie(najwiêcej liter)
//- najkrotsze zdanie(najmniej s³ów)
//- najkrotsze zdanie(najmniej liter)
//- zlicz wszystkie wyst¹pienia wszystkich s³ów w pliku.

#include <iostream>
#include <string>
#include <fstream>
#include <vector>


void zad2()
{
    std::ifstream file("zdania.csv");

    if (!file.is_open())
    {
        std::cout << "nie udalo sie otworzyc pliku";
        return;
    }

    std::string str;
    std::vector<std::string> strings;

    while (std::getline(file, str))
    {
        strings.push_back(str);
    }

    file.close();

    std::cout << "Wczytano " << strings.size() << " lancuchow";


}




int main()
{
    zad2();
  
}

