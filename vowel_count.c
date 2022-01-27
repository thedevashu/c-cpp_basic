 //Write a program to read a string and find out the n number of vowels in that string

#include<stdio.h>
int main()
{
	void vowel_count(char *);
	char str[100];
	printf("enter the string : ");	
	scanf("%s",&str);
	
	vowel_count(str);
}
	
void vowel_count(char *str)
{
	printf("%s",str);
	int i,count = 0;
	for(i = 0; *str != '\0'; i++)
	{
		if(*str ==  'a' || *str ==  'e' || *str ==  'i' || *str ==  'o' || *str ==  'u' )
		{
			count++;
			str=str+1;
			printf("%d",count);
		}
	}
	
	
}