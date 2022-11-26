
/*  program that splits a value and take sum of it. */

#include <iostream>
using namespace std;
int main()
{
	int value,R;
	cout<<"Enter a Number:";
	cin>>value;
	
	int d1=value%10;
	value=value/10;
	int d2=value%10;
	value=value/10;
	int d3=value%10;
	value=value/10;
	int d4=value%10;
	
	R= d1+d2+d3+d4;
	cout<<d4<<"+"<<d3<<"+"<<d2<<"+"<<d1<<"="<<R;
	
	return 0;
}
