#include <iostream>
using namespace std;
int main ()
{
	int b,mini,max;
	cout<<"How many number you want to Enter : ";
	cin>>b;
	int a[b];
	cout<<"Enter the array elements : ";
	for(int i=0; i<b; i++){
		cin>>a[i];
	}
	mini=a[0];
	max=a[0];
	for(int i=0; i<b; i++){
		if(mini>a[i]){
			mini=a[i];
		}
		if(max<a[i]){
			max=a[i];
		}
	}
	cout<<"Minimum number : "<<mini<<endl;
	cout<<"Maximum number : "<<max;
	return 0;
}