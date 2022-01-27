#include<stdio.h>
int arm_check(int);
	
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	arm_check(num);
}

int arm_check(int num)
{
	int rem,q=1,sum = 0,temp,i;
	temp = num;
	
	while(i>0)
	{
		rem = i%10;
		q = rem*rem*rem;
		sum = sum+ q;
	
		q=1;
		i = i/10;	
		
		if(temp == sum)	
		{
			printf("%d is armstrong number",sum);
		}
		else
		{
			printf("%d not armstrong number",temp);
		}
	}
	
	return 0;
}