#include <iostream>
using namespace std;
int main ()
{
	float a,b,c;
	cout<<"Enter the first number : ";
	cin>>a;
	cout<<"Enter the second number : ";
	cin>>b;
	cout<<"Enter the third number : ";
	cin>>c;
	if (a>b&&a>c)
	{
	cout<<"First number is the greatest : "<<a;
	}
	else if (b>c&&b>a){
		cout<<"Second number is the greatest : "<<b;
	}
	else {cout<<"Third number is the greatest : "<<c;
	}
	return 0;
}