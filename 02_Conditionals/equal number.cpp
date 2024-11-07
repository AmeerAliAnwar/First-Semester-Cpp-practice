#include <iostream>
using namespace std;
int main ()
{
	float x,y,z;
	cout <<"Enter first number : ";
	cin>>x;
	cout <<"Enter second number : ";
	cin>>y;
	cout <<"Enter third number : ";
	cin>>z;
	if (x==y&&y==z){cout <<"1st , 2nd and 3rd number are same !";
	}
else if (x==y){cout<<"First and second number  are same !";
}
else if (x==z){cout<<"First and third number  are same !";
}
else if (y==z){cout<<"Third and second number  are same !";
}
	else {cout <<"All numbers have differt values !";
	}
}