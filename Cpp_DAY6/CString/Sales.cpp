#include <iostream>
#include "Sale.h"

using namespace std;
SalesPerson::SalesPerson()
{
}

SalesPerson::SalesPerson(int id, const char* nm, int dd, int mm, int yy, float hr, float rate, double sale, double com):WageEmployee(id, nm, dd, mm, yy, hr, rate), sales(sale), comm(com)
{
}

void SalesPerson::accept()
{
	Employee::accept();
	cout << "Enter sales and comm" << endl;
	cin >> sales >> comm;
}

void SalesPerson::show()
{
	Employee::show();
	cout << " hrs and rate" << endl;
	cout << sales << " " << comm << endl;
}

float SalesPerson::computesal()
{
	return  sales*comm ;
}
