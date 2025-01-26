#include<iostream>
using namespace std;
int main()
{
	int b;
	cout<<"How many numbers you want to enter : ";
	cin>>b;
	int a[b];
	cout<<"Enter the array elements : ";
	for(int i=0; i<b; i++){
		cin>>a[i];
	}
	for(int i=0; i<b; i++){
		for(int i=0; i<b-1; i++){
			if(a[i]>a[i+1]){
				swap(a[i],a[i+1]);
			}
		}
	}
	for(int i=0; i<b; i++){
		cout<<a[i]<<" ";
	}
}