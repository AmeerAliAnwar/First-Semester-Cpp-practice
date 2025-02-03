#include<iostream>
using namespace std;
int main()
{
    long long int a;
    cin>>a;
    bool c=0;
    for(int i=2; i<=a/2; i++){
        if(a%i==0){
            c=1;
        }
    }
    if(c!=1){
        cout<<"1";
    }
}