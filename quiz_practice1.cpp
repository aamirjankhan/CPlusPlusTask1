#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
	ifstream infile;
	infile.open("numbers.txt");
	if(infile.fail())
	{
		cerr << "error opening the file" << endl;
		exit(1);
	}
	int x , y;
	infile >> x >> y;
	cout << "num1 is: " << x << endl;
	cout << "num2 is: " << y << endl;
	infile.close();
	ifstream infile1;
	infile1.open("aamir.txt");
	if(infile1.fail()){
		cerr<<"error opening the file..."<<endl;
	}
	string fruit;
	int count = 0;
	while(!infile1.eof()){
		infile1 >> fruit;
		cout << fruit << endl;
		count++;
	}
	cout << "total number of fruits are: " << count << endl;
	infile1.close();
	
	
	return 0;
}
