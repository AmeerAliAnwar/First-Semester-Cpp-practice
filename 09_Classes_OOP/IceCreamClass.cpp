#include<iostream>
using namespace std;
class icecream{
	private:
		string flavor;
		int scoop,price=75;
		string type;
	public:
		icecream(){
			flavor="Vanilla";
			scoop=1;
			type="Sugar";
		}
		icecream(string f){
			flavor=f;
			scoop=1;
			type="Sugar";
		}
		icecream(string f,int s){
			flavor=f;
			scoop=s;
			price*=s;
			type="Sugar";
		}
		icecream(string f,int s,string t){
			flavor=f;
			scoop=s;
			price*=s;
			type=t;
			if(type=="waffle"||type=="Waffle"||type=="WAFFLE"){
				price+=40;
			}
		}
		void pr(){
			cout<<price;
		}
};
int main(){
	icecream i;
	i.pr();
}