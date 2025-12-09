/* Set first 5 odd number bit (from LSB)
 * Write a program to set first 5 odd number bit in a given integer without effecting other bits?
 * Note: use bit-wise operators
 * For example,
 * input	output
 * -2		-2
 * 65535	65535
 * 0		682
 */

#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter the no: ");
	scanf("%d", &n);

	n = n|(1<<1);
	n = n|(1<<3);
	n = n|(1<<5);
	n = n|(1<<7);
	n = n|(1<<9);

	printf("%d", n);
}

