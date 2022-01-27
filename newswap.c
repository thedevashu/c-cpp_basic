#include<stdio.h>
int main()
{
int n1,n2,a;
printf("Enter two numbers : ");
scanf("%d %d %d",&n1,&n2,&a);
printf("Before swap %d %d : ",n1,n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("After swap %d %d  ",n1,n2);

printf("%x",a);
}