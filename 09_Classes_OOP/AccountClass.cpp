#include<iostream>
using namespace std;
class Bank{
	string name;
	int num;
	int balance;
	public:
		Bank(){
			name="Ahmad";
			num=123;
			balance=100;
		}
		void dep(int d){
			balance+=d;
		}
		void with(int w){
			balance-=w;
		}
		void display(){
			cout<<"Account name :"<<name<<endl;
			cout<<"Account balance :"<<balance<<endl;
		}
};
int main(){
	Bank b;
	int a,c;
	cout<<"Enter the deposit amount : ";
	cin>>a;
	b.dep(a);
	b.display();
	cout<<"Enter the withdraw amount : ";
	cin>>c;
	b.with(c);
	b.display();
}