//.Write a Program to check entered number is palindrome or not.
#include<stdio.h>
int main()
{
 int i,num,temp,rev=0;
 printf("Enter num : ");
 scanf(" %d",&num);
 i=num;
 while(i>0)
 {
   temp = i%10;
   rev = rev*10 + temp;
   i = i/10;
   
 }

 //printf("%d ",rev);
 if(rev==num)
{
   printf("%d is palindrom",num);
 }
 else 
{
 printf("%d not palindrome",num);
}
 return 0;
 
}