//.Write a Program to read a string and find out the length of that string by writing User defined function



#include<stdio.h>


int main()
{
	int myStrlen(char *);
	char ch[100] ;
	
	printf("Enter string : ");
	scanf("%s",&ch);
	myStrlen( ch);
}

int myStrlen(char *ch)
{	
	int i = 0;
	while(ch[i] != '\0')
	{	i++;
		//ch++;
		
	}
printf("%d",i);
}
	
