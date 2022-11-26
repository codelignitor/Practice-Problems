
/* program to find a value in an array */

#include <iostream>
using namespace std;

bool search(int arg[],int x,int size)
{
	for (int i=0;i<size;i++)
	if(arg[i]==x)
		return true;
	return false;
}


int main()
{
	int length=10;
	int array[length]={1,2,3,4,5,6,7,8,9,10};
	int item=6;
	if (search(array,item,length))
	cout<<item<<" was found ";
	else
	cout<<item<<" was not found ";
	
	return 0;
}
