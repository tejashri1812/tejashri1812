//WAP to input choice(1or2).if choice is 1 print the area of a circle otherwise print the circumference of circke.input the radius from user//
#include<stdio.h>
void main()
{
	float radius;
	int choice;
	
	printf("\n Enter radius:");
	scanf("%f",&radius);
	
	printf("\n 1.area of circle");
	printf("\n 2.area of circumference");
	
	printf("\n Enter choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("\n area of circle:%f",(3.14*radius*radius));
		break;
		case 2:printf("\n circumference of circle:%f",(2*3.14*radius));
		break;
	}
}
