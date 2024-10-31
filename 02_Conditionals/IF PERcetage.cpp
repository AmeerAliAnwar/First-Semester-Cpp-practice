#include <iostream>
using namespace std;
int main ()
{
	int x,y;
	cout<<"Enter your salary : ";
	cin>>x;
	cout<<"Enter your grade : ";
	cin>>y;
	if (y>15)
	{
		cout<<"Your salary with 50% bonus : ";
		cout<<(x/2)+x;
	}
	else {cout<<"Your salary with 25% bonus : "<<(x/4)+x;
	}
}