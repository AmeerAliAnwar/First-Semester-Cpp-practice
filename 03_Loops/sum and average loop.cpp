#include <iostream>
using namespace std;
int main()
{	
	float x,sum;
	cout<<"Enter the numbers : "<<endl;
	for (int i=1; i<=10; i++){
	cout<<"("<<i<<")  :  ";
	cin>>x;
	sum=sum+x;
		}
	cout<<"Sum = "<<sum<<endl;
	cout<<"Average = "<<sum/10;	
	return 0;	
}