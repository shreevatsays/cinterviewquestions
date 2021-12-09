/*
 * C programming Interview Questions
 *
 * Find the sum of any two integers using pointers
*/
#include <stdio.h>

int main()
{

	int a=10, b=20;
	int *ptr1, *ptr2, sum;

	ptr1 =&a;
	ptr2 =&b;

	sum = *ptr1+*ptr2;

	printf("A: %d", a);
	printf("\r\nB: %d", b);
	printf("\r\nSum: %d", sum);

 return 0;
}
