#include<stdio.h>
int main()
{
	char ch;
	int rad,ht,len,bs;
	float area;
	printf("Enter A for circle B for trinfle C for rect : ");
	scanf("%c",&ch);
	switch(ch){
	case 'A':
	printf("Enter radius of circle: ");
	scanf("%d",&rad);
	area = 3.14*rad*rad;
	printf("%.2f",area);
	break;
	
	case 'B':
	printf("Enter height and base of tringle: ");
	scanf("%d %d",&ht,&bs);
	area = 0.5*ht*bs;
	printf("%.2f",area);
	break;
	
	case 'C':
	printf("Enter height and length of tringle: ");
	scanf("%d %d",&ht,&len);
	area = ht*len;
	printf("%.2f",area);
	break;
	
	default: printf("Wrong entry");

}
}