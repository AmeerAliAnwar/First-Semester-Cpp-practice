#include <iostream>
using namespace std;
double power(double n,int p){
	if (p>1){
	for (int i=1; i<p; i++){
		n*=n;
		}
	}
	else if(p==0){
		return 1;
	}
	return n;
}
int main(){
	double n;
	int p=2;
	cout<<"Enter the Base : ";
	cin>>n;
	cout<<"Enter the Power : ";
	cin>>p;
	cout<<"Power = "<<power(n,p);
}