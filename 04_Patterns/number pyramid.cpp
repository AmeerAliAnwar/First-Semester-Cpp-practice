#include <iostream>
using namespace std;
int main()
{
    for (int a=1;a<=5; a++){
        for (int c=5; c>a; c--){
            cout <<" ";
        }
        for (int b=1; b<=a; b++){
            cout <<b;}
        for (int d=a-1; d>=1; d--){
            cout<<d;
        }    
        cout <<endl;
    
    }
}