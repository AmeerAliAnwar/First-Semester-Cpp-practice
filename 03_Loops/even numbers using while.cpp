#include <iostream>
using namespace std;
int main()
{
	int a=1,x,b=0;
	cout <<"Enter a number below which even natural numbers are separated : ";
	cin>>x;
	while(a<=x){if (a%2==0){
		cout<<a<<" ";
		b+=a;
		}a++;
	}
	cout<<endl;
	cout<<"The sum of even natural numbers is : "<<b; 
}