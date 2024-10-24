#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float a,b,c,s,d;
	cout << "Enter the first value : ";
	cin>>a;
	cout<<"Enter the second value : ";
	cin>>b;
	cout<<"Enter the third  value : ";
	cin>>c;
	s=a+b+c;
	d=s/2;
	float area;
	cout<<"AREA : ";
	cout<<sqrt(d*(d-a)*(d-b)*(d-c));
	
	
	return 0;
	
}