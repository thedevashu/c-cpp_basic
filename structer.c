#include<stdlib.h>
#include<stdio.h>
struct student
{
	char name[20]; 
	//float salary;
	int std_id;
	
};
int main()
{
	struct student *s =(struct student *)malloc(sizeof(struct student ));
	
	void fill_info( struct student *);	
	void display(struct student *);
	
	
	fill_info(s);   	
	display(s);  //* is used to show content
	free(s);
		
	
}

void fill_info(struct student *s)
{
	printf("Enter student name  and id: ");
	scanf(" %s ",s->name);
	scanf("%d",&s->std_id);
	//scanf("%f",&s->salary);
	
	
}	
	
void display(struct student *s)
{
	printf("%s %d  ",s->name,s->std_id);
}