#include <iostream>
#include <cstring>
using namespace std;
void add_book(int num);
void delete_book(int num);
void display(int num);
void search(int num);
void looop();
struct book
{
	int id=0;
	char book_name[20];
	char author_name[20];
	int total_pages=0;
	char category[20];
	
};
struct book a[3];

main()
{
	
	
	int j;
	for(int i=0; i<20; i++)
	{
	
		cout<<"to proceed, press 1: ";
		
		
		cin>>j;
		if(j==1)
		{
			looop();
		}
		
		else
		{
			break;
		}
	}
	
}
void looop()
{
	
	
	cout<<"enter 1 to add a book\nenter 2 to delete a book\nenter 3 to diaplay all books\nenter 4 to search book by title name\n";
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:
			add_book(3);
			break;
		case 2:
			delete_book(3);
			break;
		case 3:
			display(3);
			break;
		case 4:
			search(3);
			break;
		default:
			break;
			
			
			
	}
}
void add_book(int num)
{
	num=num+1;
	
	for(int i=1; i<num;i++)
	{
		cout<<"please enter the id of the book:\n";
		cin>>a[i].id;
		cout<<"please enter the name of the book:\n";
		cin>>a[i].book_name;
		cout<<"please enter the author of the book:\n";
		cin>>a[i].author_name;
		cout<<"please enter total number of pages in the book:\n";
		cin>>a[i].total_pages;
		cout<<"please enter the category of the book:\n";
		cin>>a[i].category;
	}
}
void display(int num)
{
	num=num+1;
	
	for(int i=1; i<num; i++)
	{
		cout<<"id: "<<a[i].id<<"\n";
		cout<<"author name: "<<a[i].author_name<<"\n";
		cout<<"book name: "<<a[i].book_name<<"\n";
		cout<<"category: "<<a[i].category<<"\n";
		cout<<"total pages: "<<a[i].total_pages<<"\n";
			
	}
}
void delete_book(int num)
{
	num=num+1;
	
	cout<<"which book do you want to delete, please enter its id: ";
	int id;
	cin>>id;
	
	for(int i=id; i<num-1; i++)
	{
		a[i].id=a[i+1].id;
		a[i].author_name==a[i+1].author_name;
		a[i].book_name==a[i+1].book_name;
		a[i].category==a[i+1].category;
		a[i].total_pages=a[i+1].total_pages;
	}
	display(3);	
}

void search(int num)
{
	num=num+1;
	
	cout<<"please enter the id of the book to display its data: ";
	int id;
	cin>>id;
	cout<<"id: "<<a[id].id<<"\n";
		cout<<"author name: "<<a[id].author_name<<"\n";
		cout<<"book name: "<<a[id].book_name<<"\n";
		cout<<"category: "<<a[id].category<<"\n";
		cout<<"total pages: "<<a[id].total_pages<<"\n";
	
}

