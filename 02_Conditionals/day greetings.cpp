#include <iostream>
using namespace std;
int main()
{
	int a;
	cout <<"Enter the time hour's in (24 hour format) : ";
	cin>>a;
	if (a>=1&&a<=24){
	if (a>=5&&a<12){
	cout << "Good morning!";
	}
else if (a>=12&&a<17){cout<<"Good afternoon!";
	}
else if (a>=17&&a<21){cout<<"Good evening!";
	}
	else {cout<<"Good night!";
	}
	}
	else {cout <<"invalid time!";
	}
	return 0;
}
