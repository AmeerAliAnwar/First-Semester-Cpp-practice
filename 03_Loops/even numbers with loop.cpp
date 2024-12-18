#include <iostream>
using namespace std;
int main()
{
	int x,y,c,d;
	cout<<"Enter the starting number : ";
	cin>>y;
	cout<<"Enter the ending number : "; 
	cin>>x;
	cout<<"Even numbers are : "<<endl; 
	for (int i=y; i<=x; i++){
		if(i %2==0){cout<<i<<endl;
		}
	}
	cout<<"Odd numbers are : "<<endl;
		for (int i=y; i<=x; i++){
		if(i %2!=0){cout<<i<<endl;
		}
	}
	cout<<"Sum of even numbers : ";
		for (int i=y; i<=x; i+=i){
		if(i %2==0){
		d+=i;
		}
	}
		cout<<d<<endl;
	cout<<"Square for numbers : "<<endl;
		for (int i=y; i<=x; i++){
		cout <<i<<" : " <<i*i<<endl;	
	}
	cout<<"sum of squares of Odd numbers : ";
		for (int i=y; i<=x; i++){
		if(i %2!=0){
		c=c+(i*i);
		}
	}
	cout<<c;
	return 0;
}