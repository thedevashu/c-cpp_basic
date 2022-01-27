#include<stdio.h>
int main()
{
int yr;
printf("Enter the year : ");
scanf("%d",&yr);

if(yr%400==0 || yr%4==0)
printf("%d is leap year",yr);

else 
printf("%d is not leap year",yr);

return 0;
}

//wap to fin max in 3 nos
//wap to find given no. is single digit or not