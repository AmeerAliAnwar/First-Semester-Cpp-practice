#include <iostream>
using namespace std;
int main ()
{
	int x;
	float y;
	double z;
	cout<<"The size of int in bytes : ";
	cout<<sizeof(x);
	cout<<endl;
	cout<<"The size of float in bytes : "<<sizeof(y);
	cout <<endl;
	cout<<"The size of double in bytes : ";
	cout<<sizeof(z);
	string a = "Ameer Ali ";
	cout<<endl;
	cout<<"The size of Ameer Ali is : ";
	cout<< sizeof(a);
}