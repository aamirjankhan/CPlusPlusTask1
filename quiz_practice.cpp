#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
main()
{
	char data [100];
	ofstream obj1;
	obj1.open("aamir.txt");
	cout<<"writing to the file"<<endl;
	cout<<"enter your name ";
	cin.getline(data, 100);
	obj1 << data << endl;
	cout << "enter your age ";
	cin >> data;
	cin.ignore();
	obj1 << data << endl;
	obj1.close();
	ifstream obj2;
	cout << "reading from the file " << endl;
	obj2 >> data;
	cout << data << endl;
	obj2.close();
	
	
}
