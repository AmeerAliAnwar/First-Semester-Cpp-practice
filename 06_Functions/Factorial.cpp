#include <iostream>
using namespace std;
int factorial(int x)
{
	int fac=1;
	if(x==0){
		return x;
	}
	else if(x<0){
		cout<<"Wrong Input!!";
	}
	else {
	for (int i=1; i<=x; i++){
		fac*=i;
	}
	}
	return fac;
}
int main()
{
	int n;
	cout<<"Enter a number for it's Factorial : ";
	cin>>n;
	cout<<"The Factorial = "<<factorial(n);
}