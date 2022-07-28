#pragma once
#include <iostream>
#include <memory>

class Chicken
{


public:
	Chicken()
	{
		std::cout << "Chicken"<<std::endl;
	}
	~Chicken()
	{
		std::cout << "Destruktor Chicken" << std::endl;
	}

};




//3.
//a) Stwórz shared_ptr na Kurczaka na dwa sposoby : za pomoc¹ new i
//make_shared.
//b) Stwórz vector<shared_ptr<Kurczak>> i umieœæ w nim kilka razy ten sam
//obiekt klasy Kurczak.SprawdŸ liczbê referencji.Wywo³aj metodê reset na
//pierwszym wskaŸniku(pkt a)
//c) Wyczyœæ wektor i ponownie sprawdŸ liczbê referencji
