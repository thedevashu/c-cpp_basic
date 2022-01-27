//Q5. Write a Program to accept a number from user and find its individual digits sum.

#include<stdio.h>
int main()
{
 int num,sum=0,temp;
 printf("Enter the number");
 scanf("%d",&num);
 temp = num;
 for(int i = 1;i<=3;i++)
 {
  temp = num%10;
  num=num/10;
  sum = sum+temp;
 }
 printf(" Sum of digit is %d",sum);
 return 0;
}