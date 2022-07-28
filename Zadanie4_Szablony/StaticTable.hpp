#pragma once
//szablon tylko w hpp bo musi mieæ od razu implementacje

template <typename T, unsigned int N>
class StaticTable
{

	T tab[N]; //bo int tab[100];

public:
	T& operator[](const unsigned int i);

	template<typename T2>
void print (T2 separator)
{
//wypisuje cala tablice uzywajac zmiennej T2 separator jako znaku rozdzielajacego wartosci
}

};


//SPECJALIZACJA SZABLONU KLASY
template <unsigned int N>
class StaticTable<bool, N>
{


public:
	bool& operator [](const unsigned int i)
	{
		//TO DO wyjatek out of range gdy i => N;
		return tab[i];
	}
};




template <typename T, unsigned int N>
T& StaticTable::operator[](const unsigned int i)
{
	//TO DO - wyj¹tek out of range gdy i >=N;
	return tab[i];

}





