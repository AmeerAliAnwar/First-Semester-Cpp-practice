#include <iostream>
using namespace std;
int main ()
{
	int a,b;
	cout << " Enter first integer : ";
	cin>>a;
	cout<<"Enter second integer : ";
	cin>>b;
	cout<<"Before Exchange A = "<<a<<" And B = "<<b;
	cout<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After integer A = ";
	cout<<a;
	cout<<" And B = ";
	cout<<b;
}