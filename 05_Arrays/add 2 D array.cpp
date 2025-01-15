#include <iostream>
using namespace std;
int main()
{
	int a[2][2]={{2,3},{3,4}};
	int b[2][2]={{4,1},{3,4}};
	int c=2;
	for (int i=0; i<c; i++){
		for(int j=0; j<c; j++)
			a[i][j]+=b[i][j];
	}
	for (int i=0; i<c; i++){
		for(int j=0; j<c; j++){
			cout<<a[i][j]<<" ";
		}cout<<endl;
	}
}