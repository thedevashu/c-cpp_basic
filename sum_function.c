#include<stdio.h>
int sum(int ,int);

int main()
{
	int num1,num2;
	
	printf("\nEnter two numbers for addition : ");
	scanf(" %d %d",&num1,&num2);
	
	printf(" \n%d + %d = %d",num1,num2,sum( num1, num2));
	return 0;
}

int sum(int a, int b)
{
	return (a+b);
}