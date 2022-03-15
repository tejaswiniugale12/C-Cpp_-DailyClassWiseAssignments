#pragma once


#include "Wage.h"

class SalesPerson : public WageEmployee
{
	double sales, comm;
public:
	SalesPerson();
	SalesPerson(int, const char*, int, int, int,float , float , double , double );
	void accept();//function overrriding
	void show();
	float computesal();

};
