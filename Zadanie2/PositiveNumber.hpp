#pragma once
#include <exception>

class PositiveNumber
{
public:
	PositiveNumber();
	PositiveNumber(double value);
	PositiveNumber(float value);
	PositiveNumber(int value);
	virtual ~PositiveNumber() = default;
	PositiveNumber(const PositiveNumber&) = default; //CPP11 jawnie prosimy kompilator o wygenerowanie domyslnego c-tora kopiujacego

	double getValue() const;
	void setValue(double value);
	void setValue(float value);
	void setValue(int value);

	void add(double value);
	void add(float value);
	void add(int value);
	void substract(double value);
	void substract(float value);
	void substract(int value);

	//PositiveNumber& operator+(const PositiveNumber& second);
	//PositiveNumber& operator-(const PositiveNumber& second);
	//PositiveNumber& operator+(double number);
	//PositiveNumber& operator-(double number);
	//operator + - dla float i int
	//oraz operator + i - poza klasa
	PositiveNumber& operator=(const PositiveNumber& second); //ten powinien byæ impementowany wewnatrz klasy

private:
	double _value;

};

//te operatory nie zmieniaj¹ obiektów klasy, wiêc jeœlki chcemy u¿ywaæ ich matetatycznie to lepiej u¿ywaæ ich poza klas¹
PositiveNumber& operator+(double first, const PositiveNumber& second);
PositiveNumber& operator-(double first, const PositiveNumber& second);
