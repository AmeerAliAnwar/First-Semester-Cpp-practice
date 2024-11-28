#include <iostream>
using namespace std;
int main()
{
	int a=1,x;
	cout <<"Enter a number to seperate all Odd : ";
	cin>>x;
	while(a<=x){if (a%2!=0){
		cout<<a<<" ";
		}a++;
	} 
}