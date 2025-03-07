#include<iostream>
using namespace std;
struct ren{
	int a,b;
	void display(int a, int b){
		cout<<a<<endl;
		cout<<b<<endl;
	}
};
int main(){
	ren r;
	cin>>r.a;
	cin>>r.b;
	r.display(r.a,r.b);
}