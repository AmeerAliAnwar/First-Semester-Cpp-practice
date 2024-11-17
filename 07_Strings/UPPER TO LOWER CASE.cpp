#include <iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter a character : ";
	cin>>a;
	if(isupper (a)){
	cout<<a<<" is an uppercase letter. \n";
	a=tolower(a);
	cout<<"Converting to lowercase : "<<a;
	}
	else if (islower (a)){cout<<a<<" is a lowercase letter.\n";
	a=toupper(a);
	cout<<"Converting to uppercase : "<<a;
	}
}