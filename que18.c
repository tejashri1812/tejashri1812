//WAP to input inches from user and convert it into yard,feet//
#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter any number:");
	scanf("%d",&num);
	
	if(num % 2==0)
	printf("%d is even",num);
	else
	printf("%d is odd",num);
}
