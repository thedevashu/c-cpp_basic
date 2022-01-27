/*
. Write a menu driven program to read 5 array elements & then find out 
  A )how many of them are +ve
  b) how many of them are -ve
  c) how many of them are even
  d) how many of them are odd
*/

#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	char ch;
	printf("Enter the array elements : ");
	for(i = 0; i <= 4 ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	while(1)
	{
		printf("\nEnter A to check no. of positive no :");
		printf("\nEnter B to check no. of negative no :");
		printf("\nEnter C to check no. of even no :");
		printf("\nEnter D to check no. of odd no :");
		scanf("%c",&ch);
	
		if(ch <65 || ch > 69)
		{
			printf("Invalid Entry");
			break;
		}
	}

	
}