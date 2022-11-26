
/*  simple calculator using conditional statements */

#include <iostream>
using namespace std;

int main()
{
	int x=0,y=0;
	char z;
	cout<<"Enter Num1:";
	cin>>x;
	cout<<"Enter Num2:";
	cin>>y;
	cout<<"Enter operator:";
	cin>>z;
	
	if (z== '+')
	{
		cout << x+y <<endl;
	}
	
	else if (z== '-')
	{
		cout <<"sncjkn"<< x-y <<endl;
	}
	else if (z== '*')
	{
		cout << x*y <<endl;
    }
    
	else if (z== '/')
	{
		cout <<"abc:"<< x/y <<endl;
    }
	else 
		return 0;
}
