#include <iostream>
using namespace std;
int main()
{	
	int x,y,c;
	cout<<"Enter the starting number : ";
	cin>>y;
	cout<<"Enter the ending number : "; 
	cin>>x;
	cout<<"Natural numbers are : "<<endl; 
	for (int i=y; i<=x; i++){
		cout<<i<<endl;
		c=c+i;
		}
	cout<<"Sum of natural numbers = "<<c;
	return 0;	
}