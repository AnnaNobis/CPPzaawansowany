// ALGORYTMY_Zadanie03.cpp : 
// Zad 0.3
//Utwórz wektor liczb ca³kowitych od - 100 do 100.
//a) Nastêpnie sprawdŸ czy wszystkie liczby s¹ dodatnie.
//b) Czy istnieje jakakolwiek liczba podzielna przez 3, 5 i 30.
//c) Usuñ z kontenera 0.
//d) Nastêpnie sprawdŸ czy kontener nie zawiera wartoœci 0.
//e) SprawdŸ czy kontener jest posortowany
//f) Skopiuj do drugiego wektora wszystkie liczby wiêksze od 90 i mniejsze od - 90
//g) Skopiuj do innego wektora 10 kolejnych liczb zaczynaj¹c od 78
////

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

#include <iterator>
#include <functional>

void printVector (const std::vector<int>& v)
{
	for (int i : v)
	{
		std::cout << i << " ";
	}
	std::cout << '\n';
}


int main()
{
	std::vector <int> liczby(201);
	std::iota(liczby.begin(), liczby.end(), ( - 100));

	std::for_each(liczby.rbegin(), liczby.rend(), [](const int i) {std::cout << i << " ; "<< std::endl; });

//a) 
	
	std::cout << "a. Nastêpnie sprawdŸ czy wszystkie liczby s¹ dodatnie." << std::endl;

	

	if (std::any_of(liczby.cbegin(), liczby.cend(), [](int i) {return i < 0; }))
	{
	 std::cout << "Nie wszystkie liczby s¹ dodatnie"<< std:: endl;
		}
	

	//b)

	std::cout << "b. Czy istnieje jakakolwiek liczba podzielna przez 3, 5 i 30." << std::endl;

	int dzielnik1 = 3;
	int	dzielnik2 = 5;
	int dzielnik3 = 30;

	auto divByDzielnik = [dzielnik1, dzielnik2, dzielnik3](int i)
	{
			if ((i % dzielnik1) == 0)
			{
				if ((i % dzielnik2) == 0)
				{
					if ((i % dzielnik3) == 0)
						std::cout << i << std::endl;
				}
			}
				
	};

		std::for_each(liczby.cbegin(), liczby.cend(), divByDzielnik);

		//c) i d) i e) - jest posortowany

		std::cout << "c) Usuñ z kontenera 0. Nastêpnie sprawdŸ czy kontener nie zawiera wartoœci 0.  " << std::endl;


		for (std::vector<int>::iterator it = liczby.begin(); it != liczby.end(); ) {
			if (*it == 0)
			{
				it = liczby.erase(it);
			}
			else {
				++it;
			}
		}
		printVector(liczby);

		//f)

		std::cout << "f) Skopiuj do drugiego wektora wszystkie liczby wiêksze od 90 i mniejsze od - 90" << std::endl;


		std::vector<int> nowyVector;
	
		std::copy_if(nowyVector.begin(), nowyVector.end(),
			std::ostream_iterator<int>(std::cout, " "),
			[](int x) { return (x > 90 || x <-90); });

		nowyVector.clear();
		std::copy_if(liczby.begin(), liczby.end(),
			std::back_inserter(nowyVector),
			[](int x) { return (x > 90 || x < -90);  });

		
		std::cout << "Nowy wektor zawiera liczby: " << std::endl;
		
		printVector(nowyVector);


		//g)

		std::cout << "g) Skopiuj do innego wektora 10 kolejnych liczb zaczynaj¹c od 78" << std::endl;

		/*std::vector<int> vector3;
		std::copy_n(liczby.78, 10, vector3.begin());
		std::cout << std::accumulate(v_out.begin(), v_out.end(), 0) << '\n';
	
	*/


	return 0;
}
