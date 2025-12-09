/*Power of 2 or not? (use control statemnts)
 * write a program to check whether given number is power of 2 or not?
 * note: develop logic by using control statemnts
 * for example:
 * input	output
 *  32		 32 is power of 2
 *  -42		 wrong input
 *  15		 15 is not a power of 2
 *
 */

#input<stdio.h>

int main()
{
	int x;
	printf("Enter the Number: ");
	scanf("%d", &x);

	if(x <= 0)
	{
		printf("Wrong input");
	}
	else if((x &&(x&(x-1))) == 0)
	{
		printf("%d is power of 2",x);
	}
	else
	{
		printf("%d is not a power of 2",x);
	}
}

