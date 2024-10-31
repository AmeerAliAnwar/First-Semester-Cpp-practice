#include <iostream>
using namespace std;
int main ()
{
	int num;
	cout<<"Enter the number : ";
	cin>>num;
	cout<<endl;
	if(num>=0)
	{
		cout<<"Number is positive ";
		cout<<num;
	} 
	
	else{cout<<"Number is negative : ";
	cout<<num;
	}
	return 0;
}