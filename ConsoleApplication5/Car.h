#pragma once
class Car
{
private:
	string marka;
	string model;
	short year;
public:
	// => Parametrized Constructor
	Car(string marka,string model,short year)
	{
		this->marka = marka;
		this->model = model;
		this->year = year;
	}

};