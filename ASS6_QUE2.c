
/*
Q2. Write a menu driven program in 'C' which shows the working of library. The menu option should be
Accept information for ‘n’ books from user and accordingly allocate memory to the structure.
i) Add book details.
ii) Display book details.
iii) List all books of given author.
iv) List the count of books in the library.
v) Exit.
*/



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
     int  b_no;
     char b_name[40];
     char b_author[40];
     int  no_pages;
};
int main()
{
     struct book b[20];
     int    ch,n,i,count = 0;
     char   temp[40];
     do
     {
          printf("\t\tMENU");
          printf("\n-------------------------------------\n");
          printf("PRESS 1.TO ADD BOOK DETAILS.");
          printf("\nPRESS 2.TO DISPLAY BOOK DETAILS.");
          printf("\nPRESS 3.TO DISPLAY BOOK OF GIVEN AUTHOR.");
          printf("\nPRESS 4.TO COUNT NUMBER OF BOOKS.");
          printf("\nPRESS 5.TO EXIT.");
          printf("\n-------------------------------------\n");
          printf("Enter Your Choice: ");
          scanf("%d",&ch);
          switch(ch)
          {
               case 1:
                    printf("\nHow Many Records You Want to Add: ");
                    scanf("%d",&n);
                    printf("-------------------------------------\n");
                    printf("Add Details of %d Book\n",n);
                    printf("-------------------------------------\n");
                    for(i = 0 ; i < n ; i++)
                    {
                         printf("Enter Book No.     : ");
                         scanf("%d",&b[i].b_no);
                         printf("Book Name          : ");
                         scanf("%s",b[i].b_name);
                         printf("Enter Author Name  : ");
                         scanf("%s",b[i].b_author);
                         printf("Enter No. of Pages : ");
                         scanf("%d",&b[i].no_pages);
                         printf("-------------------------------------\n");
                    }
                    break;
               case 2:
                    printf("\n\t\tDetails of All Book");
                    printf("\n-----------------------------------------------------------\n");
                    printf("Book No.   Book Name\t  Author Name\tNo. of Pages");
                    printf("\n------------------------------------------------------------");
                    for( i = 0 ; i < n ; i++)
                    {
                         printf("\n %d\t  %s\t  %s\t  %d",b[i].b_no,b[i].b_name,b[i].b_author,b[i].no_pages);
                    }
                    printf("\n\n");
                    break;
             case 3:
                    printf("\nEnter Author Name: ");
                    scanf("%s",temp);
                    printf("--------------------------------------");
                    for( i = 0 ; i < n ; i++)
                    {
                         if(strcmp(b[i].b_author,temp) == 0)
                         {
                              printf("\n%s\n",b[i].b_name);
                         }
                    }
                    break;
               case 4 :
                    for( i = 0 ; i < n ; i++)
                    {
                         count++;
                    }
                    printf("\nTotal Number of Books in Library : %d\n",count);
                    printf("-----------------------------------------\n");
                    break;
               case 5 :
                    exit(0);
          }
     }while(ch != 5);
     return 0;
}




/*
#include<stdio.h>
#include<stdlib.h>



typedef struct Book
{
	char name[20];
	char author[20];

	int book_no;
	int count;	
}book;

void show(book *, int);
void read(book *, int);
void addBook(book *,int);

int main()
{
	
	int opt,n=0;	
	book book_arr[1];
	printf("\n---------------CHOOSE_OPTION-------------\n");

	while(1)
	{	
		printf("Press '1' to Add book details.\nPress '2' Display book details.\nPress '3' List all books of given author.\nPress '4'List the count of books in the library.\nPress '0' Exit.");
		scanf("%d",&opt);

		if(opt == 1)
		{
			printf("\nEnter no of books : ");
			scanf("%d",&n);
			addBook(book_arr,n);
		}
		
		if(opt == 2)
		{
			show(book_arr,n);
		}

		if(opt == 0)
		{
			break;
		}
	}	
	;
	
	

	

	
	
	//show(book_arr,n);


	return 0;
}

void addBook(book *book_arr,int n)
{
	
	book_arr[n];
	
	printf("\n--------------ADD_BOOK_DETAILS-----------------");

	read(book_arr,n);
}



void read(book *bk, int n)
{
	int i;
	for (i = 0; i < n; i++)
		{
			printf("\nEnter book name :");
			scanf("%s",bk[i].name);

			printf("\nEnter Author name :");
			scanf("%s",bk[i].author);

			printf("\nEnter book number :");
			scanf("%d",&bk[i].book_no);
		}	

}

void show(book *bk,int n)
{
	printf("\n--------------SHOW_BOOK_DETAILS-----------------");
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nName of book : %s\nName of Author : %s\nBook number : %d\n",bk[i].name,bk[i].author,bk[i].book_no);
	}
}

*/