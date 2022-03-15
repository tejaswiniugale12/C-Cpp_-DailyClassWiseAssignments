#pragma once
class CPoint
{
	float width, height;
	

public:
	CPoint(int,int);

	void operator+();
};
class CRectable : public CPoint
{
public:
	CRectable();
	void get_shape_para();
};

class CSqaure : public CPoint
{

public:
	CSqaure();
	void get_shape_para();
};

class CCircle : public CPoint
{
public:
	CCircle();
	void get_shape_para();
};