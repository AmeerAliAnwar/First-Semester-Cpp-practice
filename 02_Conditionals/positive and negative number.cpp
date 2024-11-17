#include <iostream>
using namespace std;
int main ()
{
	int x ;
	cout <<"Enter a number : ";
	cin>>x;
	if (x>0){cout<<"Your entered number ( " <<x<<" ) is a positive number. ";
	}
else if (x==0){cout <<"Your entered number ( "<<x<<" ) is a neutral number.";
	}
else if (x<0) {cout<<"Your entered number ( "<<x<<" ) is a negative number. ";
	}
	return 0;
}