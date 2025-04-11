#include<iostream>
using namespace std;
class Account{
	protected:
		int accNum,balance=1;
};
class SavingAccount : public Account {
	public:
		void withdraw(int a){
			balance-=a;
		}
		void deposit(int a){
			balance+=a;
		}
		void showW(){
			cout<<"Balance after withdrawal : "<<balance<<endl;
		}
		void showD(){
			cout<<"Balance after Deposition : "<<balance<<endl;
		}
};
class SalaryAccount : public SavingAccount{
	int day;
	public:
		SalaryAccount(){
			cout<<"What is the date : ";
			cin>>day;
			if(day>28||day<7){
				balance+=25000;
			}
		}
		void show(){
			cout<<"Salary Balance : "<<balance<<endl;
		}
};
int main(){
	SalaryAccount a1;
	a1.deposit(100);
	a1.showD();
	a1.withdraw(50);
	a1.showW();
	a1.show();
}