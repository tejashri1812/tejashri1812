#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	printf("enter marks:");
	scanf("%d",&marks);
	
	if(marks>=40)
	printf("\n student result is pass");
	else
	printf("\n student result is fail");
	getch();
}
