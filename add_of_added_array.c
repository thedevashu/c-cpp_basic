//Accept two arrays with 10 elements each and add them and store it in third array and print the third array.Write a function add to do the addition of array elements.


#include<stdio.h>
int main()
{
	void element_sum(int *);
	void read_array(int *);
	void sum_of_array(int *, int *);
	int arr1[10];
	int arr2[10];
	
	read_array(arr1);

	
	read_array(arr2);
	sum_of_array(arr1,arr2);
	//element_sum(sum_of_array());
	
	return 0;
}

void read_array(int *arry)
{
	int i;
	printf("Enter  array : ");
	for(i = 0; i<=9 ; i++)
	{
		scanf("%d",&arry[i]);	
	}
}

void sum_of_array(int *arr1, int *arr2)
{
	void element_sum(int *);
	int i,sum[10]={0};
	
	for(i = 0; i<=9 ; i++)
	{
		sum[i] = arr1[i] + arr2[i];
		printf("%5d", sum[i]);
	}
	element_sum(sum);
}

void element_sum(int *add)
{
	int i,sum = 0;
	for(i=0 ; i <= 9 ; i++)
	{
		sum = sum + add[i];
	}
	
	printf("\n %d is sum of elements of addition array",sum);

	
}