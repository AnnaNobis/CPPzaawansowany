#pragma once


//class SimpleSmartPointer
//{
//	int* _data;
//
//public:
//	SimpleSmartPointer(int* data)
//		: _data(data)
//	{
//		this->_data = data;
//	}
//
//	~SimpleSmartPointer()
//	{
//		delete _data;
//		// _data = nullptr; // tutaj nie potrzeba po po delete obiekt naszej klasy ju¿ nie istnieje i nie ma mo¿liwoœci odwo³aæ siê niej
//	}
//
//	int operator*()
//	{
//		return *_data;
//	}
//
//	int* operator ->()
//	{
//		return _data;
//	}
//
//};


//teraz szablon:
template<typename T>
class SimpleSmartPointer
{
	T* _data;

public:
	SimpleSmartPointer(T* data)
		: _data(data)
	{
		this->_data = data;
	}

	~SimpleSmartPointer()
	{
		delete _data;
		// _data = nullptr; // tutaj nie potrzeba po po delete obiekt naszej klasy ju¿ nie istnieje i nie ma mo¿liwoœci odwo³aæ siê niej
	}

	int operator*()
	{
		return *_data;
	}

	int* operator ->()
	{
		return _data;
	}

};