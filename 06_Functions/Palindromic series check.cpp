#include <iostream>
using namespace std;
int pal(int n){
	int a=n;
	int rever=0;
	while(n!=0){
		rever=rever*10+(n%10);
		n=n/10;
	}
	if (rever==a){
		return 1;
	}
	return 0;
}
int main()
{
	int n;
	cout<<"Enter a number to check if it is Palindrome : ";
	cin>>n;
	if (pal(n)==1){
		cout<<"The number "<<n<<" is Palindrome.";
	}
	else {
		cout<<"The number "<<n<<" is Not Palindrome.";
	}
}