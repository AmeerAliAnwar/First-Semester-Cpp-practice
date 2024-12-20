#include <iostream>
#include<string>
#include <fstream>
using namespace std;
int main()
{
	ofstream x("mywork.txt");
	x<<"Total score";
	x.close();
	string t;
	ifstream y("mywork.txt");
	while (getline (y,t)){
		cout<<t;	
	}
	y.close();
}