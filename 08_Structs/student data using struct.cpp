#include<iostream>
using namespace std;
struct students{
	int rn;
	int m[5];
	void set(){
		cout<<"Enter the Roll nummber of student : "; 
		cin>>rn;
		for(int i=0; i<5; i++){
			cout<<"Enter the marks of "<<i+1<<"th subject : ";
			cin>>m[i];
		}
	}
	void display(){
		cout<<"Enter the Roll nummber of student : "; 
		cout<<rn;
		cout<<endl;
		int sum=0;
		for(int i=0; i<5; i++){
			cout<<"The marks of "<<i+1<<"th subject : ";
			cout<<m[i];
			cout<<endl;
			sum+=m[i];
		}
		cout<<"Average Marks = "<<sum/5;
	}
};
int main(){
	int n;
	cout<<"Enter the number of students : ";
	cin>>n;
	students stu[n];
	for(int i=0; i<n; i++){
		stu[i].set();
	}
	for(int i=0; i<n; i++){
		stu[i].display();
	}
}