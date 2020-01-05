#include <iostream>
using namespace std;
void CoordTransform(int *ptr1, int *ptr2); 
main()
{
	int xVal;
	int yVal;
	cout<<"please enter two valid integers";
	cin>>xVal;
	cin>>yVal;
	CoordTransform(&xVal , &yVal);
	int xValNew=xVal;
	int yValNew=yVal;
	
	
	
}
void CoordTransform(int *ptr1, int *ptr2)
{
	int a = *ptr1;
	
	*ptr1=(*ptr1+1)*2;
	*ptr2=(*ptr2+1)*2;
}
/*
Define a function CoordTransform() that transforms its first
two input parameters xVal and yVal into two output parameters
xValNew and yValNew. The function returns void.
The transformation is new = (old + 1) * 2. Ex: If xVal = 3 and yVal = 4,
then xValNew is 8 and yValNew is 10.

*/
