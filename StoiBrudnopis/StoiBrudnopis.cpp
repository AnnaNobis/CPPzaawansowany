// StoiBrudnopis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string number;
    std::cout << "Podaj wartoœæ do wczytania: ";
    //std::getline(std::cin, number);
    std::cin >> number;

    int i = 0;

    try
    {
        i = std::stoi(number);
    }
    catch (const std::out_of_range& ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout << "Wartoœæ" << number << "jest za du¿a zeby zmiescic do int" << std::endl;

    }
    catch (const std::invalid_argument& ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout << "Wartoœæ" << number << "nie mo¿e byc przekonwertowany na liczbe calkowita" << std::endl;
    }


}

