#include <iostream>
using namespace std;
int main ()
{
	int a,b;
	cout<<"Enter a year : ";
	cin>>a;
	b=2024-a;
	if(b%4>=0&&b%4<=3){
		if (b%4==0){cout <<a<<" is a Leap Year!";
		}
		else {cout <<a<<" is not a Leap Year!";
		}
	}
	else {cout <<"Invalid year!";
	}
	return 0;
}