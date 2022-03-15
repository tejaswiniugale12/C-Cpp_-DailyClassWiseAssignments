#include "calculate.h"
#include <iostream>
#include "calculate.h"
using namespace std;


CPoint::CPoint(float w,float h=0)
{
	this->width=w;
	this->height = h;
}

void CPoint::operator+()
{
	
}



void CRectable::get_shape_para()
{
	cout << "Enter the Width and height" << endl;
	int w, h;
	cin >> w, h;
	CPoint::CPoint(w, h);
	
}

	


void CCircle::get_shape_para()
{

	cout << "Enter the Radius" << endl;
	int w;
	cin >> w;
	CPoint::CPoint(w,0);
}



void CSqaure::get_shape_para()
{

	cout << "Enter the Width and height" << endl;
	int w, h;
	cin >> w, h;
	CPoint::CPoint(w, h);
}
