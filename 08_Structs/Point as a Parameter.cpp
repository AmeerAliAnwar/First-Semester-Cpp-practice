#include<iostream>
using namespace std;
struct ren{
	int a,b;
	void display(ren* c){
		cout<<c;
	}
};
int main(){
	ren r;
	cin>>r.a;
	cin>>r.b;
	r.display(&r);
}