#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main(){
	string name;
	ofstream onfile;
	onfile.open("rida.txt",ios::in);
	cout<<"please enter your name"<<endl;
	cin>>name;
	onfile << name << endl;
	onfile.close();
	
	
	
	
	
	return 0;
}
