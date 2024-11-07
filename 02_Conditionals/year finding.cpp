#include<iostream>
#include <string>
using namespace std;
int main ()
{
	cout <<"Enter your age year : ";
	int ab,bc;
	cin>>ab;
	
	bc=(ab-1900)%12;
	if (bc<0){bc+=12;
	}
	switch (bc)
	{
		case 0:
			cout<<"rat";
		break;
		case 1:
			cout<<"ox";
		break;
		case 2:
			cout<<"tiger";
		break;
		case 3:
			cout<<"rabbit";
		break;
		case 4:
			cout<<"dragon";
		break;
		case 5:
			cout<<"snake";
		break;
		case 6:
			cout<<"horse";
		break;
		case 7:
			cout<<"goat";
		break;
		case 8:
			cout<<"monkey";
		break;
		case 9:
			cout<<"rooster";
		break;
		case 10:
			cout<<"dog";
		break;
		case 11:
			cout<<"boar";
		break;
	}
}