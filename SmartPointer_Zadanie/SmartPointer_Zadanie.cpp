
#include <iostream>
#include "SimpleSmartPointer.hpp"
#include "SharedSmartPointer.hpp"

struct Foo
{
    Foo(int in): a(in) {}

    void print() const
    {
        std::cout << "a= " << a << '\n';
    }
    int a;
};

void print(SharedSmartPointer<int> ptrFun)
{
    std::cout << "Wartosc pod wskaznikiem: " << *ptrFun;
}

void print(SimpleSmartPointer<int> ptrFun)
{
    std::cout << "Wartosc pod wskaznikiem: " << *ptrFun;
}

int main()
{
 
    
    SimpleSmartPointer<int> ptr(new int(7));         

  

    //print(ptr);
    //std::cout << "Wartosc pod wskaznikiem: " << *ptr;

    SimpleSmartPointer<Foo> ptrFoo(new Foo(666));
    ptrFoo->print();
    (*ptrFoo).print(); // dok³adnie to samo co linijka wy¿ej tylko trudniejszy zapis

    SharedSmartPointer<int> ptr1(new int(66)); //licznik =1
    SharedSmartPointer<int> ptr2(ptr1); //licznik =2
    print(ptr2); ////licznik =3 w funkcji
    //licznik = 2

}
//licznik = 1
//licznkik = 0


 

//
//int unsafe()
//{
//    A* a = new A;
//
//    if (a->f())
//    {
//        B* b = new B;
//        if (b->f())
//        {
//            int ret = b->g();
//            delete b;
//                delete a;
//                return ret;
//        }
//        else
//        {
//            int ret = a->g();
//            delete b;
//            delete a;
//            return ret;
//        }
//           
//    }
//  delete a;
//    return 0;
//  
//
//}
