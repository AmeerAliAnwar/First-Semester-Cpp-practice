#include <iostream>
#include<string>
using namespace std;
int main()
{
	string a ="WELCOME";
	for(int j=0; j<7; j++){
		for (int i=0; i<7; i++){
			if(i==0&&j==0||i==0&&j==6||j==0&&i==6||i==1&&j==1||i==2&&j==2||i==3&&j==3){
				cout<<a[j]<<" ";
			}
			else if(i==4&&j==4||i==5&&j==5||i==6&&j==6||i==5&&j==1||i==4&&j==2||i==2&&j==4||i==1&&j==5){
				cout<<a[j]<<" ";
		}
		else {cout <<"  ";
		}
		}cout<<endl;
	}
}