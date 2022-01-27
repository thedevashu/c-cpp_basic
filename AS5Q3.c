/*Q3.Write a function to calculate power and display the result in main (Do not use return
statement)
*/

#include<stdio.h>

void Power(int base, int p, int *result)
{
	*result = 1;
	printf("Enter base and Power");
	scanf("%d %d",&base,&p);
	
	while(p>0)
	{
	 	*result = *result * base;
		p--;
	}
}

int main()
{
	int base ,pow,res;
	Power(base,pow,&res);
	printf("%d",res);
		
}