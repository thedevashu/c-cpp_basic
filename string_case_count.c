//4.Writa a Program  to read a string and count the number of upper case & lower case letter in that string.
	
#include<stdio.h>
int main()
{
	int case_counter(char *);
	char str[100];

	printf("Enter string : ");
	scanf("%s",&str);
	
	case_counter(str);
	return 0;
}
	
int case_counter( char *str)
{	
	int upcount = 0,lcount = 0;
	while(*str != '\0')
	{
		
		if(*str >= 65 && *str <= 90)
		{
			upcount++;
		}
		else
			lcount++;
		str++;
	
	}
	
	printf("Count of Uppercase : %d\n Count of lower case : %d",upcount,lcount);
		
	return 0;
}