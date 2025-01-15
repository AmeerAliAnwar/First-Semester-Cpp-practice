#include<iostream>
using namespace std;
int main()
{
	int A[5]={1,3,5,7,9};
	int B[5];
	for( int i=0; i<=4; i++){
		B[i]=A[i];
	}
	for( int i=0; i<=4; i++){
		cout<<"The "<<i+1<<" value for array : ";
		cout<<B[i]<<endl;
	}
}