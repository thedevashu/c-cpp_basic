#include<stdio.h>
int main()
{
 int num;
 printf("Enter a num for table : ");
 scanf("%d",&num);
 for(int i=1;i<=10;i++)
 {
  printf("\n %d x %d = %d",num,i,num*i);
 }
 return 0;
}