#include <iostream>
#include <fstream>
using namespace std;

int main(){
	

	string text;
	ofstream myfile;
	myfile.open("file.txt");
	myfile<< "I am Haris "<<endl;
	myfile<<"txt program ";
	myfile.close();
	
	ifstream readfile("file.txt");    //readfile new object
	
	while (getline (readfile,text)){   // for line by line reading 
	
	cout<<text<<endl;	
	
}
	
	readfile.close();
	ofstream write;
	write.open("OUT.TXT");
	write<<"This is a great teacher but unfortunately it kills all its pupils. Berlioz";


	write.close();
	ifstream salman("OUT.TXT");
	while(salman)
	{
		string q;
		getline(salman,q);
		int length;
		length=q.length();
		cout<<"Total length: "<<length<<endl;
		return 0;
	}	
	
	//return 0;

}
