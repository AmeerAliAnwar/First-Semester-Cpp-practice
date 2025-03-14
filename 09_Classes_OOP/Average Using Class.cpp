#include<iostream>
using namespace std;
class ave{
	private:
		int a,b;
	public:
		ave(){
			a=100;
			b=100;
		}
		void average(){
			cout<<(a+b)/2;
		}
};
int main(){
	ave av;
	av.average();
}