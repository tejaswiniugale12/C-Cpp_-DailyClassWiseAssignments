#include"string.h"

void myswap(char x[20], char y[20])
{
	char temp[20];
	strcpy(temp, x);
	strcpy(x, y);
	strcpy(y, temp);
}
