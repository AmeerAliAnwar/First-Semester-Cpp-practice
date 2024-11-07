#include <iostream>
using namespace std;
int main ()
{
	int a,b,n,c;
	cout <<"Enter the first number : ";
	cin>>a;
	cout <<"Enter the second number : ";
	cin>>b;
	cout<<"Press 1 to know percentage & 2 to know grade : ";
	cin>>n;
	switch (n)
	{
		case 1:
			c=(a*100)/b;
			cout<<"The percentage is : "<<c;
		break;	
		case 2:
			c=(a*100)/b;
			if (c>=90){cout<<"A+";
			}
			else if (c>=80&&c<90)
			{cout<<"A";
			}
			else if (c>=70&&c<80){cout<<"B";
			}
			else if (c>=60&&c<70){cout<<"C";
			}
			else if (c>=50&&c<60){cout<<"D";
			}
			else {cout<<"F";
			}
	}
	
	
}