#include <iostream>
using namespace std;
int main()
{
	int b,tem;
	cout<<"Enter the Size of Array : ";
	cin>>b;
	int a[b];
	cout<<"Enter array : ";
	for (int x=0; x<b; x++){
		cin>>a[x];
	}
	for (int i=b-1; i>=0; i--){
		cout<<a[i]<<" ";
	}
}