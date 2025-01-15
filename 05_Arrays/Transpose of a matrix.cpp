#include <iostream>
using namespace std;
int main()
{
	int c,d;
	cout<<"Enter number of Rows of table : ";
	cin>>c;
	cout<<"Enter number of columns of table : ";
	cin>>d;
	int a[c][d],b[c][d];
	cout<<"Enter values of Matrix : "<<endl;
	for (int i=0; i<c; i++){
		for(int j=0; j<d; j++){
			cin>>a[i][j];
		}
	}
	for (int i=0; i<c; i++){
		for(int j=0; j<d; j++){
			b[j][i]=a[i][j];
		}
	}
	cout<<"Original Matrix : "<<endl;
	for (int i=0; i<c; i++){
		for(int j=0; j<d; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Transposed Matrix : "<<endl;
	for (int i=0; i<d; i++){
		for(int j=0; j<c; j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}