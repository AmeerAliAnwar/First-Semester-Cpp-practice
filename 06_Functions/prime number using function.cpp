#include <iostream>
using namespace std;
void prime()
{
	int a;
	cout<<"Enter the number upto which you want to check prime number : ";
	cin>>a;
	for (int i=a; i>1; i--){
	if (i%2!=0||i%3!=0||i%5!=0||i%7!=0||i%11!=0||i%13!=0||i%17!=0||i%19!=0||i%23!=0){cout<<i<<endl;
	}
else if(i==2||i==3||i==5||i==7||i==11||i==13||i==17||i==19||i==23){cout<<i<<endl;
	}
}
}
int main()
{
	prime();  
}