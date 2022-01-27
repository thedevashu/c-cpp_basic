#include<stdio.h>
int prime_check(int);

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	
	printf("\n number of prime number from 1 to %d is %d",num,prime_check(num));
	return 0;
}

int prime_check(int num)
{
	int i,j,count = 0;
	for(i = 1 ; i <= num ; i++)
	{
		for(j = 2; j <= i; j++)
		{
			if(i%j == 0)
			{
				break;
			}
		}


		if(i == j)
		{
			printf("\t %3d",i);
			count++;
		}
		
				
	}
	return count;
}
