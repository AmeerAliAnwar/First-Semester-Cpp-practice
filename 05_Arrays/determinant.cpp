#include <iostream>
using namespace std;
int determinant(int a[2][2]){
	int e;
	e=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
	return e;
}
int main()
{
	int a[2][2];
	cout<<"Enter values of Matrix : "<<endl;
	for (int i=0; i<2; i++){
		for(int j=0; j<2; j++){
		cin>>a[i][j];
		}
	}
	cout<<"The determinant of 2x2 Matrix = ";
	cout<<determinant(a);
}