//3.Write a program to read a string and reverse the string.
	
#include<stdio.h>
int main()
{
	void string_rev(char *);
	
	char str[20];
	
	printf("Enter the string : ");
	scanf("%s",&str);
	
	string_rev(str);
	
	return 0;
}
	
void string_rev(char *str)
{
	//printf("%s",str);
	int i=0,l=0;
	
	while(str[i] != '\0')
	{
		//str++;
		i++;
		//printf("%d",i);
		//printf("%s",str);
	}
	i=i-1;
	//printf("\n%d",i);
	for(int j =i; j >=0; j--)
	{
		//str[j]; 
				
		//str[l] = str [j]; 
		printf("%c",str[j]);
		
		
		
	}
	//printf("\n%s",str[l]);	
	
}