//WAP to swap the values of two integer variable//
#include<stdio.h>
void main()
{
	int first,second,third;
	printf("\n Enter first number:");
	scanf("%d",&first);
	printf("\n Enter second number:");
	scanf("%d",&second);
	
	third=first;
	first=second;
	second=first;
	
	printf("\n swapping,first number=%d",first);
		printf("\n swapping,second number=%d",second);

}

