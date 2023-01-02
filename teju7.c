#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("\n prime number between 1 to 100 are:");
	for(b=1;b<=100;b++)
	{
		c=0;
		for(a==1;a<=b;a++)
		{
			if(b%a==0)
			c++;
			
		}
	if(c==2)
	printf("\n it is prime:%d",b);	
	}
}
