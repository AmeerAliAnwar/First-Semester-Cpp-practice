#include <iostream>
using namespace std;
int main()
{
	int x=0;
	int a[5]={3,2,0,1,4};
	while (true){
		if (a[0]>=a[1]){
		x=a[1];
		a[1]=a[0];
		a[0]=x;
	}
		else if (a[1]>=a[2]){
		x=a[2];
		a[2]=a[1];
		a[1]=x;
		}
	
	else if (a[2]>=a[3]){
		x=a[3];
		a[3]=a[2];
		a[2]=x;
		}
	else if (a[3]>=a[4]){
		x=a[4];
		a[4]=a[3];
		a[3]=x;
		}
	else {break;
	}
}
	for(int i=0;i<5;i++){
		cout<<a[i];
	}
}