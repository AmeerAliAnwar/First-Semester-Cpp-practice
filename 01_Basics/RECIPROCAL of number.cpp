#include <iostream>
using namespace std;
int main ()
{
	int n,x,y;
	cout<<"Enter the value to be RECIPROCAL : ";
	cin>>n;
	x=n%10;
	n=n/10;
	y=n%10;
	n=n/10;
	int z;
	z=x*100+y*10+n*1;
	cout<<"RECIPROCAL of the first number = ";
	cout<<z;
}