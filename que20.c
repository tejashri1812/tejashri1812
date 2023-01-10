//WAP to find out the greatest of three numbers using conditional operator//
#include<stdio.h>
void main()
{
	int a,b,c,big;
	printf("\n Enter 3 number s:");
	scanf("%d %d %d",&a,&b,&c);
	
	big=(a>b && a>c? a:b>c? b:c);
	
	printf("\n The biggest number is:%d",big);
}
