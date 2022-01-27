#include<stdio.h>

int main()
{
	int fact,num=1;
	printf("Enter number for factorial :");
	scanf("%d",&fact);
	int i=fact;
	while(fact>1)
	{
		num = num*fact;
		fact--;
	}
	printf("factorial of %d is %d %%d",i,num);
}