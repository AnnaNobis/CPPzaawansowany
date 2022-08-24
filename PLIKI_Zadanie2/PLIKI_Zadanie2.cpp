// PLIKI_Zadanie2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Zad 2.
//Wczytaj plik zdania.csv(Podczas pracy z tym zadaniem NIE NADPISUJ tego pliku).
//Wypisz na konsol� :
//-najd�u�sze zdanie(najwi�cej s��w)
//- najd�u�sze zdanie(najwi�cej liter)
//- najkrotsze zdanie(najmniej s��w)
//- najkrotsze zdanie(najmniej liter)
//- zlicz wszystkie wyst�pienia wszystkich s��w w pliku.

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

