#include <stdio.h>
int main(){
int num;
printf("Enter the no. : ");
scanf("%d",&num);

if(num>=0&&num<=9)
printf("\n%d is a single digit",num);

else
printf("\n%d is not a single digit",num);

return 0;

}//wap that reads a grade A=excellent,B=good,C=fair,D=poor,E=fail
//wap to find entered char is vowel or not