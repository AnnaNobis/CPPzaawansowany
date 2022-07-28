// Zadanie2_POINTERS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2.
//Zadanie: Stw�rz klas� Product(float price, string name) oraz 2 konstruktory
//(domyslny i z 2 parametrami).U�ywaj�c make_uniqe stw�rz i przypisz do
//uniqe_ptr :
//    Obiekt u�ywaj�c konstruktora domy�lnego
//    Obiekt u�ywaj�c konstruktora z 2 parametrami
//    Tablic� 4 Produkt�w



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

