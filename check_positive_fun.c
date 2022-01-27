#include<stdio.h>

void check_positive(int);
int main()

{
	int num;
	printf("Enter number to be checked : ");
	scanf("%d",&num);
	
	check_positive(num);
	
	return 0;
}

void check_positive(int num)
{
	if(num>0)
	   printf("%d is positive",num);
	
	else
	   printf("%d is negative no",num);
}