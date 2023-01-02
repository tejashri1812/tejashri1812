#include<stdio.h>

void main()
{
	int no,d,cnt;
	printf("\n enter any number:");
	scanf("%d",&no);
	
	cnt=0;
	for(d=2;d<no;d++)
	{
		if(no%d==0)
		cnt++;
		
	}
	if(cnt==0)
	{
		printf("\n it is prime number");
	}
	else
	{
		printf("\n it is not prime number");
	}
}
