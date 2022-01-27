#include<stdio.h>
int main()
{
char grade;
printf("Enter Grade from A to E : ");
scanf("%c",&grade);

if(grade == 'A')
printf("EXCELLENT");

else if(grade == 'B')
printf("GOOD");

else if(grade == 'C')
printf("FAIR");

else if(grade == 'D')
printf("POOR");

else if(grade == 'E')
printf("FAILED");

return 0;
}