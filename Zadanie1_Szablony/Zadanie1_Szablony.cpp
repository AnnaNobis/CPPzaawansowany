//  Zadanie 1.
//A. Utw�rz szablon funkcji max(a, b) kt�ra por�wna i zwr�ci wi�kszy element.
//Co ze wska�nikami ? ?

//B. Przeci�� ten szablon, tak �e b�dzie zwraca� najwi�szy element w tablicy


//C.  Dodaj specjalizacj� szablonu funkcji max() dla typu char* (i const char*) (�a�cuchy znak�w).
//Do por�wnywanie �a�ich�w znak�w slu�y strcmp

//D. Napisz klase StaticTable, kt�ra b�dzie mog�a przechowywa� N element�w dowolnego typu.
//Napisz specjalizacj� dla wska�nik�w.
//Napisz specjalizacj� dla N = 0.


#include <iostream>
#include <string.h>

template<typename T>
T max(T a, T b)
{
    if (a>b)
    {
        return a;
    }
    else 
    {
        return b;
    }
    //return a>b ? a:b; // operator potr�jny (ternary)
    return a;
}

template<typename T>
T* max(T* a, T* b)
{
    return *a > *b ? a : b;
}

template<>
char* max(char* a, char* b) // podpunkt C
{
    if (strcmp(a, b) > 0) //int strcmp( const char *lhs, const char *rhs ); Compares two null - terminated byte strings lexicographically.
    {
        return a;
   }
    else
    {
        return b;
    }
      
    }

template <typename T>
T max(T* data, const unsigned int n)
{
    T tmpMax = data[0];

    
    for (int i = 0; i < size; ++i)
    {
        i = max;
        
    }
    else
    return
    i++;


}

int main()
{
    int num1 = 10;
    int num2 = 100;

    std::cout << "Wi�kszy int to: " << max(num1, num2) << std::endl;
    std::cout << "Wiekszy double to: " << max(21.21,21.22) << std::endl;

    int* ptr1 = &num1;
    int* ptr2 = &num2;
    std::cout << "Wiekszy ptr to: " << *max(ptr1, ptr2) << std::endl;

 
    std::cout << "Wiekszy lancuch to: " << max("AaaaBbbCcc","AaBbCc") << std::endl;

    const unsigned int size = 10;
    int tab[size] = { 0,412,123,12,32,11,23,56,1,555 };
    std::cout << "Najwiejszy element tablicy to: " << max(tab,size) << std::endl;
}

