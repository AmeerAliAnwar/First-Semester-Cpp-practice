#include<iostream>
using namespace std;
struct player{
	int distace,min,sec;
	void set(){
		cout<<"Enter the time in minutes : ";
		cin>>min;
		cout<<"Enter the time in seconds : ";
		cin>>sec;
	}
	int display(){
		int t;
		t=(min*60)+sec;
		return t;
	}
};
int main(){
	player p,p1;
	cout<<"Enter the distance of race : ";
	cin>>p.distace;
	cout<<"Enter the time of First player : "<<endl;
	p.set();
	int r=p.display();
	cout<<"Enter the time of Second player : "<<endl;
	p1.set();
	int r1=p1.display();
	if(r>r1){
		cout<<"Player 2 wins by "<<r-r1<<" seconds.";
	}
	else if(r<r1){
		cout<<"Player 1 wins by "<<r1-r<<" seconds.";
	}
	else {
		cout<<"Withdraw.";
	}
}