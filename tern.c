#include<stdio.h>
int main()
{
    int a ,result ;
    printf("enter the no. :");
    scanf("%d",&a);
    

    
    result = a%100==0 ? printf(" completely divisible by 100") : printf("not divisible ") ;
   // result = a/100 ? printf(" yes") : printf("no ") ;

    return 0;
}