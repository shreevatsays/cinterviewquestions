/*
 * C programming Interview Questions
 *
 * Find the sum of any two integers using pointers
 * Accept input two integers from standard input device(keyboard)
*/
#include <stdio.h>

int main()
{

	int a, b;
	int *ptr1, *ptr2, sum;

	printf("Enter A number(integer): ");
	scanf("%d", &a);
	printf("Enter B number(integer): ");
	scanf("%d", &b);

	ptr1 =&a;
	ptr2 =&b;

	sum = *ptr1+*ptr2;

	printf("A: %d", a);
	printf("\r\nB: %d", b);
	printf("\r\nSum: %d", sum);

 return 0;
}
