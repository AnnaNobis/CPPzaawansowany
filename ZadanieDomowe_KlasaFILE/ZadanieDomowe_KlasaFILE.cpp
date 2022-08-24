// ZadanieDomowe_KlasaFILE.cpp :
//Klasa File
//* RAII
//* c - tor przyjmujacy nazw� pliku, rzuca wyj�tek gdy nie uda si� otwrzyc pliku
//* d - tor zamyka plik
//* Mile widziane funkjce szablonowe zapisuj�ce / wczytj�ce dowonly typ danych(wspieraj�cy operator << >>)
//* Zak�adamy, ze 1 linia pliku 1 warto��(dane nie mog� zwiera� bia�ych znak�w)
//* Zak�adamy, �e u�ytkownik zna format pliku i b�dzie wczytywa� r�ne typy wed�ug znanej sobie kolejno�ci
//np :
//string
//int
//double
//int
//* Dodaj klase Pracownik(imie, nazwisko, losowy numer pracownika, wysoko�� pensji)
//* Numer pracownika ma si� generowa� losowo podczas tworznia nowego pracownika, dla u�atwienia mog� si� powtarza�
//* warto doda� operator << i >>
//*U�yj klasy File do zapisania danych 10 pracownik�w
//* Wczytaj ze pomoc� tej klasy te dane do wektora a nast�pnie wypisz pracownik�w posortowanych wed�ug wysoko�ci pensji

#include <iostream>
#include <fstream>






File::File()
{
    std::ifstream myfile;
    myfile.open("data.txt");
    if (!myfile.fail())
    {
        for (int r = 0; (r < 3) && (!myfile.eof()); r++)
            for (int c = 0; (c < 5) && (!myfile.eof()); c++) myfile >> array[r][c];
        myfile.close();
    }

    // only for checking
    for (int r = 0; (r < 3); r++)
    {
        for (int c = 0; (c < 5); c++) << std::cout << array[r][c] << " ";
        std::cout << std::endl;
    }
}




class Pracownik
{
    std::string _name, _surname; 
    int _employeerNumber();
    int generateID();
    int _salary;

public:
    Pracownik();
    Pracownik(employeerNumber)
    {
        this _employeerNumber = employeerNumber;
        generateID();
    }

};

int main()
{
    File file;


    while (file.good() && !file.eof()) // dop�ki plik jest dobry i nie dojechalismy do konca pliku
    {
        std::string str;
        //file >> str; //wczytuje kolejne wartosci tak jak przy cin (czyli do pierwszego bia�ego znaku)
        std::getline(file, str); // wczytuje ca�� linie - do znaku nowej lini do stringa
        std::cout << str << std::endl;
    }
    file.close();
}
