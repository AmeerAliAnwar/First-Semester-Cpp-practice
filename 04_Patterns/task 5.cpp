#include <iostream>
using namespace std;
int main()
{
  for(int x=1; x<=5; x++){
    for(int z=2; z<=x; z++){
      cout<<"  ";
    }
    for(int y=5; y>=x; y--){
      cout<<"* ";
    }cout<<endl;
  }
  return 0;
}