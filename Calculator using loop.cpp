
/* Calculator using while loop */

# include <iostream>
using namespace std;
int main()
{
	int x,y;
	char z;
	char c='y';

	
	while ( c != 'n')
	{
		cout<< "Enter value of x:  ";
		cin >> x;
		cout<< "Enter value of y:  ";
		cin >> y;
		cout<< "Enter Operator:  ";
		cin >> z;
	
		if (z== '+')
		{cout << x+y <<endl;
    }
	
		if (z== '-')
		{cout << x-y <<endl;
    }
	  
		if (z== '*')
		{cout << x*y <<endl;
    }
    
		if (z== '/')
		{cout << x/y <<endl;
    }
    	
    cout <<"continue(y/n)";
    cin>>c;
	
	}

   return 0; 

}
