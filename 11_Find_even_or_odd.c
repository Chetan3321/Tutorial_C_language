/*Find even or odd
 * write a program to check given number is even or odd using bit-wise operators?
 * For example ,
 * input  output
 * 4 	  even
 * 5	  odd
 * -4	  even
 * 0	  you have supplied Zero
 */

#include<stdio.h>

int main()
{
	int x;
	printf("Enter the No. :");
	scanf("%d", &x);
	if(x == 0)
	{
		printf("you have supplied zero");
	}
	else if(x%2 == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}

