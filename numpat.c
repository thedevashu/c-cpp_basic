#include<stdio.h>
int main()
{
  int i,j;
  int k = 65;
 for(i = 0;i <=5;i++)
 {
   
  for(j =0; j<=i ; j++)
  {
    printf("%c",k);
    k++;
  }
  printf("\n");
 }
 return 0;
}
/*
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/


/*
{
 int i,j;
 for(i = 0;i <=5;i++)
 {
  for(j =0; j<=i ; j++)
  {
    printf("%c",j+65);
  }
  printf("\n");
 }
 return 0;
}
A
AB
ABC
ABCD
ABCDE
ABCDEF
*/





/*
{
 int i,j;
 for(i = 0;i <=5;i++)
 {
  for(j = 0; j<=i ; j++)
  {
    printf("%c",i+65);
  }
  printf("\n");
 }
 return 0;
}
*/
