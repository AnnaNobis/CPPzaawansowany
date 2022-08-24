// Regex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <regex>

bool checkPesel(const std::string& pesel)
{
    std::regex peselRegex("\\dd{11}");
    return std::regex_match(pesel, peselRegex);
}

std::string readEmail()
{
  
    std::cout << "Podaj swoj adres e-mail: " << std::endl;
  std::string e_mail;
    std::cin >> e_mail;
    return e_mail;

}
bool checkEmailAdress(const std::string& e_mail)
{
    std::regex e_mailRegex("[a-z0-9_.]{3,}@[a-z0-9_]+.(com|pl|edu)$");
    return std::regex_match(e_mail, e_mailRegex);
}

int main()
{
    std::string pesel1("12345678901");
    std::string pesel2("123456789111");
    std::string pesel3("1234567891111");
    std::string pesel4("123456789012133");
    std::string toniePesel ("A234567890A");
    std::string toniePesel2("ania56789012133");


    std::cout << pesel1 << "wynik: " << checkPesel(pesel1) << std::endl;
    std::cout << pesel2 << "wynik: " << checkPesel(pesel2) << std::endl;
    std::cout << pesel3 << "wynik: " << checkPesel(pesel3) << std::endl;
    std::cout << pesel4 << "wynik: " << checkPesel(pesel4) << std::endl;
    std::cout << toniePesel << "wynik: " << checkPesel(toniePesel) << std::endl;
    std::cout << toniePesel2 << "wynik: " << checkPesel(toniePesel2) << std::endl;

    //1. Wczytaj od u¿ytkownika ³añcuch znaków, a nastêpnie sprawdz czy jest to poprawny adres e-mail.

    std::string e_mail = readEmail();

    std::cout << e_mail << "wynik sprawdzenia poprawnosci adresu e-mail: " << checkEmailAdress(e_mail) << std::endl;

}



// ^[a-z0-9_.]{3,}@[a-z0-9_]+.(com|pl|edu)$ - dla adresu e-mail z dopuszczalnymi 3 koñcówkami com, edu lub pl