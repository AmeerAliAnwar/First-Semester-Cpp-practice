#include  <iostream>
using namespace std;
int main ()
{
	int x;
	cout<<"Enter a number : ";
	cin>> x;
	if (x%2 == 0 && x>0){
	cout <<"x is a positive and even number.";
	}
else 	if (x%2 == 0 && x<0){
	cout <<"x is a negative and even number.";
	}
else if (x%2 == 1 && x>0){
	cout <<"x is a positive and odd number.";
	}
else 	if (x%2 == 1 && x<0){
	cout <<"x is a negative and odd number.";
	}
}