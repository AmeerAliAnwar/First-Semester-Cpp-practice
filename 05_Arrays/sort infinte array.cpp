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
	for(int c=0; c<b; c++){
		for(int d=0; d<b; d++){
			if (a[c]<a[d]){
				tem=a[c];
				a[c]=a[d];
				a[d]=tem;
			}
		}
	}
	for (int i=0; i<b; i++){
		cout<<a[i]<<" ";
	}
}