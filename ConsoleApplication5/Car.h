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
	// => We must overload less than operator just because in map keys must be sorted.
	bool operator<(const Car& c) const
	{
		if (year != c.year)
			return year < c.year;
	}
};