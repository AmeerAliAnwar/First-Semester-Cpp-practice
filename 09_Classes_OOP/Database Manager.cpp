#include<iostream>
using namespace std;
class person{
	protected:
		string name;
		int age;
	public:
		person (string n,int a){
			name=n;
			age=a;
		}
		void print(){
			cout<<"Name : "<<name;
			cout<<"Age : "<<age;
		}
};
class student:public person{
	string studentid;
	string courseList;
	public:
		student(string n,int a,string i,string c):person(n,a){
			studentid=i;
			courseList=c;
		}
		void displayStudent(){
			cout<<"Name of Student is: "<<name;
			cout<<"Age of Student is: "<<age;
			cout<<"ID of the Student is: "<<studentid;
			cout<<"Course List of Student is: "<<courseList;
		}

};
class professor:public person{
	string professorid;
	string subjectSpecialization;
	public:
		professor(string n,int a,string i,string c):person(n,a){
			professorid=i;
			subjectSpecialization=c;
		}
		void displayProfessor(){
			cout<<"Name of Professor is: "<<name;
			cout<<"Age of Professor is: "<<age;
			cout<<"ID of the Professor is: "<<professorid;
			cout<<"Course List of Professor is: "<<subjectSpecialization;
		}
};
class databaseManager{
	public:
		static databaseManager* mydata;
		databaseManager(){
			if(mydata==nullptr){
				mydata=new data;
			}                  
			else{\\
			}
		}
		void connect(){
			cout<<"Connented from the database.";
		}
		void diconnect(){
			cout<<"Disconnented from the database.";
		}
		void logQuery(){
			cout<<"Connented to the database.";
		}
};
databaseManager* databaseManager::mydata=nullptr;
int main(){
	
}