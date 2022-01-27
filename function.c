#include<stdio.h>
int main()
{
	void table(int); // fun decleration
	int num; 
	scanf("%d",&num);
	table(num);
	return 0;

}

void table(int n)
{
	int i;
	for(i = 1;i<=10;i++)
	{
		printf("\n %2d x %2d = %2d",i,n,i*n);
	}
}
//wap for square of parameter no.  and also do it with return
//wap to print menu 1)factorial2)sum of digit of number