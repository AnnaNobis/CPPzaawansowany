// PLIKI_Zadanie1.cpp 
//Program lista zakupów
//Stwórz program, który będzie od użytkownika wczytywał nazwy produktów spożywczych oraz ilość do kupienia(dla uproszczenia bez jednostki miary).
//- dla pewności zamień duże litery na małe
//- gdy uzytkownik poraz drugi wprowadzi ten sam produkt, zapytaj się go co chce zrobić :
//a) nadpisac(zamieniamy starą wartość na nową)
//b) zsumowac(sumujemy obie wartości)
//c) pominac(zostawiamy pierwszą wartość)
//Następnie zapisz dane do pliku lista_zakupow.txt
//np :
//jablko 4
//ziemniaki 3
//kiszony ogorek 1
//smietana 1
//

#include <iostream>
#include <string>
#include <vector>
#include <map>


std::string product;
std::vector<std::string> s;

bool findIfAlreadyListed(std::string product)
{
    std::find_if(vect.begin(), vect.end(), product)
    {
        if(true)
       return 

        else 
            return 
     }

       

}

int main()
{
    std::map<std::string, int> shoppingList;
    std::cout << "Podaj liste produktow spozywczych i ich ilosc. Jeœli chcesz zakonczyc wczytywanie produktow wpisz: end; " << std::endl;
    std::string s;
    std::string product;
    std::string amountOfProduct;
    int amount = 0;
    

    do
    {
        std::cout << "Podaj nazwe produktu: ";
        std::string s = {};
        std::cin.ignore();
        std::getline(std::cin, s); // wczytuje az do napotkania znaku nowej linii

        for (int i = 0; i < s.length(); ++i)
        {
            s[i] = std::tolower(s[i]);
            product += s[i];
        }
        int amount = 0;
        std::cout << "Podaj ilosc produktu: ";
        std::cin >> amount;

        shoppingList.insert({ product, amount });

    } while (product != "end");

    std::cout << "Koniec" << std::endl;

    //for (auto el : shoppingList)
    //{
    //    std::cout << product << " " << amount << std::endl;
    //}

    //mapa, iterator na koniec jelsi nie znajdzie i wtedy kolejny
}


int main()
{
    std::cout << "POdaj nazwe produktu: ";
    std::string s;
    std::getline(std::cin, s); //wczytaj aż do napotkania znaku nowej linii

    std::cout << "Wczytano: " << s;


   
}


