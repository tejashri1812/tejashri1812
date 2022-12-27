#include<stdio.h>

void main()
{
	int width,height,area,perimeter;
	printf("\n enter width and height:");
	scanf("%d%d",&width,&height);
	
	area=width*height;
	printf("\n area of rectangle=%d",area);
	
	perimeter=2*width+2*height;
	printf("\n perimeter of rectangle=%d",perimeter);
}
