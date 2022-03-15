#pragma once
#include "CString.h"
#include "date.h"
class Employee
{
	int empid;
	CString name;
	Date doj;
public:
	Employee();
	Employee(int empid, const char* nm, int dd, int mm, int yy);
	void accept();
	void show();
};