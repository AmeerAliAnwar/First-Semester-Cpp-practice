#include<iostream>
using namespace std;
struct result{
	int mark;
	char grade;
};
struct record{
	int rn;
	result r;
	void set(){
		cout<<"Enter the Roll number : ";
		cin>>rn;
		cout<<"Enter the marks : ";
		cin>>r.mark;
		cout<<"Enter the grade like A / B etc : ";
		cin>>r.grade;
	}
	void display(){
		cout<<"Enter the Roll number : ";
		cout<<rn<<endl;
		cout<<"Enter the marks : ";
		cout<<r.mark<<endl;
		cout<<"Enter the grade like A / B etc : ";
		cout<<r.grade<<endl;
	}
};
int main(){
	record rec;
	rec.set();
	rec.display();
}