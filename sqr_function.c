#include<stdio.h>
int main()
{
	void find_square(int);
	int num=0;
	printf("Enter a number for square");
	scanf("%d",&num);
	
	find_square(num);
	
	return 0;
}

void find_square(int num)
{
	printf("%d",num*num);
}