#include <iostream>
using namespace std;
int main ()
{
	int a;
	cout <<"Enter your salary : ";
	cin>>a;
	if(a<7500)
	{cout<<"No TAX applied. ";
	}
	else if (a>7500&a<=15000)
	{cout<<"Your salary after 5% tax : "<<a-(a*0.05);
	}
	else if (a>15000&a<=25000)
	{
		cout<<"Your salary after 12% tax : "<<a-(a*0.12);
	}
	else if (a>25000&a<=50000){cout<<"Your salary after 18% tax :"<<a-(a*0.18);
	}
	else if (a>50000&a<=150000){cout<<"Your salary after 24% tax : "<<a-(a*0.24);
	}
	else if(a>150000){cout<<"Your salary after 27% tax : "<<a-(a*0.27);
	}
}