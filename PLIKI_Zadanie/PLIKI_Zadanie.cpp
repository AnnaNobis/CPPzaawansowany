// PLIKI_Zadanie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <numeric>



int main()
{
    std::string filenamewithpath("C:\\Users\\anian\\source\\kursSDA\\ZaawansowanyCPP\\ZaawansowanyCPP\\PLIKI_Zadanie\\plikTeksowy.txt"); // cała ścieżka do pliku
    std::string filename("PLIKI_Zadanie.cpp"); //szuka pliku obok pliku wykonywalnego (.exe) naszego programu
    std::ifstream file(filenamewithpath); // tworzymy sobie wejsciowy strumien plikowy

    if (file.is_open()) //sprawdzenie czy otworzyłem plik
    {
        std::cout << "hurra wczytałem plik " << filename << std::endl << std::endl;
    }
    else
    {
        std::cout << "nie mogę otworzyć pliku :(";
        return -1;
    }

    while (file.good() && !file.eof()) // dopóki plik jest dobry i nie dojechalismy do konca pliku
    {
        std::string str;
        //file >> str; //wczytuje kolejne wartosci tak jak przy cin (czyli do pierwszego białego znaku)
        std::getline(file, str); // wczytuje całą linie - do znaku nowej lini do stringa
        std::cout << str << std::endl;
    }
    file.close();

    std::string filenametowrite("C:\\Users\\anian\\source\\kursSDA\\ZaawansowanyCPP\\ZaawansowanyCPP\\PLIKI_Zadanie\\test.txt");
    std::ofstream filetowrite(filenametowrite, std::ios::out | std::ios::trunc);

    if (filetowrite.is_open()) //sprawdzenie czy otworzyłem plik
    {
        for (int i = 0; i <= 10000; ++i)
        {
            if (filetowrite.good())
            {
                filetowrite << i << "\n"; //nie przekazuje std::endl //zapisuje dane tak jak do cout
            }
        }

       filetowrite.close();
    }
    else
    {
        std::cout << "nie mogę otworzyć pliku do zapisu";
        return -1;
    }



	/*a) Wygeneruj 100000 losowych liczb z przdziału - 100000 100000
	b) zapisz je do pliku
	c) nastepnie wczytaj je z tego pliku do vectora
	d) wypiszcie 100 pierwszych wczytanych liczb(uzycjie std::advance)*/


    //std::random_device randomDevice; //urz¹dzenie do generowania entropii (zalezne od systemu operacyjnego)
    //std::default_random_engine randomEngine(randomDevice()); //tworzymy sobie silnik losowosci, ktory bedzie zwraca³ nam losowe liczby
    //std::uniform_int_distribution<int> intDistro(-100000, 100000); // ubiermy ten nasz silnik w klase zapewniaj¹c¹ nam odpowiedni rozk³ad liczb
   


    //  std::string fileName("C:\\Users\\anian\\source\\kursSDA\\ZaawansowanyCPP\\ZaawansowanyCPP\\liczbylosowe.txt");
    //    std::ofstream fileToWrite(fileName, std::ios::out | std::ios::trunc);

    //   std::vector<int> vect;
    //
 
}


