/*
Q2.Wite a function to calculate sum of 1..10 numbers and display the result in main(). (Do not
use return statement)
*/
	
#include<stdio.h>
int main()
{
	void addition(int *);
	int sum = 0;
	addition(&sum);
	printf("%d",sum);
}

void addition(int *ptr)
{	
	int i =10;
	while(i > 0)
	{
		*ptr = *ptr + i;
		i--;
	}
}