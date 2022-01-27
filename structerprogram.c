//creat struct employ name id salary
	
#include<stdio.h>
	
struct Employe
{
	char name[20];
	int emp_id;
	int salary;
};
int main()
{
	void read_struct(struct Employe);
	struct Employe emp1;
	
	read_struct(emp1);
	
	
	
}
	
void read_struct(struct Employe emp1)
{
	printf("\nEnter Employe name : ");
	scanf("%s",&emp1.name);
		
	printf("\nEnter Employe id : ");
	scanf("%d",&emp1.emp_id);
	
	printf("\nEnter Employe salary : ");
	scanf("%d",&emp1.salary);	
	
	printf("\n Your name : %s \n Your id %d \n your salary %d",emp1.name,emp1.emp_id,emp1.salary);
	
}