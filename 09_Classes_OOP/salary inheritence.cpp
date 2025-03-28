#include<iostream>
using namespace std;
class Employee{
protected:
    int reg;
    string name;
    string des;
    float hr,salary,fund;
public:
    void get(){
        cout << "Enter Employee Registration Number: ";
        cin>>reg;
        cout<<"Enter Employee Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Employee Designation: ";
        getline(cin,des);
    }
    void display(){cout<<"Sub-Class not created.";
    }
};
class Salary : public Employee {
public:
    void getSalary() {
        cout<<"Enter Human Resource Allowance: ";
        cin>>hr;
        cout<<"Enter Basic Salary: ";
        cin>>salary;
        cout<<"Enter Profitable Fund: ";
        cin>>fund;
    }
    void displaySalary() {
        cout<<"\nEmployee Registration Number: " << reg;
        cout << "\nEmployee Name: " << name;
        cout << "\nEmployee Designation: " << des<< endl;
        cout << "Human Resource Allowance: " << hr<< endl;
        cout << "Basic Salary: " <<salary << endl;
        cout << "Profitable Fund: "<<fund << endl;
    }
};
int main() {
    Salary emp;
    cout << "Enter Employee Details:\n";
    emp.get();
    emp.getSalary();
    cout << "\nDisplaying Employee Salary Details:\n";
    emp.displaySalary();
    return 0;
}