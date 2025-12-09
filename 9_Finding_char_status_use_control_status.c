/*Finding character status ( use Control Statements)
 * Write a program to take char from input and print in which case it is?
 * Note: develop logic by using control statements
 *
 * for example:
 * input	output
 *   G		upper case
 *   d		lower case
 *   %		special case
 *   9		numeric case
 *
 */

#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the charecter: ");
	scanf("%c",&ch);

	if((ch >= 'A') && (ch <= 'Z'))
	{
		printf("Upper case");
	}
	else if((ch >= 'a') && (ch <= 'z'))
	{
		printf("Lower case");
	}
	else if((ch >= '0') && (ch <= '9'))
	{
		printf("Numeric case");
	}
	else
	{
		printf("Special case");
	}
}
