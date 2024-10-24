#include<iostream>
#include <cmath> //laibary for mathematics for math formula 
#include <string> //for ADDITION 	
using namespace std;
int main ()
{
	int x;
	cout<<sizeof(x); //value of any integer
	cout<<endl;
	cout<<pow(3,2); //formula for power
	cout<<endl;
	string str="Ameer"; //for writing two different things at different places to write them togather 
	string str1=" Ali";
	string str2 = str+str1; //str2=str + " "+ str1
	cout<<str2;
	cout<<endl;
	cout<<str2.length(); //to find the length or size of any statement 
	cout <<endl;
	cout<<str2[0]; //output of any letter written in statement 
	cout<<endl;
	string name;
	cout<<"Type your full name : ";   //for input of names 
	getline (cin , name );
	cout<<"Your full name is : ";
	cout<<name;
	cout<<endl;
	string a = "10";
	string b = "20";
	string z = a + b;
	cout<<z;
	
	return 0;
	
	
}