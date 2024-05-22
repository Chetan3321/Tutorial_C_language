/* Finding Nearest vowel (for only lower case and use control statemnts)
 * Write a program to find the nearest vowel for a given character?
 *
 * note 1: Input is only lower case
 * note 2: Develop logic by using control statemnts
 *
 * For example,
 * Example1: input = a	output = Nearest vowel is a
 * Example2: input = c	output = Nearest vowel are a,e
 * Example3: input = 5	output = wrong input
 *
 */

#include<stdio.h>

int main()
{
	char ch;
	printf("input = ");
	scanf("%c",&ch);

	if(ch >= 'a' && ch <= 'z')
	{
		if(ch >= 'a' && ch <= 'b')
		{
			printf("Output = Nearest vowel is a");
		}
		else if(ch == 'c')
		{
			printf("Output = Nearest vowel is a,e");
		}
		else if(ch == 'd')
		{
			printf("Output = Nearest vowel is e");
		}
		else if(ch == 'e')
		{
			printf("Output = Nearest vowel is a,i");
		}
		else if(ch == 'f')
		{
			printf("Output = Nearest vowel is e");
		}
		else if(ch == 'g')
		{
			printf("Output = Nearest vowel is e,i");
		}
		else if(ch >= 'h' && ch <= 'k')
		{
			printf("Output = Nearest vowel is i");
		}
		else if(ch == 'l')
		{
			printf("Output = Nearest vowel is i,o");
		}
		else if(ch >= 'm' && ch <= 'q')
		{
			printf("Output = Nearest vowel is o");
		}
		else if(ch == 'r')
		{
			printf("Output = Nearest vowel is o,u");
		}
	}
	else
	{
		printf("Output = Wrong input");
	}
}
