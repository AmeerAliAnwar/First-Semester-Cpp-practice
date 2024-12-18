#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter the end of seires : ";
	cin>>x;
	for (int i=1; i<=x; i*=3){
	cout<<i<<"   ";
	}cout<<endl;
	for (int a=1; a<=x; a++){
		if (a%4==0){cout<<"0 ";
		continue;
		}
		cout<<a<<" ";
	} 
}