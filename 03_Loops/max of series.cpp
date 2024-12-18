#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a=0,b,c;
	cout<<"Enter the series of number (-99 to stop) : ";
	while (true){cin>>b;
	if (b==-99){break;
	}
	if (a<b){a=b;
	}
	
	if (c>b){c=b;
	}
}
	cout<<"The largest number = "<<a<<"\n The smallest number = "<<c;
}