#include <iostream>
using namespace std;
int main()
{
	//int(*fp)(char*);
	//int *ip=0;
	//cout<<ip;
	//int a = 5, b = 10, c = 15;

	//int *arr[ ] = {&a, &b, &c};

	//cout << arr[0] << arr[1] << arr[2];

	//return 0;
	char arr[20];

	int i;

	for(i = 0; i < 10; i++)
	{
		*(arr + i) = 65 + i;
		*(arr + i) = '\0';
		
	}
	cout << arr;

	

	

	

	return(0);
}
