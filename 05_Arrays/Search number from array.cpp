#include<iostream>
using namespace std;
int main()
{
	int a[11]={0,2,4,6,8,10,12,14,16,18,20};
	int b;
	cout<<"Enter a number to check it in array : ";
	cin>>b;
	bool c=0;
	for( int i=0; i<=10; i++){
		if(b==a[i]){
			c=1;
		}
	}
	if(c==1){
		cout<<"Number Found !";
	}
	else {
		cout<<"Number Not Found !";
	}
}