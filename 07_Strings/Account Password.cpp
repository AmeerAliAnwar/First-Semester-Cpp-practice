#include <iostream>
#include<string>
using namespace std;
int main()
{
	string a,b;
	string x="Ameer Ali",y="ameer1234";
	cout<<"Enter your UserName : ";
	getline (cin,a);

if (a==x)
    {
	cout<<"Enter your Password : ";
	getline (cin,b);
	if (b==y){
	cout<<"Correct Password.\n";
	cout <<"LOGINING TO YOUR ACCOUNT.";}
	else if (b!=y){cout <<"Invalid Password !!";
}
}
    else if (a!=x)
	
	{cout<<"Invalid UserName !!";}
	
	return 0;
}
