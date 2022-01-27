#include<stdio.h>
int main()
{
 int i,j;
 int k=5;
 for(i = 1;i<=5;i++)
 {
  
  for(j = 5 ; j>=i ;j--)
  {
   printf("%d",k);
   
  }
  k--;
  printf("\n");
 }
}


/*
{
 int i,j;
 for(i = 1;i<=5;i++)
 {
  for(j = 5 ; j>=i ;j--)
  {
   printf("%d",j);
  }
  printf("\n");
 }
}

54321
5432
543
54
5
*/

/*
{
 int i,j;
 for(i = 1;i<=5;i++)
 {
  for(j = 1 ; j<=i ;j++)
  {
   printf("%d",j);
  }
  printf("\n");
 }
}
*/