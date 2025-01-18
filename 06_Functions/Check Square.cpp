#include<iostream>
using namespace std;
string pal(int a, int b,int c){
	for (int i=1; i<a; i++){
		b*=b;
	}
	if (c==b){
		return "True";
	}
	else {
		return "False";
	}
}
int main()
{
	int a,b,c;
	cout<<"Enter the  Power : ";
	cin>>a;
	cout<<"Enter the Base : ";
	cin>>b;
	cout<<"Enter the Square to check : ";
	cin>>c;
	cout<<pal(a,b,c);
}