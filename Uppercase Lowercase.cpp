/* FIND an uppercase and lowercase characters  */

#include<iostream>
using namespace std;


int main(){
	char character;
	
	cout<<"Enter the character :-";
	cin>>character;
	    
	if(character >= 'a' && character <= 'z')  
	{
		cout << character << " it is the lowercase :- ";
	}
	else if (character >= 'A' && character <= 'Z')
	{
		cout << character << " it is the uppercase :- ";
	}
	else 
	{
		cout << character << "it is nothing :- ";
	}
	return 0;
}



