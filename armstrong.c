#include <stdio.h>
 
int main()
{
    int num =1, temp,rem, num2;
 
    printf("Print all Armstrong numbers between 1 and 1000:\n");
   
    while (num <= 1000)
    {
        num2 = 0;
        temp =num;
        while(temp>0)
        {
          rem = temp%10;
          num2 = (rem*rem*rem)+num2;
          temp = temp/10;
        }
        if (num == num2)
        {
            printf("\n Armstrong no is:%d", num);
        }
        num++;
    }
}