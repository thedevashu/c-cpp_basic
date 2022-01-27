#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr = (int *)malloc(sizeof(int)*5);
	
	for(int i = 0; i< 5 ; i++)
	{
		ptr[i] = 10;
		printf("\n%5d",ptr[i]);
	}
	free(ptr);
}			















/*
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	char *ptr = (char *) malloc(16);
	scanf("%s",ptr);
		
	printf("Your name is %s",ptr);
	free(ptr);
}
*/