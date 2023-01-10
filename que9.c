//WAP to input the principle,rate and time from the user and calculate the simple interest and total amount.Display all the values//
#include<stdio.h>
void main()
{
	float principle,time,rate,SI,total;
	
	printf("\n Enter principle:");
	scanf("%f",&principle);
	
	printf("\n Enter Time:");
	scanf("%f",&time);
	
	printf("\n Enter rate:");
	scanf("%f",&rate);
	
	SI=(principle*time*rate)/100;
	
	printf("\n Simple Interest=%f",SI);
	
	total=SI+principle;
	printf("\n total:%f",total);
	
	
}
