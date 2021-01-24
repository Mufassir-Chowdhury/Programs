#include<stdio.h>
int main()
{
	int m[4][5];
	m[3][4] = 3;

	printf("%p %p", m, (*(m+3)+4));
	return 0;
}