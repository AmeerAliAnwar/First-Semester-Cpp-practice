#include <iostream>
using namespace std;
int main ()
{
	int a;
	cout<<"Enter your age : ";
	cin>>a;
	if (a>=1&&a<150){
		if (a<=5){
			cout<<"The ticket is Free!";
		}
		else if (a>=6&&a<=12){cout <<"The price of the ticket is : 10$";
		}
		else if (a>12&&a<=59){cout <<"The price of the ticket is : 15$";
		}
		else {cout <<"The price of the ticket is : 12$";
		}
	}
	else{cout <<"Invalid age!";
	}
	return 0;
}