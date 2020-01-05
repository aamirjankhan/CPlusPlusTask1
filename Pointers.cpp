#include <iostream>
using namespace std;

void swap(int *ptr1,int *ptr2);
void maximum(int *array);
main()
{
	int a=10;
	int b=20;
	int c[10]={10,2,3,4,5,6,8,7,9,1};
	
	int *ptr1=&a;
	int **ptr2=&ptr1;
	int *ptr3=&a;
	int *ptr4=&b;
	//cout<<&a<<"\n";
	//cout<<&b<<"\n";
	//cout<<a<<"\n";
	//cout<<b<<"\n";
	//cout<<ptr1<<"\n";
	//cout<<ptr2<<"\n";
	//cout<<*ptr1<<"\n";
	//cout<<*ptr2<<"\n";
	//cout<<**ptr2<<"\n";
	maximum(&c[0]);	
	for(int i=0;i<10;i++)
	{
		cout<<c[i];
	}
	//swap(ptr3,ptr4);
	//cout<<a<<"\n";
	//cout<<b<<"\n";
}
void swap(int *ptr1,int *ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	
}
void maximum(int *array)
{
	int i=0;
	for(i=0; i<10;i++)
	{
		for(int j=0; j<10;j++)
		{
			int temp;
			int ads=*array;
			array++;
			if(*array<ads)
			{
				temp=ads;
				ads=*array;
				*array=temp;
			}
		}
	}
	//int b=0;
	//int a=0;
	//for(i=0; i<10; i++)
	//{
	//	b=*array+b;
	//	array++;
	//	
	//	
	//}
	//cout<<b;
	
}

	

