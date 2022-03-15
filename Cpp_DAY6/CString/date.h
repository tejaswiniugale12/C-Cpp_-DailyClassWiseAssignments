#pragma once
class Date
{
	int dd, mm, yy;
public:
	Date();
	Date(int dd , int mm ,int yy);
	void accept_date();
	void show_date();
	/*friend istream& operator >> (istream& in, Date& c);
	friend ostream& operator << (ostream& out, Date& c);*/

};