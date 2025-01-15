#include <iostream>
using namespace std;
int main()
{
	int c,d;
	cout<<"Enter number of Rows of Matrix : ";
	cin>>c;
	cout<<"Enter number of columns of Matrix : ";
	cin>>d;
	int a[c][d];
	int b[c][d];
	cout<<"Enter values of Matrix : "<<endl;
	for (int i=0; i<c; i++){
		for(int j=0; j<d; j++){
		cin>>a[i][j];
		}
	}
	for (int i=0; i<c; i++){
		for(int j=0; j<d; j++)
		cin>>b[i][j];
	}
	for (int i=0; i<c; i++){
		for(int j=0; j<d; j++)
		a[i][j]+=b[i][j];
	}
	cout<<"The sum of Matrices"<<endl;
	for (int i=0; i<c; i++){
		for(int j=0; j<d; j++){
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
}
}