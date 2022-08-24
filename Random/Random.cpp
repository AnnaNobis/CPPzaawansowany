﻿// Random.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <random>



int main()
{
    std::vector<int> numbers;
    std::random_device r; //urz¹dzenie do generowania entropii (zalezne od systemu operacyjnego)
    std::default_random_engine defEngine(r()); //tworzymy sobie silnik losowosci, ktory bedzie zwraca³ nam losowe liczby
    std::uniform_int_distribution<int> intDistro(-10, 10); // ubiermy ten nasz silnik w klase zapewniaj¹c¹ nam odpowiedni rozk³ad liczb
    for (int i = 1; i <= 10; i++)
    {
        numbers.push_back(intDistro(defEngine)); //pobiernie kolejnych liczb losowych
    }
    for (const int n : numbers)
    {
        std::cout << n << " ";
    }

    std::cout << std::endl << std::endl;

    std::vector<double> doubles;
    std::mt19937_64 mt_engine(r());
    std::uniform_real_distribution<double> realDistrbituion(-1, 1);

    for (int i = 1; i <= 10; i++)
    {
        doubles.push_back(realDistrbituion(mt_engine));
    }

    for (auto d : doubles)
    {
        std::cout << d << " ";
    }

    return 0;
}

