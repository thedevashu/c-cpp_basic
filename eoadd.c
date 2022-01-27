#include<stdio.h>
int main()
{
 int sum=0;
 for(int i = 0;i<10;)
 {
    i=i+2;
    sum = sum+i;
 }
 printf("\n Sum of even terms from 1 to 10 is : %d",sum);
 sum = 1;
 for(int i = 1;i<9;)
 {
    i=i+2;
    sum = sum+i;
 }
 printf("\n Sum of Odd terms from 1 to 10 is : %d",sum);

 return 0;

}