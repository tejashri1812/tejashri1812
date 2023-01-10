// WAP to input radius and calculate the area and circumference of a circle
#include<stdio.h>
void main()
{
	float radius,area,circumference;
	printf("\n Enter radius:");
	scanf("%f",&radius);
	
	area=3.14*radius;
	printf("\n area of circle=%f",area);
	
	circumference=2*3.14*radius;
	printf("\n circumference of circle=%f",circumference);
}

