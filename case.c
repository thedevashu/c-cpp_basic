#include<stdio.h>
int main()
{
	char ch;
	printf("Enter Char :");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<90)
	printf("UPPERCASE");
	
	else
	printf("lowercase");
}