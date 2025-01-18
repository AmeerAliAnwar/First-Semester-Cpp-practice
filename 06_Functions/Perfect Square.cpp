#include<iostream>
#include<cmath>
using namespace std;
int sq(int n){
	int x;
	x=sqrt(n);
	if (n<0){
		return false;
	}
	if (x*x==n){
		return true;
	}
	return false;
}
int main()
{
	int n;
	cout<<"Enter a number to check if it is perfect square or not : ";
	cin>>n;
	if (sq(n))cout<<"The number "<<n<<" is a perfect Square.";
	else cout<<"The number "<<n<<" is not a perfect Square.";
}