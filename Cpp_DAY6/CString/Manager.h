#pragma once


#include "CString.h"
#include "date.h"
class Employee
{
	int man_id;
	CString name;
	Date doj;
public:
	Employee();
	Employee(int man_id, const char* nm, int dd, int mm, int yy);
	void accept();
	void show();
};