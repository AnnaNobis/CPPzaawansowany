// ALGORYTMY_Brudnopis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <iterator>

int main()
{
    std::vector <int> liczby(100);

    std::iota(liczby.begin(), liczby.end(), -80);

    auto it = std::remove(liczby.begin(), liczby.end(), 0);

    std::for_each(liczby.begin(), liczby.end(), []() {});



        std::vector<int> second;
    std::copy_n(liczby.begin(), 10, std::back_inserter(secon)

}

int main()
{
    std::vector<int> numbers(100);
    std::iota(numbers.begin(), numbers.end(), -80);

    auto it = std::remove(numbers.begin(), numbers.end(), 0);
    numbers.erase(it, numbers.end());

    numbers.erase(std::remove(numbers.begin(), numbers.end(), -1), numbers.end()); //erase-remove idiom

    auto it2 = std::remove_if(numbers.begin(), numbers.end(), [](const int i) {return i < -30; });
    //numbers.erase(it2, numbers.end());

    std::for_each(numbers.begin(), numbers.end(), [](const int i) { std::cout << i << ";\n"; });

    std::vector<int> second;

    std::copy_n(numbers.begin(), 10, std::back_inserter(second));

    std::cout << std::endl << std::endl << std::endl;

    auto second_inserter = std::back_inserter(second);
    second_inserter = 123;
    second_inserter = 99;

    std::for_each(second.begin(), second.end(), [](const int i) { std::cout << i << ";\n"; });



}