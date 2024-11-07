#include <iostream>
using namespace std;
int main ()
{
	float a,b,c,d,e;
	cout <<"Enter the first number : ";
	cin>>a;
	cout <<"Enter the second number : ";
	cin>>b;
	cout <<"Enter the third number : ";
	cin>>c;
	cout <<"Enter the fourth number : ";
	cin>>d;
	cout <<"Enter the fivth number : ";
	cin>>e;
	if (a<b&&a<c&&a<d&&a<e){
		cout<<"The first number is minimum : "<<a;
	}
else if (b<c&&b<d&&b<e){
		cout<<"The second number is minimum : "<<b;
	}
else if (c<d&&c<e){
		cout<<"The third number is minimum : "<<c;
	}
	if (d<e){
		cout<<"The fourth number is minimum : "<<d;
	}
	else {		cout<<"The fivth number is minimum : "<<e
	;

	}
}