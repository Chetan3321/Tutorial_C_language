/* Profit or loss
 * Write a program to enter the cost price and selling price of a product and Calculate the profit or loss of a product.
 *
 * For  example,
 * input	output
 * 10 12	2/- profit
 * 12 10	2/- loss
 * -10 30	wrong input
 *
 */

#include<stdio.h>

int main()
{
	int cp,sp,pl;
	printf("Enter the Cost price and selling price =");
	scanf("%d %d",&cp,&sp);

	if(cp == sp)
	{
		pl = cp-sp;
		if(pl < 0)
		{
			pl = (-pl);
			printf("%d/- profit",pl);
		}
		else
		{
			printf("%d/- loss",pl);
		}
	}
	else
	{
		printf("wrong input");
	}
}
