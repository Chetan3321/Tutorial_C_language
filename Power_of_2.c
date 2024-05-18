/*Power of 2
 * Write a program to check whether given number is power of 2 or not ?
 * for example,
 * input	 output
 *  32		32 is power of 2
 *  -42 	wrong input
 *  15		15 is not a power of 2
 *
 */

#include<stdio.h>

int main()
{
	int n,org = 0, sum = 0;

	printf("Enter the no. :");
	scanf("%d",&n);

	org = n;

	if(n <= 0)
	{
		printf("wrong input");
	}
	else
	{
		while(n != 1)
		{
			n = n/2;
			sum = sum + n;
		}
		sum++;
		(sum == org)?printf("%d is power of 2\n",org):
				printf("%d is not a power of 2\n",org);
	}
}
