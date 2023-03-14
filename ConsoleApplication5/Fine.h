#pragma once
class Fine
{
private:
	short fineAmount = 0;
	string date;
public:
	Fine() = default;
	Fine(short fine , string date)
	{
		this->fineAmount = fine;
		this->date = date;
	}
	Fine(const Fine& fine)
	{
		fineAmount = fine.fineAmount;
		date = fine.date;
	}
	// => Show Fine
	short getFine() { return fineAmount; }
	string getDate() { return date; }

	// => Show
	void show()
	{
		cout <<"Fine amount: " << fineAmount<<" azn" << endl;
		cout <<"Fine date: " << date << endl;
	}
};