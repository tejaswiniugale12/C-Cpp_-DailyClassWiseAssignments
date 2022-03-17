#pragma once

//Template must be initialized at the place of decalaration in header files
//Templates have internal linkages
//t IS JUST A PLACE HOLDER FOR DATA type..
template<class T>
void myswap(T& x, T& y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

void myswap(char x[20], char y[20])
{
	char temp[20];
	strcpy(temp, x);
	strcpy(x, y);
	strcpy(y, temp);
}

template<typename T1, typename T2>
void show(T1 &&x, T2 &&y)
{
	std::cout << x << " " << y << endl;
}
