#include <iostream>
using namespace  std;
class person{
	private:
		int age;
		char name[25];
		string city;
	public:
		void input(){
			cout<<"Enter person age : ";
			cin>>age;
			cout<<"Enter person name : ";
			cin.ignore();
			cin.getline(name,25);
			cout<<"Enter city name : ";
			cin>>city;
		}
		void display(){
			cout<<"Your Age : "<<age<<endl;
			cout<<"Your name : "<<name<<endl;
			cout<<"Your city : "<<city<<endl;
		}
		int getage(){
			return age;
		}
};
int main(){
	person p,p1;
	p.input();
	p1.input();
	if(p.getage()>p1.getage()){
		p.display();
	}
	else{
		p1.display();
	} 
	
}