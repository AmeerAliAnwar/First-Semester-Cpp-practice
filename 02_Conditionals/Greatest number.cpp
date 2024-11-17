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
	if(a>b&&a>c&&a>d&&a>e){
	cout<<a<<" is the greatest number.";
	}
else if(b>c&&b>d&&b>e){cout<<b<<" is the greatest number.";
	}
else if(c>d&&c>e){cout<<c<<" is the greatest number.";
	}
else if(d>e){cout<<d<<" is the greatest number.";
	}
	else {cout<<e<<" is the greatest number.";
	}
	return 0;
}