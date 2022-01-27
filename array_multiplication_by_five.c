//Accept an array from user in main and each array element is multiplied by 5.Display entire array  using function.
#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	printf("Enter the array element : ");
	
	for(i=0 ; i<=4 ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0 ; i<=4 ; i++)
	{
		printf("%5d ",arr[i]*5);
	}
}