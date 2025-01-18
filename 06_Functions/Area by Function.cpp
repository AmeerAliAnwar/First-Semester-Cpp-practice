#include <iostream>
using namespace std;
float area(float r){
	const float x = 3.14;
	return x*r*r;
}
int main ()
{
	float r;
	cout<<"Enter the radius of Circle : ";
	cin>>r;
	cout<<"The Area of Circle = ";
	cout<<area(r);
	return 0;
	
}