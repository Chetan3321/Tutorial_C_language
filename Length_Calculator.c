/* Length Calculator 
 * Write a program to calculate length in-terms of centimetres and inches
 * for example,
 * Example 1:
 * input: 5
 * output: 
 * 	5 inch = 12.70 cm
 * 	5 cm = 1.97 inch
 *
 * Example 2:
 * input: -5
 * output:
 * 	invalid input
 */

#include<stdio.h>

int main()
{
	float a, inc, cm;
	printf("Enter the value = ");
	scanf("%f",&a);

	(a >= 0)?cm = a * 2.54, printf("\n %.0f inch = %0.2f cm",a,cm),
		inc = a * 0.393, printf("\n %.0f cm = %0.2f inc",a,inc): printf("invalid input");}
