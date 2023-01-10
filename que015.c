// WAP to input two numbers and print the greatest using conditional operater//
#include<stdio.h>
void main()
{
	int a,b,max;
	printf("\n Enter values for a and b:");
	scanf("%d%d",&a,&b);
	
	max=a>b? a:b;
	printf("\n larger of%d and %d is %d \n",a,b,max);
	
}
