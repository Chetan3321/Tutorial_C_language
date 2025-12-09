/* Circumference of Circle
 * write a program to find the circumference of circle
 * Example 1:
 * 	input: 4
 * 	output: Area of circle:-50.240
 * 	Circumference:-25.120
 *
 * Example 2:
 * 	input: -3
 * 	output: invalid input
 *
 */

#include<stdio.h>

int main()
{
	float i,Area, Circum;
	float pi = 3.14;

	printf("Enter the Radius of circle:");
	scanf("%f",&i);
	Circum = 2 * pi * i;
	Area = pi * i * i;
	(Circum >= 0)?printf("Area of circle : %0.3f, Circumference : %0.3f\n",
			Area,Circum):printf("Invalid Input");
}
