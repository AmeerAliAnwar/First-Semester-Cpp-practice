#include <iostream> 
using namespace std;
int main ()
{
    for (int y =1; y<=5; y+=2){
        for (int z=5; z>y; z--){
            cout<<" ";
        } 
        for (int x=1; x<=y; x++){
        cout<<"* ";
    	}cout<<endl;
    }
}