#include <iostream>
using namespace std;
int main ()
{
	int a[5]={1,2,3,4,5};
	int b,c=-99,d=-99;
	cout<<"Enter a number : ";
	cin>>b;
	for( int i=0; i<=4; i++){	
		if (a[i]==b){c=b;
		}
		else {d=b;
		}
	}
	if (c!=-99){
	cout<<"Number found : "<<c;
}}