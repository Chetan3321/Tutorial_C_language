/* Case Conversion
 * Write a program to convert char from lovercase to higher and viceversa
 * input   output
 *  G       g
 *  z       Z
 *  #      wrong input
 *
 */

#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the char =");
	scanf("%c",&ch);

	if((ch >= 'A') && (ch <= 'Z'))
	{
		ch += 32;
		printf("%c",ch);
	}
	else if((ch >= 'a') && (ch <='z'))
	{
		ch -= 32;
		printf("%c",ch);
	}
	else
	{
		printf("wrong input");
	}
}

