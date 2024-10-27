#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter time in Hours , Minutes , Seconds ";
	float hour;
	cout<<"\nEnter Hours = ";
	cin>>hour ;
	float mint,second ;
	cout<<"Enter mintues = ";
	cin>>mint ;
	cout <<"Enter seconds = ";
	cin>>second;
	float sec;
	cout <<"The time in seconds = ";
	sec=hour*3600+mint*60+second;
	cout<<sec;
	cout <<" seconds";
	return 0;
}