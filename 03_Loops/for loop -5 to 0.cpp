#include <iostream>
using namespace std;
int main()
{
	for (int a=-5; a<=0; a++){
		cout <<a<< "  ";
	}cout<<endl;
	for (int a=-5; a<=0; a++){
		if (a==-2){break;
		}
		cout <<a<< "  ";
	}cout<<endl;
	for (int a=-5; a<=0; a++){
		if (a==-2){continue;
		}
		cout <<a<< "  ";
	}
}