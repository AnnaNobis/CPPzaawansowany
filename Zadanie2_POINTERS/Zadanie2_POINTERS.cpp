// Zadanie2_POINTERS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2.
//Zadanie: Stwórz klasê Product(float price, string name) oraz 2 konstruktory
//(domyslny i z 2 parametrami).U¿ywaj¹c make_uniqe stwórz i przypisz do
//uniqe_ptr :
//    Obiekt u¿ywaj¹c konstruktora domyœlnego
//    Obiekt u¿ywaj¹c konstruktora z 2 parametrami
//    Tablicê 4 Produktów



#include <iostream>
#include <string>
#include <memory>

class Product
{
    float _price;
    std::string _name;

public:
    Product()
        : _price(0), _name("")
    {

    };
 

    Product(float price, std::string name)
        : _price(price), _name(name)
    {

    };
};

int main()
{
    std::unique_ptr<Product> ptr1 = std::make_unique <Product>();
    std::unique_ptr<Product> ptr2 = std::make_unique <Product>(7.99, "Maslo: (");
  
 

}

