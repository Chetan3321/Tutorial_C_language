/*Clear first 5 odd number bits (from LSB)
 * Write a program to clear first 5 odd number bits in a given integer without effecting other bits?
 * note: use bit-wise operators
 * For example,
 * inout	output
 * 0		0
 * 65535	64853
 * 56		16
 * -10		-684
 *
 */

#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number=");
	scanf("%d", &n);

	n = n&~(1<<1);
	n = n&~(1<<3);
	n = n&~(1<<5); 
	n = n&~(1<<7);
	n = n&~(1<<9);

	printf("%d", n);
}

