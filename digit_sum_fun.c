#include<stdio.h>
int sum_of_digit(int);

int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	printf("Sum of digits of %d is %d",num,sum_of_digit(num));
	return 0;
}

int sum_of_digit(int num)
{
	int sum=0,temp;
	
	
	while(num > 0)
	{
		temp=num%10;
		sum = sum+temp;
		num = num/10;
		
	}
	return sum;
}