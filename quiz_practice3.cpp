#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	int size;
	cout<<"enter size";
	cin>>size;
	int *array = new int[size];
	for (int i=0;i<size;i++){
		cout<<"input student"<<i+1<<" number";
		cin>>(array+i);
	}
	for (int i=0;i<size;i++){
		cout<<(array+i);
	
	}
	
		return 0;
}
