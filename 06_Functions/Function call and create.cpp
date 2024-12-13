#include <iostream>
using namespace std;

int sum(int a,int b)
{
	return a+b;
}
int Sum()
{
	int a,b;
	cin>>a>>b;
	return a+b;
}
void sum()
{
	int a,b;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"Sum is equal to : "<<a+b<<endl;
}
void SUM(int a,int b)
{
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"Sum is equal to : "<<a+b<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"Sum is equal to : "<<sum(a,b)<<endl;
	sum();
	int x,y;
	SUM(x,y);
	cout<<Sum();
}
