/* SWAP the bytes in short integer
 * Write a program to swap the bytes in given short integer?
 * Note: input must be in hexadecimal format(hint: use format specifier %hx)
 * For Example,
 * input	output
 * 1234		3412
 * ff00		ff
 * abcd		cdab
 *
 */
#include<stdio.h>

int main()
{
	short unsigned int i;
	printf("Enter the input =");
	scanf("%hx",&i);

	i = ((i<<8) & 0xff00) | ((i>>8) & 0x00ff);
	printf("%hx",i);
}

