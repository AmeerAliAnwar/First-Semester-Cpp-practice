#include <iostream>
using namespace std;
int main()
{
	for (int a=1; a<=5; a++){
		for (int b=1; b<=5; b++){
		if (a==1||b==1||a==5||b==5){
		cout<<"* ";
		}
		else {cout<<"- ";
		}
		}cout<<endl;
	}
}