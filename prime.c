//prime no upto n.
#include <stdio.h>
int main()
{
 int num,i,j;
 printf("Enter the num: ");
  scanf(" %d",&num);
 
 for(i = 1; i <=num;i++)
 {
  for( j = 2; j<=i;j++)
  { 
   if(i%j == 0)
   {
     break;
   }
  }
   if(i==j) 
     {
      printf(" \n%d",i);
     }
 }
 return 0;

}
