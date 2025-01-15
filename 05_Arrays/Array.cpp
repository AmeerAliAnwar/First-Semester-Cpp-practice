#include <iostream>
using namespace std;
int main()
{
	int a[5];
	int x=0;
	for( int i=0; i<=4; i++){
		cout<<"Enter the "<<i+1<<" value for array : ";
		cin>>a[i];
	}
	for( int i=0; i<=4; i++){
		cout<<"The "<<i+1<<" value for array : ";
		cout<<a[i]<<endl;
	}
	for( int i=0; i<=4; i++){
		x+=a[i];
	}
	cout<<"The sum of all the numbers of array is : "<<x;
}