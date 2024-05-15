#include<stdio.h>

int main()
{
	float F,C;
	printf("Enter the value of F = ");
	scanf("%f",&F);
	
	C=(F-32)/1.8;
	printf("%0.2fF = %0.2fC\n",F,C);
	
	C=F;
	F=(C*1.8)+32;
	printf("%0.2fC = %0.2fF\n",C,F);
}
