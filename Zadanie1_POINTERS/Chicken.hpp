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
//a) Stw�rz shared_ptr na Kurczaka na dwa sposoby : za pomoc� new i
//make_shared.
//b) Stw�rz vector<shared_ptr<Kurczak>> i umie�� w nim kilka razy ten sam
//obiekt klasy Kurczak.Sprawd� liczb� referencji.Wywo�aj metod� reset na
//pierwszym wska�niku(pkt a)
//c) Wyczy�� wektor i ponownie sprawd� liczb� referencji
