// KONTENERY_Zadanie3.cpp : Zad 3.
//Za pomoc� std::set sprawdz czy w podanym �a�cuchu znak�w wyst�puj� wszystkie litery alfabetu.

#include <iostream>
#include <set>
#include <algorithm>

bool containsAllLetters(std::string text) //chcemy pracowac na kopii bo nie chcemy zmienia� oryginalnego textu
{
    std::set<char> alphabetChecker;
    
    for (auto it = text.begin(); it != text.end(); it++)
    {
        if (*it >= 65 && *it <= 90) //zamie� du�e litery na ma�e
        {
            *it += 32;
        }
        
        if (*it >=97 && *it<=122 ) // policz tylko ma�e litery i wrzu� je do zbioru alphabetChecker
        {
            alphabetChecker.insert(*it);
        }

     }
    return alphabetChecker.size() == 26;
}

unsigned char toLowerCase(unsigned char c)
{
    return std::tolower(c);
}
bool containsAllLetters2(std::string text)
{
    auto removeNonLetters = [](unsigned char c)
    {
        return !((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
    };
    text.erase(std::remove_if(text.begin(), text.end(), removeNonLetters), text.end());

    std::transform(text.begin(), text.end(), text.begin(),
        [](unsigned char c) { return std::tolower(c); });

    std::set<char> alphabetChecker;

    for_each(text.begin(), text.end(), //dla ka�dego elementu wywo�aj lambd�
        [&alphabetChecker](unsigned char c) {alphabetChecker.insert(c); });

    return alphabetChecker.size() == 26;

    //    auto isLowerCaseLetter = [](unsigned char c)
    //    {
    //        return c >= 97 && c <= 122; //char jest z zakresie malych liter ascii
    //    };
    //auto letterCount = std::count_if(text.begin(), text.end(), isLowerCaseLetter);
}

bool containsAllLetters3(const std::string& text)
{
    std::set<char> alphabetChecker;

    auto fillSetWithOnlyLetters = [&alphabetChecker](unsigned char c)
    {
        if (c >= 97 && c < 122)
        {
            alphabetChecker.insert(std::tolower(c));
       }

        if (c < 97 && c < 122)
        {
            alphabetChecker.insert(c);
        }
    };
    auto fillSetWithOnlyLetters2 = [&alphabetChecker](unsigned char c)
    {
        if ((c >= 65 && c <= 90) || (c<= 97 && c<= 122))
        {
            alphabetChecker.insert(std::tolower(c));
        }
    };

    std::for_each(text.begin(), text.end(), fillSetWithOnlyLetters);

    return alphabetChecker.size() == 26;
}

int main()
{
    std::cout << "Hello World!\n";
}

