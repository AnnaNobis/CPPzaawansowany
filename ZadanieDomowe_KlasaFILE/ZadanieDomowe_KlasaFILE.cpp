// ZadanieDomowe_KlasaFILE.cpp :
//Klasa File
//* RAII
//* c - tor przyjmujacy nazwê pliku, rzuca wyj¹tek gdy nie uda siê otwrzyc pliku
//* d - tor zamyka plik
//* Mile widziane funkjce szablonowe zapisuj¹ce / wczytj¹ce dowonly typ danych(wspieraj¹cy operator << >>)
//* Zak³adamy, ze 1 linia pliku 1 wartoœæ(dane nie mog¹ zwieraæ bia³ych znaków)
//* Zak³adamy, ¿e u¿ytkownik zna format pliku i bêdzie wczytywa³ ró¿ne typy wed³ug znanej sobie kolejnoœci
//np :
//string
//int
//double
//int
//* Dodaj klase Pracownik(imie, nazwisko, losowy numer pracownika, wysokoœæ pensji)
//* Numer pracownika ma siê generowaæ losowo podczas tworznia nowego pracownika, dla u³atwienia mog¹ siê powtarzaæ
//* warto dodaæ operator << i >>
//*U¿yj klasy File do zapisania danych 10 pracowników
//* Wczytaj ze pomoc¹ tej klasy te dane do wektora a nastêpnie wypisz pracowników posortowanych wed³ug wysokoœci pensji

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


    while (file.good() && !file.eof()) // dopóki plik jest dobry i nie dojechalismy do konca pliku
    {
        std::string str;
        //file >> str; //wczytuje kolejne wartosci tak jak przy cin (czyli do pierwszego bia³ego znaku)
        std::getline(file, str); // wczytuje ca³¹ linie - do znaku nowej lini do stringa
        std::cout << str << std::endl;
    }
    file.close();
}
