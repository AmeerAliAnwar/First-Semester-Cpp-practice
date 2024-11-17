#include <iostream>
using namespace std;
int main ()
{
	float a,b,c;
	cout <<"Enter the lengths of the three sides of triangle : \n";
	cout<<"1st side : ";
	cin>>a;
	cout <<"2nd side : ";
	cin>>b;
	cout <<"3rd side : ";
	cin>>c;
	if (a==b){
		if (b==c){cout<<"The triangle is equilateral. ";
		}
		else if (b!=c){cout<<"The triangle is isosceles. ";
		}
	}
	if (a!=b){
		if(b==c){
			cout<<"The triangle is isosceles. ";
		} 
	else if(a==c){
			cout<<"The triangle is isosceles. ";
		} 
		else if (b!=c){
			cout<<"The triangle is scalene.";
		}
	}
	return 0;
}