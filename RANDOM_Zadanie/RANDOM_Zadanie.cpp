//// RANDOM_Zadanie.cpp :
//Utwórz wektor 100 losowych liczb z przedziału 0 10, następnie:
//a) wypisz ten wektor
//b) zlicz ilość wystąpień liczby 5
//c) Wylicz średnia wartość
//d) Zrób to samo dla innego rozkładu wartości

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <numeric>


int main()
{
    std::vector<int> numbers(100);

    std::random_device r; //urz¹dzenie do generowania entropii (zalezne od systemu operacyjnego)
    std::default_random_engine randomEngine(r()); //tworzymy sobie silnik losowosci, ktory bedzie zwraca³ nam losowe liczby
    std::uniform_int_distribution<int> intDistro(0, 10); // ubiermy ten nasz silnik w klase zapewniaj¹c¹ nam odpowiedni rozk³ad liczb
    for (auto it = numbers.begin(); it != numbers.end(); it++)
    {
        *it = intDistro(randomEngine);

    }
    //a)
    std::for_each(numbers.begin(), numbers.end(), [](const int i) {std::cout << i << " ; "; });

    //b)
    auto count5 = std::count(numbers.begin(), numbers.end(), 5);

    std::cout << "Liczba wystąpienia liczby 5 to: " << count5 << std::endl;

    //c)

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    double mean = sum / static_cast<double>(numbers.size());

    std::cout << std::endl << "Srednia wynosi " << mean << std::endl;

    return 0;

}