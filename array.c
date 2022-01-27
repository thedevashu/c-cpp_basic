//Array goes in another function by passby refrence
//Array cannote be pass by value
//Array is a constant pointer 
//Array name itself in base address of arry

#include<stdio.h>
int main()
{
	int  arr[10];
 
	void read_array( int *);
	void display_array(int *);
	
	read_array(arr);
	display_array(arr);
	return 0;
}
	
void read_array(int *ptr)
{
	int i;
	for(i=0 ; i<10 ; i++ )
	{
		printf("Enter number");
		scanf("%d",&ptr[i]);
	}
}

void display_array(int *ptr)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d",ptr[i]);
		
	}
}