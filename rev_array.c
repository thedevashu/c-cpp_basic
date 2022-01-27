// Accept an array of 5 elements and create its reverse in same array and then print the array.
#include<stdio.h>
int main()
{
	void read_array(int *);
	void rev_array(int *);
		
	int arry[5];

	read_array(arry);
	
	rev_array(arry);	
	return 0;
}

void read_array(int arry[])
{
	int i;
	printf("Enter the array elements : ");
	
	for(i=0;i<=4;i++)
	{
		scanf("%d",&arry[i]);
		
	}
}

void rev_array(int arry[])
{
	int i;
	for(i=4;i>=0;i--)
	{
		printf("\t  %d",arry[i]);
	}
	
}