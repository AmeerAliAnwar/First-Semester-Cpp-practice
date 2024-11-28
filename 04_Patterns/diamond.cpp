#include <iostream> 
using namespace std;
int main ()
{
    for (int y =1; y<=7; y+=2){
        for (int z=7; z>y; z-=2){
            cout<<" ";
        } 
        for (int x=1; x<=y; x++){
        cout<<"*";
    	}
		cout<<endl;}
	for (int a=5; a>=1; a-=2){
        for (int b=5; b>=a; b-=2){
            cout<<" ";
        } 
        for (int c=1; c<=a; c++){
        cout<<"*";
    	}cout<<endl;
	}
}