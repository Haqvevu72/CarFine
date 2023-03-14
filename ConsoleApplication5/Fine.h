#pragma once
class Fine
{
private:
	short fine;
	string date;
public:
	// => Parametrized Constructor
	Fine(short fine,string date)
	{
		this->fine = fine;
		this->date = date;
	}

	// => Show Fine
	short getFine() { return fine; }
	string getDate() { return date; }

};