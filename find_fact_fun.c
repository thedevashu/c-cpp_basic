#include<stdio.h>

void find_fact(int);

int main()
{
	int num;
	printf("Enter number for factorial : ");
	scanf("%d",&num);

	find_fact(num);
	return 0;
}

void find_favt(int num)
{
	int fact=1,i;
	for(i = 1 ; i <= num ; i++)
	{
		fact = fact*i;
	}
	printf("factorial of %d is %d",num,fact);
}