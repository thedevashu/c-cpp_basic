/*
Q1. Write a menu driven program in C to create a structure employee having fields empid, empname, salary.
 Accept the details of 'n' Employees from user and perform the following operations using function.

1] Search by Emp-Id

2] Display All

3] Display Names of Employee having Salary > 10000.
Total 4 functions you need to write.
Accept(),Search(), displayAll(), displaySalaryWise()
This application will cover all the topics of C Programming.(loops, if else, switch, DMA, array, function, structure)
*/


#include<stdio.h>
#include<stdlib.h>

typedef struct Employee
{	
	char name[20];
	int emp_id;
	float emp_sal;
	
}emp;

int main()
{
	
	printf("%d",b);
	int n = 0;
	printf("\nEnter how many of employee you want: ");
	scanf("%d",&n);
	
	
		
	emp emp_arr[n];
	
	void read(emp *, int );
	read(emp_arr,n);
	
	void display(emp *,int);
	display(emp_arr,n);
	
	void search(emp *,int);
	search(emp_arr,n);
	
	void disp_by_sal(emp *, int);
	disp_by_sal(emp_arr,n);
	
}

void disp_by_sal(emp *emp_arr, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(emp_arr[i].emp_sal >= 10000)
		{
			printf("\n%s is employee with id: %d have salary more than 10,000\n" ,emp_arr[i].name,emp_arr[i].emp_id);
		}
	}
}

void read(emp *emp_arr,int n)
{
	int i;
	for(i = 0; i< n;i++)
	{
		printf("Enter Name of employee : ");
		scanf("%s",emp_arr[i].name);
			
		printf("Enter employe id : ");
		scanf("%d",&emp_arr[i].emp_id);
		
		printf("Enter salary : ");
		scanf("%f",&emp_arr[i].emp_sal);
	}	
	
}


void display(emp *emp_arr,int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%s \n%d\n%.2f\n" ,emp_arr[i].name,emp_arr[i].emp_id,emp_arr[i].emp_sal);
	}
}

void search(emp *emp_arr,int n)
{
	int id;
	printf("Enter the id of employe to be find : ");
	scanf("%d",&id);
	int i;
	for(i = 0; i < n; i++)
	{
		if(id == emp_arr[i].emp_id)
		{
			printf("\n\nName of employee with id =%d is %s ",id,emp_arr[i].name);
			break;
		}
	}
}













/*
#include<stdio.h>
#include<stdlib.h>
typedef struct Employee
{
	int empid;
	char name[20];
	int salary;

}Employee;


int main()
{
	void read_emp(Employee *);
	void display(Employee * );


	int n;
	printf("Enter number of employee : ");
	scanf("%d",&n);
	Employee *ptr = (Employee *)malloc(n * sizeof(Employee));
	Employee *ref = ptr;


	printf("--------- ptr = %d -------------\n",ptr);
	printf("--------- ref = %d -------------\n\n",ref);


	for(int i = 0 ; i < n ; i++)
	{
		read_emp(ptr);
		//display(ptr);
		ptr = ptr +1;
		printf("--------- ptr = %d -------------\n",ptr);
		//*ptr = *(ptr + 1);

	}
	//*ptr = *(ptr - n);
	for(int i = 0 ; i < n ; i++)
	{

		display(ref);
		printf("--------- ref = %d -------------\n\n",ref);
		ref++;
		//ptr = ptr + 1;

	}

	free(ptr);
}

void read_emp(Employee *emp)
{
	printf("Enter Employee name : ");
	scanf("%s",emp->name);

	printf("Enter Employee id : ");
	scanf("%d",&emp->empid);

	printf("Enter Employee Salary : ");
	scanf("%d",&emp->salary);

	printf("--------- emp = %d -------------\n",emp);


}


void display(Employee *emp)
{
	printf("Name of emp : %s \n\nEmploy id : %d \n\nEmploye salary : %d\n\n",emp->name,emp->empid,emp->salary);
}
*/
