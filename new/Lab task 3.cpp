#include <iostream>
using namespace std;

int main()
{
	int counter=0;
	int sum=0;
	int a,b,c,d,e,f,g,h;
	cout<<"Enter 8 integers:";
	cin >> a>>b>>c>>d>>e>>f>>g>>h;
	 
	if (a%2!=0)
	counter++;
	else
	sum=sum +a;
	
	if (b%2!=0)
	counter++;
	else
	sum=sum+b;
	
	if (c%2!=0)
	counter++;
	else
	sum=sum+c;
	
	if (d%2!=0)
	counter++;
	else
	sum=sum +d;
	
	if (e%2!=0)
	counter++;
	else
	sum=sum +e;
	
	if (f%2!=0)
	counter++;
	else
	sum=sum +f;

	if (g%2!=0)
	counter++;
	else
	sum=sum +g;
	
	if (h%2!=0)
	counter++;
	else
	sum=sum +h;
	
	cout<<counter<<endl;
	cout<<sum<<endl	;
	return 0;	
}
