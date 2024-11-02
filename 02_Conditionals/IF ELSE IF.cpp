#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cout<<"Enter the first number :";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"Enter the third number : ";
	cin>>c;
	cout<<"Enter fourth number : ";
	cin>>d;
	cout<<"Enter fifth number : ";
	cin>>e;
	if(a>b&&b>c&&c>d&&d>e)
	{
	cout<<"Biggest number :" ;
	cout<<a;
	}
else if(b>c&&c>d&&d>e){cout<<"Biggest number : ";
	cout<<b;
	}
else if(c>d&&d>e){cout<<"Biggest number : "<<c;
	}
else if(d>e){cout<<"Biggest number : "<<d;
	}
else if (e>d){cout<<"Biggest number : "<<e;
	}
	
	return 0;
}