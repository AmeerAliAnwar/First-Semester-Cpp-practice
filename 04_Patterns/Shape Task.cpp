#include <iostream>
using namespace std;
int main()
{
    for (int a=1; a<=9; a++){
        for (int b=1; b<=9; b++){
        if (a==1||b==1||a==9||b==9||a==2&&b==2||a==2&&b==8){cout<<"* ";
        }
        else if (a==3&&b==3||a==3&&b==7||a==4&&b==4||a==4&&b==6){cout<<"* ";
        }
        else if (a==6&&b==4||a==6&&b==6||a==7&&b==3||a==7&&b==7){cout <<"* ";
        }
        else if (a==8&&b==2||a==8&&b==8||a==5&&b==5){ cout <<"* ";
        }
        else {cout <<"  ";
        }
        }cout <<endl;
    }
}