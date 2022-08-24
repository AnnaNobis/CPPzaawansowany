﻿// PLIKI_Zadanie3.cpp : 
// Zad 3.
//Wczytaj plik secret_file.csv(Podczas pracy z tym zadaniem NIE NADPISUJ tego pliku).
//Do osobnego pliku wypisz wszystkie nazwy użytkowników i ich hasła, które nie spełniają naszych wymagań :
//-minimum 8 znaków
//- przynajmniej 1 duża litera, 1 mała litera i 1 cyfra
//
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>


struct User
{
public:
    User(std::string login, std::string password)
        : _login(login), _password(password)
    {};
    //dopisac getry/setery itp
    std::string _login;
    std::string _password;
};

void zad3()
{
    std::ifstream file("secret_file.csv");


    if (!file.is_open())
    {
        std::cout << "nie udalo sie otworzyc pliku";
        return;
    }

    std::vector<User> users;

    std::string login;
    std::string password;
    std::getline(file, login); //zjedzenie nag³ówka -> wczyta pierwsz¹ linie i nic z nia nie robimy

    while (std::getline(file, login, ',')) //getlnie wczytuje wszystko do napotkania pierwszego , -> to wczytuje login i usuwa przecinek
    {
        std::getline(file, password); //wczytaj mi do znaku konca lini
        users.emplace_back(login, password); //tworzy Usera i przekazuje mu te parametry do c-tora
        //users.push_back(User(login, password)); // Tworzy tymaczsowy obiekt anoniomy klasy USer i kopiuje/przenosi do wektora
    }

    auto checkPassword = [](const User& user) {
        //std::regex_match
        return user._password.size() < 8;
    };

    std::vector<User> badPassword;
    std::copy_if(users.begin(), users.end(), std::back_inserter(badPassword), checkPassword);

    //while (file.good() && !file.eof()) //getlnie wczytuje wszystko do napotkania pierwszego , -> to wczytuje login i usuwa przecinek
    //{
    //    std::getline(file, login, ',');
    //    std::getline(file, password); //wczytaj mi do znaku konca lini
    //    users.emplace_back(login, password); //tworzy Usera i przekazuje mu te parametry do c-tora
    //    //users.push_back(User(login, password)); // Tworzy tymaczsowy obiekt anoniomy klasy USer i kopiuje/przenosi do wektora
    //}

    for_each(badPassword.begin(), badPassword.end(), [](const User& user)
        {std::cout << user._login << " : " << user._password << std::endl; });

}

struct UserPlus
{
    UserPlus(std::string login, std::string password, std::string mail)
        : _login(login), _password(password), _mail(mail)
    {};

    std::string _login;
    std::string _password;
    std::string _mail;
};

void wrongData()
{
    std::ifstream file("wrong_data.csv");

    if (!file.is_open())
    {
        std::cout << "nie udalo sie otworzyc pliku";
        return;
    }

    std::vector<UserPlus> users;
    std::string login;
    std::string password;
    std::string mail;
    std::getline(file, login); //po³ykam nag³ówek (ignoruje, pomija)

    while (std::getline(file, login, ',')) //dopiki mozesz wczytac coœ do przecinka (mamy linie z danymi w formacie csv)
    {
        std::getline(file, password, ','); //to mozesz wczytac tez kolejn¹
        std::getline(file, mail); // i oczywiscie mozesz tez wczytac to co zosta³o do koñca linii (3 wartoœæ)
        users.emplace_back(login, password, mail);

    }

}

int main()
{
    //zad1();
    //zad2();
    zad3();
    //wrongData();
    return 0;
}