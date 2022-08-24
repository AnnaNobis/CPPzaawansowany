/*a) Wygeneruj 100000 losowych liczb z przdziału - 100000 100000
    b) zapisz je do pliku
    c) nastepnie wczytaj je z tego pliku do vectora
    d) wypiszcie 100 pierwszych wczytanych liczb(uzycjie std::advance)*/

#include <iostream>
#include <fstream>
#include <random>

void saveVectorToFile(const std::vector<int>& vec, const std::string& fileName)
{
    std::ofstream file (fileName, std::ios::out | std::ios::app)

        if (file.is_open)

}


int main()
{

    std::random_device randomDevice; 
    std::default_random_engine randomEngine(randomDevice()); //tworzymy sobie silnik losowosci, ktory bedzie zwraca³ nam losowe liczby
    std::uniform_int_distribution<int> intDistro(-100000, 100000); // ubiermy ten nasz silnik w klase zapewniaj¹c¹ nam odpowiedni rozk³ad liczb

    const size_t howManyNumbers = 100000;
    std::vector<int> nums;
    nums.reserve(100000);

    
    for (int i= 0; i < howManyNumbers; ++i)
    {
        nums.push_back(intDistro(randomEngine));
    }


    const std::string fileName = "wylosowaneLiczby.txt"; //nazwa pliku
  //std::ofstream file(fileName);
    std::ofstream file(fileName, std::ios::out | std::ios::app);

    if (file.is_open())
    {
        std::cout << "Plik zostal otwarty" << fileName << std::endl<< std::endl;

        for (const auto& num : nums)
        {
            file << num << '\n';
        }
        file.close();
    }


 

}
