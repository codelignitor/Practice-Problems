#include <iostream>
using namespace std;

int main()
{
  float a[2][2], b[2][2], result[2][2];
  // Taking input using nested for loop
  cout<<"Enter elements of 1st matrix\n";
  for (int i = 1; i < 3; ++i)
    for (int j = 1; j < 3; ++j)
    {
    	cout<<"Enter a"<<i<<j<<": ";
    	cin>>a[i][j];
    }
  // Taking input using nested for loop
  cout<<"Enter elements of 2nd matrix\n";
  for (int i = 1; i < 3; ++i)
    for (int j = 1; j < 3; ++j)
    {
    	cout<<"Enter b "<<i<<j<<": ";
    	cin>>b[i][j];
    }
  // adding corresponding elements of two arrays
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      result[i][j] = a[i][j] + b[i][j];
    }
  // Displaying the sum
  cout<<"\nSum Of Matrix:";
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
       cout<<result[i][j];
      if (j == 1)
        cout<<"\n";
    }
  return 0;
}
