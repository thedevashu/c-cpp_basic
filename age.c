#include<stdio.h>
int main()
{
int age;
printf("Enter Age : ");
scanf("%d",&age);

if(age<18)
printf("No driving license for you!");

if(18<age<65)
printf("No driving license for you!");

}