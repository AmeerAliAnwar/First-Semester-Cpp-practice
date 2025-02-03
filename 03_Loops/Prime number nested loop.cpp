#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number up to which you want to find prime numbers : ";
	cin>>a;
	int c=1;
	for (int x=a; x>=2; x--){
		for (int y=2; y*y<=x; y++){
			if (x%y==0){
				c=0;
				break;
			}
		}
		if (c==1){
			cout <<x<<endl;
		}
	}
}