/*
Q1.Write a user defined function to calculate area and perimeter of a circle and display the result in main. (Make use of call by address).
void Find_AreaPeri(int radius,float *area,float *perimeter)
{
	Write code here
}
*/

#include<stdio.h>
	
int main()
{
	void Find_AreaPeri(int ,float * ,float *);
	int radius;
	float area;
	float peri;
	Find_AreaPeri(radius,&area,&peri);
	return 0;
}

void Find_AreaPeri( int rad, float *ar, float *pr)
{
	printf(" Enter the radius : " );
	scanf("%d",&rad);
	*ar = 3.142*rad*rad;
	printf("%.2f",*ar);
	
	*pr = 2*3.14*rad;
	printf("\n%.2f",*pr);
}