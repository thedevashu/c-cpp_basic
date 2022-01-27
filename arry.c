// Accept array elements of 5 integers and find sum of array elements and display it.

#include<stdio.h>

int main()
{
	int arry[5],i,j,sum = 0;
	printf("Enter the array elements : ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arry[i]);
	}
		
	for(j=0 ; j<5 ;j++)
	{
		sum = sum + arry[j];
	}	
	
	printf("\nsum of array %d",sum);
	
	
}