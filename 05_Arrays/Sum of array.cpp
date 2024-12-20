#include <iostream>
using namespace std;
int main()
{
	int x,s;
	cout <<"How many number you want to add : ";
	cin>>x;
	int a[x];
	for (int i=0; i<x; i++){
		cout<<"Enter the  "<<i+1<<" value of array : ";
		cin>>a[i];
		s+=a[i];
	}
	cout <<"Sum of array elements : ";
	cout <<s;
}