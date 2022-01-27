#include<stdio.h>

void read_arr(int *);
void disp_hyst(int *);


int main()
{
	int arr[2];
	read_arr(arr);
	printf("\n-------array_complete---------\n");
	

	disp_hyst(arr);

	printf("  -------\n");
	printf("  -------\n");
	
	printf("\n-----------Hystogram-----------\n");
		
	return 0;
	
}
void read_arr(int *arr)
{
	printf("\nEnter three Elements : ");
	
	int i;
	for(i =0; i<=2;i++)
	{
		scanf("%d",&arr[i]);	
	}

	
}

void disp_hyst(int *arr)
{
	int i,loop;

	int max(int *);

	loop =max(arr);

	int clm ;
	clm = loop-1;
	//printf("%d",loop);
	int j;

	for(j =0; j<loop;j++)
	{
		for(i =0 ; i <=2 ;i++)
		{
			
			if(arr[i]>clm)
			{
				printf("  *");
			}
			
			else
			{
				printf("   ");
			}
		
			//printf("clm =%d arr[] = %d",clm,arr[i]);
		}
		clm--;
		printf("\n");
	
	}
	
	for(i =0; i<=2;i++)
	{
		printf("  %d",arr[i]);	
	}
	printf("\n");

}

int max(int *arr)
{
	int max_no= 0;
	int i;
	for(i=0;i<=2;i++)
	{
		if(max_no < arr[i])
		{
			max_no = arr[i];
		}
	}
	return max_no;
}