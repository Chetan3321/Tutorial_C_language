/* Tringle is valid or not - based on angles(using if else)
 * Write a C program to check wether a triangle is valis or not if angles are given using if else.
 *
 * Input all three angles of triangle in some variables say angle1, angle2, angle3.
 * Find sum of all three angles, if sum is equal to 180 then it is valid otherwise mot a valid.
 * In addition, make sure angles are greater then 0
 *
 * For example,
 * input	output
 * 60 60 60	valid triangle
 * 87 60 60	invalid triangle
 * -60 60 60	wrong input
 * 0 60 120	wrong input
 */

#include<stdio.h>

int main()
{
	int sum, a1, a2, a3;
	printf("Enter the 3 angles :");
	scanf("%d %d %d",&a1,&a2,&a3);

	sum = a1+a2+a3;

	if((a1<=0)||(a2<=0)||(a3<=0))
	{
		printf("Wrong input");
	}
	else if(sum == 180)
	{
		printf("Valid Triangle");
	}
	else
	{
		printf("invalid Triangle");
	}
}
