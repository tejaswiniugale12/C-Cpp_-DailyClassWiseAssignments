#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
	array<float, 5> arr1 = { 10,20,30,40,50 };
	for (int i = 0; i < arr1.size(); i++)
	{
		arr1[i] = 0;
		cout << arr1[i] << endl;
	}

	/*
	vector<int> v1 = { 10,20,30,40,50 };//object of vector class
	
	//for_each(v1.begin(), v1.end(), show);
	v1.push_back(100);
	v1.push_back(200);
	v1.push_back(300);
	v1.insert(v1.begin(), 99);
	v1.erase(v1.begin(), v1.end() - 2);
	//v1.erase(v1.begin()+2, 999);

	//cout << v1.size() << endl;
	//cout << v1.capacity() << endl;

	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << v1.at(i) << endl;
	v1[0] = 1000;
	v1[1] = 2000;

	cout << "Using Iterators to display contents of vector " << endl;
	for (vector<int>::iterator itr = v1.begin(); itr != v1.end(); ++itr)
		cout << *itr << endl;
//*****************************************************************************************
	cout << "Using Constant Iterators to display contents of vector " << endl;
	for (vector<int>::const_iterator citr = v1.cbegin(); citr != v1.cend(); ++citr)
		cout << *citr << endl;

	cout << "Using Reverse Iterators to display contents of vector " << endl;
	for (vector<int>::reverse_iterator ritr = v1.rbegin(); ritr != v1.rend(); ++ritr)
		cout << *ritr << endl;
//*****************************************************************************************

	vector<int>::iterator myitr = v1.begin();
	cout << "First element of vector is" << *myitr << endl;
	myitr = v1.end() - 1;
	cout << "First element of vector is" << *myitr << endl;

	//syntax for above commented statement
	cout << "Using range based for loop " << endl;
	for (auto i : v1)
		cout << i << endl;



	/*int arr[20];
	Employee e1[3];

	Employee* eptr = new Employe();
	eptr->accept();
	delete eptr;

	vector<Employee> v1;
	v1.push_back(Employee("100", "Tejaswini"));*/
	return 0;
}