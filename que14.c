// WAP to number and print their quotient and reminder//
#include<stdio.h>
void main()
{
	int dividend,divisior,quotient,remainder;
	
	printf("\n Enter dividend:");
	scanf("%d",&dividend);
	
	printf("\n Enter divisior:");
	scanf("%d",&divisior);
	
	quotient=dividend/divisior;
	
	remainder=dividend%divisior;
	
	printf("\n Quotient=%d",quotient);
	
	printf("\n Remainder=%d",remainder);
	
	
}
