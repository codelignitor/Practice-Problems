
/* program to reverse a an array  */

#include<iostream>
using namespace std;
int main()
{
	
	int temp=0;
	int size;
	cout<<"enter size of array:";
	cin>>size;
	
	int arr[size]={1,2,3};
	
	for (int i=0 ; i < size ; i++)
	{
		for (int j=0 ; j < size ;j++)
        {
        	if (arr[i]>arr[j])
        	{
        	
		    	temp = arr [i];
        	
		        arr[i] = arr[j]; 
			 	
        		arr[j] = temp;
				
					}
		}
	}	
	for (int i=0; i<size; i++)
    {
    	cout<<arr[i];
	}
	return 0;
}

