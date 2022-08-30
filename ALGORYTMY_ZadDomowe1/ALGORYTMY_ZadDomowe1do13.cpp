// ALGORYTMY_ZadDomowe1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <cmath>


#include <vector>
#include <list> 

#include <numeric>

auto sortInAlphabetOrder(std::string letters)
{
	std::sort(letters.begin(), letters.end());
	std::cout << letters<< "\n";

}

auto shaffleString(std::string beforeShuffle)
{
	//std::random_device rd;
	//std::mt19937 g(rd());

	//std::random_shuffle(beforeShuffle.begin(), beforeShuffle.end(),g);

	std::random_shuffle(beforeShuffle.begin(), beforeShuffle.end());

	std::cout << beforeShuffle << "\n";

}

std::vector <char> commonLetters(std::string s1, std::string s2)
{
	std::vector<char> repeatedLetters;

	for (auto i = s1.begin(); i != s1.end(); ++i)
	{
		if (std::find(s2.begin(), s2.end(), *i) != s2.end())
		{
			repeatedLetters.push_back(*i);
		}
	}
	 return repeatedLetters;
}

auto eraseSpaces(std::string str)
{
	str.erase(remove_if(str.begin(), str.end(), isspace), str.end());
	return str;
}

auto occuranceCounting(std::string str, char c) 
{
auto num_items = std::count(str.cbegin(), str.cend(), c);
		std::cout << "Letter: " << c << " occured : " << num_items << '\n';
	}

auto isPalindrome(std::string s)
{
	return  std::equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());

}

auto isPalindrome2(std::string s)
{
	std::string stringToCheck = s;
	std::reverse(s.begin(), s.end());

	return stringToCheck == s;
}

std::vector<int> squaresFromRange(int a, int b)
{
	std::vector<int> v;
const int numberOfElements = b-a+1;
v.reserve(numberOfElements);
for (int i = a; i < numberOfElements; i++)
	v.push_back(i);

return v;

}









int main()
{
	std::cout << "1. Napisz funkcjê, która przyjmuje stringa, nastêpnie uszereguje wszystkie litery w porz¹dku alfabetycznym i zwraca tak odwróconego stringa (sort)." << std::endl;

	sortInAlphabetOrder("qwertyuiopasdfgh");

	std::cout << "2. Napisz analogiczn¹ funkcjê, która zwróci przemieszanego stringa (random_shuffle). Zwróæ uwagê czy za ka¿dym uruchomieniem, faktycznie string jest przemieszany inaczej" << std::endl;

	shaffleString("123456789");
	shaffleString("123456789");
	shaffleString("123456789");
	shaffleString("123456789");

	std::cout << "3. Napisz funkcjê, która przyjmuje dwa stringi a nastêpnie zwraca vector ich wspólnych liter (powtarzajcych sie w obu stringach)." << std::endl;

	auto fromTwoStrings = commonLetters("abecadlo", "abcdefghijk");
	std::for_each(fromTwoStrings.begin(), fromTwoStrings.end(), [](const char a) {std::cout << a << ","; });


	std::cout << "4. Napisz funkcjê, która usunie spacje z podanego stringa. Zadanie wykonaj na dwóch kontenerach: vector i list (remove i erase)" << std::endl;

	auto doesItWorkGood = eraseSpaces("to jest test do sprawdzenia!");
	std::for_each(doesItWorkGood.begin(), doesItWorkGood.end(), [](const char a) {std::cout << a; });


	std::cout << "5. Napisz funkcjê, która zliczy wyst¹pienia podanej litery w podanym stringu (count)." << std::endl;

	occuranceCounting("Abecadlo z pieca spadlo", 'a');
	// uwaga zlicza oddzielnie du¿e i ma³e litery dlatego 'a' wystêpuje tylko 3 razy!

	std::cout << "6. Napisz funkcjê, która sprawdzi czy podany string jest palindromem (reverse i transform lub equal)" << std::endl;


	std::cout << std::boolalpha << isPalindrome("abba") << std::endl;
	std::cout << std::boolalpha << isPalindrome("radar") << std::endl;
	std::cout << std::boolalpha << isPalindrome("padam") << std::endl;

	std::cout << std::boolalpha << isPalindrome2("abba") << std::endl;
	std::cout << std::boolalpha << isPalindrome2("radar") << std::endl;
	std::cout << std::boolalpha << isPalindrome2("padam") << std::endl;

	std::cout << "7. Napisz funkcjê, która stworzy wektor przechowuj¹cy potêgi kwadratowe z podanego zakresu np od. 3 do 10 (for_each)" << std::endl;


	auto result = squaresFromRange(2, 3);

	std::for_each(result.begin(), result.end(), [](const int i ) {std::cout << i << ", "; });
	std::cout << std::endl << std::endl;
}