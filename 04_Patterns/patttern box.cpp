#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter the number for starics to make a box : ";
	cin>>x; 
	for (int a=1; a<=x; a++){
		for(int b=1; b<=x; b++){
			if (a==1||a==x||b==1||b==x)cout <<"* ";
			else {cout<< "  ";
		}
	}cout<<endl;
	}
}