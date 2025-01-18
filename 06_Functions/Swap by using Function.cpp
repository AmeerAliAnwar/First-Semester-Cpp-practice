#include<iostream>
using namespace std;
void swp(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"The First number after swaping : ";
	cout<<a<<endl;
	cout<<"The Second number after swaping : ";
	cout<<b;
}
int main(){
	int a,b;
	cout<<"Enter the First number : ";
	cin>>a;
	cout<<"Enter the Second number : ";
	cin>>b;
	swp(a,b);
}