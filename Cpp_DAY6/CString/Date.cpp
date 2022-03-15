#include <iostream>
#include "date.h"

using namespace std;

Date::Date() :dd(1), mm(10), yy(1970)
{

}



Date::Date(int dd, int mm, int yy)
{
	this->dd = dd;
	this->mm = mm;
	this->yy = yy;
}

void Date::accept_date()
{
	cout << "Enter the date month year\n";
	cin >> dd >> mm >> yy;

}

void Date::show_date()
{
	cout << dd << ":" << mm << ":" << yy << endl;
}
//istream& operator >> (istream& in, Date& c)
//{
//	in >> c.dd >> c.mm >> c.yy;
//	return in;
//}
//ostream& operator << (ostream& out, Date& c)
//{
//	 out << c.dd << ":" << c.mm << ":" << c.yy << endl;
//	return out;
//}
