/* program to find the sum of an array using loop  */

#include <iostream>
using namespace std;

int main()
{
	int myArray[10]={5,2,3,1,8,6,2,1,7,11};
	int sum=0;
	for (int i=0 ;i<10;i++)
	{
		sum=sum+myArray[i];
		cout<<myArray[i] <<"+";
		
	}
	cout<<"\b = "<<sum;
	return 0;
}
