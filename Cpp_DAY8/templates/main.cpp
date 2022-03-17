#include <iostream>
#include"mystack.h"
#include"mystack.cpp"//templates have internal linkage
using namespace std;

/*void menu(Mystack &ss)
{
	char choice = 'y';
	int values;
	while (choice == 'y')
	{
		cout << "Enter the value to push" << endl;
		cin >> values;
		ss.push(values);
		cout << "Enter y to continue" << endl;
		cin >> choice;
	}
}*/
int main()
{
	Mystack <const char* >s1;
	try 
	{
		//s1.menu();
		s1.push("Hello");
		s1.push("Tejaswini");
		s1.push("Neha");
		s1.push("Aditi");
		s1.push("Ashish");
	}
	catch (const char*s)
	{
		cout << s << endl;
	}
	s1.display();

	try
	{
		cout << "Popped element is" << s1.pop() << endl;
		cout << "Popped element is" << s1.pop() << endl;
		cout << "Popped element is" << s1.pop() << endl;
		cout << "Popped element is" << s1.pop() << endl;
		cout << "Popped element is" << s1.pop() << endl;
	}
	catch (const char *s)
	{
		cout << s << endl;
	}
	s1.display();
	/////////////////////////////////////////////////////////////////////////////////

	Mystack <double>s2;
	try
	{
		s2.push(33.33);
		s2.push(44.90);
		s2.push(2.0);
		s2.push(9.00);
		s2.push(3.0);
	}
	catch (const char*s)
	{
		cout << s << endl;
	}
	try
	{
		cout << "Popped element is" << s2.pop() << endl;
		cout << "Popped element is" << s2.pop() << endl;
		cout << "Popped element is" << s2.pop() << endl;
		cout << "Popped element is" << s2.pop() << endl;
		cout << "Popped element is" << s2.pop() << endl;
	}
	catch (const char *s)
	{
		cout << s << endl;
	}
	s1.display();

	return 0;
}