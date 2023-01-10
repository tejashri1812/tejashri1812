//WAP to input roll number,name and marks of a student in 5 subject and calculate the total and average marks.Display all values
#include<stdio.h>
void main()
{
	int roll_no,sub1,sub2,sub3,sub4,sub5,total,average;

	char studname[20];
	
	printf("\n Enter a roll_no :");
	scanf("%d",&roll_no);
	
	printf("\n Enter a student name :");
	scanf("%s",&studname);
	
	printf("\n Enter sub1 marks :");
	scanf("%d",&sub1);
	
		printf("\n Enter sub2 marks :");
	scanf("%d",&sub2);
	
		printf("\n Enter sub3 marks :");
	scanf("%d",&sub3);
	
		printf("\n Enter sub4 marks :");
	scanf("%d",&sub4);
	
		printf("\n Enter sub5 marks :");
	scanf("%d",&sub5);
	
	total=sub1+sub2+sub3+sub4+sub5;
	printf("\n Total=%d",total);
	
	average=total/5;
	printf("\n average=%d",average);
	
}
