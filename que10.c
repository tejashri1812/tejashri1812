// WAP to input the number the days from the user and convert it into years,weeks and days[year=days/365,week=days/7]//(*a=days,b=years,c=weeks*)//
#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("\n Enter the days:");
	scanf("%d",&a);
	
	b=(a/365);
	c=(a % 365) / 7;
	a=a-((b*365)+(c));
	
	printf("\n %d year,%d weeks,%d days",b,c,a);
	
	
	
}

