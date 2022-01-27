/*
struct Book
{
	int bookId;
	char book_name[20];
	char Author_name[20];
	float book_price;
};

Write a program to accept details of the book display book
and calculate discount based on condition
if book price is > 500 then give 10% discount
and display the new price

*/

#include<stdio.h>
#include<stdlib.h>
	
struct book
{
	int bookId;
	char book_name[20];
	char Author_name[20];
	float book_price;
};

int main()
{
	struct book *b = (struct book *)malloc(sizeof(struct book));
	void read(struct book *);
	void display(struct book *);
	
	read(b);
	display(b);	
	free(b); 
}
	
void read(struct book *bk)
{
	printf("Enter Book Id : ");
	scanf("%d",&bk->bookId);
			
	printf("Enter Book Name : ");
	scanf("%s",bk->book_name);

	printf("Enter Author name : ");
	scanf("%s",bk->Author_name);

	printf("Enter Book price : ");
	scanf("%f",&bk->book_price);
}
	
void display(struct book *bk)
{	
	float prc = bk->book_price;
	if(prc > 500.00)
	{
		bk->book_price = prc-(prc*0.10);
	}
	printf("Book Id : %d \nBook Name : %s\nAuthor name : %s\nBook price : %.2f",bk->bookId,
	bk->book_name,bk->Author_name,bk->book_price);
}