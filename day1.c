#include<stdio.h>

int main(){
	int rad;
	float area,pi = 3.142;
	printf("Enter radius of circle :");
	scanf("%d",&rad);
	area = pi*rad*rad;
	printf("%f",area);
	
	
	return 0;
}