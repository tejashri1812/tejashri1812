//WAP to input a number.if the number is evevn,print its square otherwise print its cube//
#include<stdio.h>
void main()
{
	int no,square,cube;
	printf("\n Enter any number:");
	scanf("%d",&no);
	
	if(no%2==0)
	{
		printf("\n it is even");
		square=no*no;
		printf("\n square:%d",square);
		
		cube=no*no*no;
		printf("\n cube:%d",cube);
		
	}
   else
     {
     	printf("\n it is odd");
	 }
}

