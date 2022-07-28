//  Zadanie 1.
//A. Utwórz szablon funkcji max(a, b) która porówna i zwróci wiêkszy element.
//Co ze wskaŸnikami ? ?

//B. Przeci¹¿ ten szablon, tak ¿e bêdzie zwraca³ najwiêszy element w tablicy


//C.  Dodaj specjalizacjê szablonu funkcji max() dla typu char* (i const char*) (³añcuchy znaków).
//Do porównywanie ³añichów znaków slu¿y strcmp




#include <iostream>
#include <string.h>

template<typename T>
T max(T a, T b) //szablon
{
    if (a>b)
    {
        return a;
    }
    else 
    {
        return b;
    }
    //return a>b ? a:b; // operator potrójny (ternary)
    return a;
}

template<typename T>
T* max(T* a, T* b) //specjalizacja czêœciowa 
{
    return *a > *b ? a : b;
}

template<> 
char* max(char* a, char* b) // specjalizacja pe³na; podpunkt C
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
template <typename T1>
class A
{
    T1 fieldA;
    T1 funA();

};

template <typename T1>
class B : A<T1>
{
    T1 fieldB;
    void funB(T1 a, T1 b);
};

class C :A<int> //C nie jest szablonem
{

};

template <typename T1>
class D : A<float>
{
    T1 fieldD;
};


template <typename T1, typename T2>
class E : A<T2>
{
    T1 fieldE;
};


class F 
{
    int fieldF;

    template <typename T>
    void funF(T p);

};


int main()
{
    int num1 = 10;
    int num2 = 100;

    std::cout << "Wiêkszy int to: " << max(num1, num2) << std::endl;
    std::cout << "Wiekszy double to: " << max(21.21,21.22) << std::endl;

    int* ptr1 = &num1;
    int* ptr2 = &num2;
    std::cout << "Wiekszy ptr to: " << *max(ptr1, ptr2) << std::endl;

 
    std::cout << "Wiekszy lancuch to: " << max("AaaaBbbCcc","AaBbCc") << std::endl;

    const unsigned int size = 10;
    int tab[size] = { 0,412,123,12,32,11,23,56,1,555 };
    std::cout << "Najwiejszy element tablicy to: " << max(tab,size) << std::endl;


    A<int> objA1;
    A<bool> objA2;
    A<std::string>objA3;
    E<double, bool> objE;
    D<F> objD;

    B<std::string>objB;



}

