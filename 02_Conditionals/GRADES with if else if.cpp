#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d,e;
	cout <<"Enter your marks in biology out of 20 : ";
	cin>>a;
	cout<<"Enter your marks in computer out of 30 : ";
	cin>>b;
	cout<<"Enter your marks in physics out of 30 : ";
	cin >>c;
	cout<<"Enter your marks in chymistry out of 30 : ";
	cin>>d;
	cout<<"Enter your marks in urdu : ";
	cin>>e;
	int t;
	t=a+b+c+d+e;
	cout <<"Your Total marks out of 150 are : ";
	cout<<t<<endl;
	if (t>135&&t<150){cout<<"Your grade is : A";
	}
	else if (t>120&&t<135){cout<<"Your grade is : B";
	}
	else if (t>100&&t<120){cout<<"Your grade is : C";
	}
	else if (t>90&&t<100)
	{cout<<"Your grade is : D";
	}
	else if (t>50&&t<90){cout<<"Your grade is : E";
	}
	else if (t<50){cout<<"Your grade is : F";
	}
	cout<<endl;
	float p;
	p=t*100/150;
	cout<<"Your Percentage : "<<p<<" %";
	cout<<endl;
}