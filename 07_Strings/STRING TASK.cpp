#include <iostream >
#include <string>
using namespace std;
int main (){
	string a;
	string b;
	cout<<"Enter your first name : ";
	cin>>a;
	cout<<"Enter your second name : ";
	cin>>b;
	string c = a + " "+b;
	cout<<c;
	cout<<endl;
	cout<<"First letter of string 1: ";
	cout<<a[0]<<endl<<"Last letter of string 1: "<<a[4];
	cout<<endl;
	cout<<"First letter of string 2 : ";
	cout<<b[0]<<endl<<"First letter of string 1: "<<b[2];
	cout<<endl;
	cout<<"The  First string after replacement is : ";
	a[1]='b';
	cout<<a;
	cout<<endl;
	cout<<"The second string after the replacement is : ";
	b[2]='l';
	cout<<b;
	
	return 0 ;
}