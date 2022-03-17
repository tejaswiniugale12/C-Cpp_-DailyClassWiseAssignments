#include <iostream>
#include"mystack.h"
using namespace std;

template<typename T1>
Mystack<T1>::Mystack()
{
	top = -1;
	size = 5;
	m_pbuff = new T1[size];
}
template<typename T1>
Mystack<T1>::~Mystack()
{
	if (m_pbuff)
		delete[] m_pbuff;
	m_pbuff = nullptr;

}
template<typename T1>
void Mystack<T1>::push(T1 num)
{
	if (top == size - 1)
		throw "stack is full";
	else
		m_pbuff[++top] = num;

}
template<typename T1>
T1 Mystack<T1>::pop()
{
	if (top == -1)
		throw "stack is empty";
	else
		return m_pbuff[top--];

}
template<typename T1>
void Mystack<T1>::display()
{
	int t = top;
	if (t == -1)
		cout << "Stack empty" << endl;
	else 
	{
		while (t >= 0)
		{
			cout << m_pbuff[t] << endl;
			t--;
		}
	}
}