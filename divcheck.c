//Q10. Write a program to add only those numbers which are divisible by 5 in the range 1 to 30.
#include<stdio.h>
int main()
{
 int sum=0,i;
	for( i = 0;i<=30;i++)
	{
	 if(i%5==0)
	 {
	  sum = sum+i;
	
	 }
	}
	printf("\n sum is %d",sum);
	 
}