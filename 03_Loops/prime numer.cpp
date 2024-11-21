#include <iostream>
using namespace std;
int main()
{
	int a,b;
	do{cout <<"Enter a number : ";
	cin>>a;
	if (a==1){cout<<a<<" is not a prime number."<<endl;
	}
else if(a==2||a==3){cout<<a<<" is a prime number."<<endl;
	}
else if (a%2!=0&&a%3!=0){cout<<a<<" is a prime number."<<endl;
	}
	else {cout<<a<<" is not a prime number."<<endl;
	}
	cout<<"Do you want to continue (1/0)";
	cin>>b;
	}while (b!=0);
}