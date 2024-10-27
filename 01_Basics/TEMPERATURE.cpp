#include <iostream>
using namespace std;
int main ()
{
	float x=1.8;
	int y=32;
	int tc;
	cout<<"Enter the TEMPERATURE in degree Celsius : ";
	cin>>tc;
	float tf;
	tf= x*tc + y;
	cout<<"( "<<tc<<" ) degree Celcius is equal to ( ";
	cout<<tf<<" ) degrees Fahrenheit";
	
	return 0;
	
}