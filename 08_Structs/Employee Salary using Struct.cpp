#include<iostream>
using namespace std;
struct employee{
	int code,salary,grade;
	int set(){
		cout<<"Enter the code number of employee : ";
		cin>>code;
		cout<<"Enter the salary of employee : ";
		cin>>salary;
		cout<<"Enter the grade of employee : ";
		cin>>grade;
		return salary;
	}
	void display(){
		
		cout<<"The code number of employee : ";
		cout<<code<<endl;
		cout<<"The salary of employee : ";
		cout<<salary<<endl;
		cout<<"The grade of employee : ";
		cout<<grade<<endl;
	}
};
int main(){
	employee e,e1;
	cout<<"Enter the Details of 1st Employee : "<<endl;
	int r=e.set();
	cout<<"Enter the Details of 2nd Employee : "<<endl;
	int r1=e1.set();
	if(r>=r1){
		e.display();
	}
	else if(r>r1){
		e1.display();
	}
}