/* Finding character status
 * Write a program to take char from input and print in which case it is?
 * for example:-
 * input	output
 *  G		upper case
 *  d		lower case
 *  %		special case
 *  9		numeric case
 *
 */

#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the char = ");
	scanf("%c",&ch);

	((ch >= 'A') && (ch <= 'Z'))?printf("Upper case\n"):
		((ch >= 'a') && (ch <= 'z'))?printf("Lower case"):
		((ch >= '0') && (ch <= '9'))?printf("numeric case"):printf("special case");
}

