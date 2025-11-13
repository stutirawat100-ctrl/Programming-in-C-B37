/* LAB-7
Q3 Create a Book structure containing book_id, title, author name and price. Write a 
C program to pass a structure as a function argument and print the book details.    */

#include <stdio.h>
struct book
{
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void display(struct book bid)
{
    printf(" \n                      --------- Book Details ----------\n \n");
    printf("Book Id: %d             Name : %s             Author : %s            Price : %.2f/-\n",bid.book_id, bid.title, bid.author, bid.price);
}


int main()
{
    struct book b;

    printf(" \nEnter the Book ID: ");
    scanf("%d", &b.book_id);
    getchar();  // clear newline after entering book_id

    printf("Enter the Title of the Book: ");
    scanf(" %[^\n]",b.title);

    printf("Enter the Author name: ");
    scanf(" %[^\n]",b.author);

    printf("Enter the price of the book: ");
    scanf("%f",&b.price);

    display(b);
    printf("\n ");
    return 0;
}