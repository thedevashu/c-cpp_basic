#include<stdio.h>
int main()
{
	const int i = 10;
	int *ptr = &i;


	printf(" %d  %d",&i ,(*ptr));

	*ptr = 30;
	
	printf(" %d  %d",&i ,(*ptr));
	
	
}