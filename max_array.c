//.Write a Program to read 5 numbers in the array and find out max between them.
#include<stdio.h>
int main()
{
	void read_array(int *);
	void max_element(int *);
	int arr[5];
	read_array(arr);
	max_element(arr);	
	
	return 0;

}
	
void read_array(int *arr)
{
	int i,j=1;
	for (i=0 ; i<=4; i++)
	{
		printf("Enter no. %d element : ",j++);
		
		scanf("%d",&arr[i]);
	}
}

void max_element(int *arr)
{
	int i;
	for(i=0 ; i<=4 ; i++)
	{
		if(arr[0] >= arr[i])
		{
			continue;
		}
		else
			arr[0] = arr[i];	
	}
		
	printf("%d",arr[0]);
}