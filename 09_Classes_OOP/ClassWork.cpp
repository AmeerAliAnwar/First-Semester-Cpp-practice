//#include<iostream>
//using namespace std;
//class Vehicle{
//	protected:
//		string maker="Honda",model="Accord";
//		int year=2022;
//	public:
//		void showcar(){
//			cout<<"Car details are : "<<endl;
//			cout<<"Maker : "<<maker;
//			cout<<"Model : "<<model;
//			cout<<"Year : "<<year;
//		}
//};
//class FuelType{
//	protected:
//		string fuelname="GAsoline";
//		float efficiency=30.5;
//	public:
//		void showfuel(){
//			cout<<"fuel details are : "<<endl;
//			cout<<"Fuel Name : "<<fuelname;
//			cout<<"Efficiency : "<<efficiency;
//		}
//};
//class VehicleFuelType : public vehicle,FuelType{
//};
//int main(){
//
//}

//#include<iostream>
//using namespace std;
//class Shape{
//	protected:
//		float l,w,r;
//};
//class Rectangle : public Shape{
//	public:
//		void area(){
//			cout<<"Enter the Lenth of Rectangle : ";
//			cin>>l;
//			cout<<"Enter the Width of Rectangle : ";
//			cin>>w;
//			cout<<"Area of Rectangle : "<<l*w<<endl;
//		}
//};
//class Circle : public Shape{
//	public:
//		void area(){
//			cout<<"Enter the Radius of Circle : ";
//			cin>>r;
//			cout<<"Area of the Circle : "<<3.14*r*r
//			<<endl;
//		}
//};
//int main(){
//	Circle c1;
//	c1.area();
//	Rectangle r1;
//	r1.area();
//}
//
//#include<iostream>
//using namespace std;
//class student{
//	protected:
//		int rollno;
//		int mark1;
//		int mark2;
//	public:
//		void get(){
//			cout<<"Enter your Roll No. : ";
//			cin>>rollno;
//			cout<<"Enter your marks of First Subject : ";
//			cin>>mark1;
//			cout<<"Enter your marks of Second Subject : ";
//			cin>>mark2;
//		}
//};
//class arts{
//	protected:
//		int artsmarks;
//	public:
//		void getam(){
//			cout<<"Enter your Arts Marks : ";
//			cin>>artsmarks;
//		}
//};
//class result :public student,public arts{
//	public:
//		void display(){
//			cout<<"Your Total marks : ";
//			cout<<mark1+mark2+artsmarks;
//			cout<<endl;
//			cout<<"Your Average Marks : ";
//			cout<<(mark1+mark2+artsmarks)/3;
//		}
//};
//int main(){
//	result r1;
//	r1.get();
//	r1.getam();
//	r1.display();
//}
//#include<iostream>
//using namespace std;
//class animal{
//	string color;
//	public:
//		virtual void sound(){
//			cout<<"Animal Not Specified."<<endl;
//		}
//};
//class dog:public animal{
//	public:
//		void sound() override {
//			cout<<"bowbow!!!"<<endl;
//		}
//};
//class cat:public animal{
//	public:
//		void sound() override {
//			cout<<"MeowMeow!!!"<<endl;
//		}
//};
//int main(){
//	cat ca;
//	animal* a;
//	dog d;
//	a=&d;
//	a->sound();
//	cat c;
//	a=&c;
//	a->sound();
//	animal an=ca;
//	an.sound();
//}
//#include<iostream>
//using namespace std;
//class sum{
//	int x;
//	int y;
//	public:
//		friend class s;
//		void set(int a,int b){
//			x=a;
//			y=b;
//		}
//};
//class s{
//	public:
//		void display(sum a){
//			cout<<a.x+a.y;
//		}
//};
//int main(){
//	sum a1;
//	a1.set(10,10);
//	s a2;
//	a2.display(a1);
//}
//#include<iostream>
//using namespace std;
//class sum{
//	int d;
//	public:
//		void set(int d1){
//			d=d1;
//		}
//		friend void su(sum s1,sum s2);
//};
//void su(sum s1,sum s2){
//		cout<<"Sum : "<<s1.d+s2.d<<endl;
//}
//int main(){
//	sum o1,o2;
//	o1.set(10);
//	o2.set(20);
//	su(o1,o2);
//}
//#include<iostream>
//using namespace std;
//class area{
//	protected:
//		int length;
//		int width;
//	public:
//		area(int l):length(l){}
//		area(int l,int w):width(w),length(l){}
//		virtual void CalArea(){
//			cout<<"Area of Rectangle : "<<length*width<<endl;
//		}
//		~area();
//};
//class circle : public area{
//	public:
//		circle(int l):area(l){}
//		void CalArea()override{
//			cout<<"Area of Triangle : "<<3.14*length*length<<endl;
//		}
//		~circle();
//};
//class triangle:public area{
//	public:
//		triangle(int l,int w): area(l,w){}
//		void CalArea()override{
//			cout<<"Area of Triangle : "<<length*width/2<<endl;
//		}
//		~triangle();
//};
//int main(){
//	area* a1=new circle(10);
//	a1->CalArea();
//	area* a2=new triangle(10,20);
//	a2->CalArea();
//}

//#include <iostream>
//using namespace std;
//class employee{
//	protected:
//		int id;
//		string name;
//	public:
//		employee(string n,int i){
//			name=n;
//			id=i;
//		}
//		virtual double calculatePay()=0;
//		virtual void displayInfo(){
//			cout<<"Not specified!";
//		}
//		
//};
//class FullTimeEmployee:public employee{
//	private:
//		double monthlySalary;
//	public:
//		FullTimeEmployee(string n,int i,double m):employee(n,i){
//			monthlySalary=m;
//		}
//		double calculatePay()override{
//			return monthlySalary;
//		}
//		void displayInfo()override{
//			cout<<"Name : "<<name<<endl;
//			cout<<"ID : "<<id<<endl;
//			cout<<"Monthly Salary : "<<monthlySalary<<endl;
//			cout<<"Total Salary : "<<calculatePay()<<endl<<endl;
//		}
//};
//class PartTimeEmployee:public employee{
//	private:
//		double hourlyRate,hoursWorked;
//	public:
//		PartTimeEmployee(string n,int i,double hr,double hw):employee(n,i){
//			hourlyRate=hr;
//			hoursWorked=hw;
//		}
//		double calculatePay()override{
//			return hourlyRate*hoursWorked;
//		}
//		void displayInfo()override{
//			cout<<"Name : "<<name<<endl;
//			cout<<"ID : "<<id<<endl;
//			cout<<"Hourly Rate : "<<hourlyRate<<endl;
//			cout<<"Hourly Worked : "<<hoursWorked<<endl;
//			cout<<"Total Salary : "<<calculatePay()<<endl<<endl;
//		}
//};
//class CommissionEmployee:public employee{
//	private:
//		double baseSalary,salesAmount,CommissionRate;
//	public:
//		CommissionEmployee(string n,int i,double b,double s,double c):employee(n,i){
//			baseSalary=b;
//			salesAmount=s;
//			CommissionRate=c;
//		}
//		double calculatePay()override{
//			return baseSalary+(salesAmount*CommissionRate);
//		}
//		void displayInfo()override{
//			cout<<"Name : "<<name<<endl;
//			cout<<"ID : "<<id<<endl;
//			cout<<"Base Salary : "<<baseSalary<<endl;
//			cout<<"Sale Amount : "<<salesAmount<<endl;
//			cout<<"Commission Rate : "<<CommissionRate<<endl;
//			cout<<"Total Salary : "<<calculatePay()<<endl<<endl;
//		}
//};
//int main(){
//	employee* e1=new FullTimeEmployee("Ameer Ali",310,20000);
//	employee* e2=new PartTimeEmployee("Farhan",281,2000,8);
//	employee* e3=new CommissionEmployee("Raheem",303,20000,3000,0.2);
//	e1->displayInfo();
//	e2->displayInfo();
//	e3->displayInfo();
//
//}


//#include<iostream>
//using namespace std;
//class abc{ 
//	public:
//		int l;
//		abc(int x){
//			l=x;
//		}
//		abc operator/(abc &o){
//			return abc(l/o.l);
//		}
//		abc operator*(abc &o){
//			return abc(l*o.l);
//		}
//		abc operator+(abc &o){
//			return abc(l+o.l);
//		}
//		abc operator-(abc &o){
//			return abc(l-o.l);
//		}
//};
//int main(){
//	abc a(5),b(5),c(2),d(4),e(2);
//	abc o1=a/b*c+d-e;
//	cout<<o1.l;
//}


//#include <iostream>
//using namespace std;
//class book{
//		int id;
//		string title;
//		string author;
//		int totalCopies;
//		static int totalBook;
//		int issuedCopies=0;
//	public:
//		book(){
//			id=111;
//			title="nill";
//			author="nill";
//			totalBook+=1;
//		};
//		book(int i,string t,string a):id(i),title(t),author(a){
//			totalBook+=1;
//		};
//		void edit(){
//			int a;
//			cout<<"Do you want to Change ID(Yes=1/No=0)?"<<endl;
//			cin>>a;
//			if(a=1){
//				cout<<"Enter the New ID : ";
//				cin>>id;
//				cout<<endl;
//			}
//			cout<<"Do you want to Change Book Title(Yes=1/No=0)?"<<endl;
//			cin>>a;
//			if(a=1){
//				cout<<"Enter the New Book Title : ";
//				getline(cin,title);
//			}
//			cout<<"Do you want to Change Book Author(Yes=1/No=0)?"<<endl;
//			cin>>a;
//			if(a=1){
//				cout<<"Enter the New Book Author : ";
//				getline(cin,author);
//			}
//			cout<<"Do you want to Edit again(Yes=1/No=0)?";
//				cin>>a;
//				if(a=1){
//					edit();
//				}
//		}
//		int getId(){
//			return id;
//		};
//		string getTitle(){
//			return title;
//		};
//		string getAuthor(){
//			return author;
//		};
//		int getAvailableCopies(){
//			return totalCopies-issuedCopies;
//		}
//		int getTotalCopies(){
//			return totalCopies;
//		};
//		int getIssuedCopies(){
//			return issuedCopies;
//		};
//		bool issuebook(){
//			if(issuedCopies<3){
//				issuedCopies+=1;
//				return true;
//			}
//			else{
//				return false;
//			}
//		}
//		bool returnBook(){
//			if(issuedCopies>0){
//				issuedCopies-=1;
//				return true;
//			}
//			else{
//				return false;
//			}
//		}
//		bool returnAll(){
//			issuedCopies=0;
//			return true;
//		}
//		void display(){
//			cout<<"1. Book ID : "<<id<<endl;
//			cout<<"2. Book Title : "<<title<<endl;
//			cout<<"3. Book Author : "<<author<<endl;
//			cout<<"4. Total Copies : "<<totalCopies<<endl;
//		}
//		
//	~book();
//};
//int book::totalBook=0;
//class user{
//		string name;
//	public:
//		user(){};
//		user(string n):name(n){};
//		virtual void menu()=0;
//};
//class student:public user{
//		int studentId;
//		static int studentcount;
//		book* bookList[3];
//	public:
//		student():user(){
//			studentcount+=1;
//		};
//		student(int i,string n):studentId(i),user(n){
//			studentcount+=1;
//			int issuedBook;
//			for(int i=0; i<3; i++){
//				bookList[i]= nullptr;
//			}
//		};
//		~student();
//};
//int student::studentcount=0;
//class admin:public user{
//		int adminId;
//	public:
//		admin():user(){
//		};
//		admin(int i,string n):adminId(i),user(n){
//		};
//		~admin();
//};
//int main(){
//	
//}



//
//#include<iostream>
//using namespace std;
//class Scooter{
//	string scooterID;
//	string brand;
//	float dailyRentalCost;
//	bool isAvailable;
//	public:
//		Scooter(){}
//		Scooter(string i,string b,float c){
//			scooterID=i;
//			brand=b;
//			dailyRentalCost=c;
//		}
//		float getCost(){
//			return dailyRentalCost;
//		}
//		void displayScooter(){
//			cout<<"Scooter Details : "<<endl;
//			cout<<"Scooter ID : "<<scooterID<<endl;
//			cout<<"Scooter Brand : "<<brand<<endl;
//			cout<<"Scooter Daily Rental cost : "<<scooterID<<endl;
//			cout<<"Scooter Is Available : ";
//			if(isAvailable){
//				cout<<"Yes!";
//				cout<<endl;
//			}
//			else{
//				cout<<"NO!"<<endl;
//			}
//		}
//		void AvailabeStatus(bool i){
//			isAvailable=i;
//		}
//};
//class Customer{
//	string customerID;
//	string name;
//	public:
//		Customer(){}
//		Customer(string i,string n){
//			customerID=i;
//			name=n;
//		}
//		void displayCustomer(){
//			cout<<"Customer Details : "<<endl;
//			cout<<"Customer ID : "<<customerID<<endl;
//			cout<<"Customer Name : "<<name <<endl;
//		}
//};
//class Rental:public Customer,public Scooter{
//	int numberOfDays;
//	float totalCost=0;
//	public:
//		Rental(){}
//		Rental(string ci,string n,string si,string sb,float c,int nd){
//			Customer(ci,n);
//			Scooter(si,sb,c);
//			numberOfDays=nd;
//			totalCost=numberOfDays*getCost();
//		}
//		void displayRental(){
//			displayCustomer();
//			displayScooter();
//			cout<<"Number Of Days : "<<numberOfDays<<endl;
//			cout<<"Total Rental Cost : "<<totalCost<<endl;
//		}
//};
//int main() {
//    cout << "ScooterFlex's Fleet Management System" << endl;
//    const int MAX = 5;
//    Scooter scooters[MAX];
//    Customer customers[MAX];
//    Rental rentals[MAX];
//    int scooterCount = 0, customerCount = 0, rentalCount = 0;
//
//    int choice;
//    do {
//        cout << "\nMenu:\n";
//        cout << "1. Add Scooter\n";
//        cout << "2. Add Customer\n";
//        cout << "3. Add Rental\n";
//        cout << "4. Display Scooters\n";
//        cout << "5. Display Customers\n";
//        cout << "6. Display Rentals\n";
//        cout << "0. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        cin.ignore();
//
//        if (choice == 1 && scooterCount < MAX) {
//            string id, brand;
//            float cost;
//            cout << "Enter Scooter ID: ";
//            getline(cin, id);
//            cout << "Enter Scooter Brand: ";
//            getline(cin, brand);
//            cout << "Enter Daily Rental Cost: ";
//            cin >> cost;
//            cin.ignore();
//            scooters[scooterCount] = Scooter(id, brand, cost);
//            scooters[scooterCount].AvailabeStatus(true);
//            scooterCount++;
//            cout << "Scooter added.\n";
//        } else if (choice == 2 && customerCount < MAX) {
//            string id, name;
//            cout << "Enter Customer ID: ";
//            getline(cin, id);
//            cout << "Enter Customer Name: ";
//            getline(cin, name);
//            customers[customerCount] = Customer(id, name);
//            customerCount++;
//            cout << "Customer added.\n";
//        } else if (choice == 3 && rentalCount < MAX) {
//            if (customerCount == 0 || scooterCount == 0) {
//                cout << "Add at least one customer and one scooter first.\n";
//                continue;
//            }
//            string custID, custName, scootID, scootBrand;
//            float cost;
//            int days;
//            cout << "Enter Customer ID: ";
//            getline(cin, custID);
//            cout << "Enter Customer Name: ";
//            getline(cin, custName);
//            cout << "Enter Scooter ID: ";
//            getline(cin, scootID);
//            cout << "Enter Scooter Brand: ";
//            getline(cin, scootBrand);
//            cout << "Enter Daily Rental Cost: ";
//            cin >> cost;
//            cout << "Enter Number of Days: ";
//            cin >> days;
//            cin.ignore();
//            rentals[rentalCount] = Rental(custID, custName, scootID, scootBrand, cost, days);
//            rentalCount++;
//            cout << "Rental added.\n";
//        } else if (choice == 4) {
//            for (int i = 0; i < scooterCount; ++i) {
//                scooters[i].displayScooter();
//                cout << endl;
//            }
//        } else if (choice == 5) {
//            for (int i = 0; i < customerCount; ++i) {
//                customers[i].displayCustomer();
//                cout << endl;
//            }
//        } else if (choice == 6) {
//            for (int i = 0; i < rentalCount; ++i) {
//                rentals[i].displayRental();
//                cout << endl;
//            }
//        } else if (choice == 0) {
//            cout << "Exiting...\n";
//        } else {
//            cout << "Invalid choice or limit reached.\n";
//        }
//    } while (choice != 0);
//
//    return 0;
//}



//#include<iostream>
//using namespace std;
//void reverse(int arr[],int n){
//	for(int i=0;i<n/2; i++){
//		int j=n-i-1;
//		arr[i]=arr[j]+arr[i]-(arr[j]=arr[i]);
//	}
//}
//int main()
//{
//	int n;
//	cout<<"Enter the Size of array : "<<endl;
//	cin>>n;
//	int arr[n];
//	cout<<"Enter 1D array : "<<endl;
//	for(int i=0; i<n; i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<n; i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	cout<<"Finding Maximum : "<<endl;
//	cout<<"Enter 1D array : "<<endl;
//	for(int i=0; i<n; i++){
//		cin>>arr[i];
//	}
//	int tem=arr[0];
//	cout<<endl;
//	for(int i=0; i<n; i++){
//		if (tem<arr[i]){
//			tem=arr[i];
//		}
//	}
//	cout<<"Maximum = "<<tem<<endl;
//	cout<<"Finding Minimum : "<<endl;
//	cout<<"Enter 1D array : "<<endl;
//	for(int i=0; i<n; i++){
//		cin>>arr[i];
//	}
//	for(int i=0; i<n; i++){
//		if(tem>arr[i]){
//			tem=arr[i];
//		}
//	}
//	cout<<"Minimum = "<<tem<<endl;
//	cout<<"Reversing Array : "<<endl;
//	for(int i=0; i<n; i++){
//		cin>>arr[i];
//	}
//	reverse(arr,n);
//	for(int i=0; i<n; i++){
//		cout<<arr[i]<<" ";
//	}cout<<endl;
//	cout<<"Even / Odds : "<<endl;
//	cout<<"Enter 1D array : "<<endl;
//	for(int i=0; i<n; i++){
//		cin>>arr[i];
//	}
//	tem=0;
//	for(int i=0; i<n; i++){
//		if(arr[i]%2==0){
//			tem++;
//		}
//	}
//	cout<<"Even = "<<tem<<endl;
//	cout<<"Odd = "<<sizeof(arr)-tem<<endl;
//}


//#include<iostream>
//using namespace std;
//void max(int arr[],int n,int &a){
//	for(int i=0; i<n;i++){
//		if(a<arr[i]){
//			a=arr[i];
//		}
//	}
//}
//int main(){
//	int n;
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n; i++){
//		cin>>arr[i];
//	}
//	int m=arr[0];
//	max(arr,n,m);
//	cout<<m;
//	
//}


//#include<iostream>
//using namespace std;
//struct Student{
//	string name;
//	int age,marks;
//};
//int main(){
//	Student *s1=new Student;
//	cin>>s1->age;
//	cin>>s1->name;
//	cin>>s1->marks;
//	cout<<s1->age;
//	cout<<s1->name;
//	cout<<s1->marks;
//	delete s1;
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int n,m;
//	cin>>n>>m;
//	int arr[n][m],a[m][n];
//	for(int i=0;i<n;i++){
//		for(int j=0; j<m; j++){
//			cin>>arr[i][j];
//		}
//	}
//	for(int i=0;i<m;i++){
//		for(int j=0; j<n; j++){
//			a[i][j]=arr[j][i];
//		}
//	}
//	for(int i=0;i<m;i++){
//		for(int j=0; j<n; j++){
//			cout<<a[i][j]<<" ";
//		}cout<<endl;
//	}
//}



//#include<iostream>
//using namespace std;
//
//    // max is Global
//const int Max=5;
//
//class Stack{
//	private:
//		int top;
//		int arr[Max];
//	public:
//		Stack(){
//			top=-1;
//		}
//		bool isFull(){
//			return top==Max-1;
//		}
//		bool isEmpty(){
//			return top==-1;
//		}
//		void print(){
//			for(int i=0; i<=top; i++){
//				cout<<arr[i]<<" ";
//			}cout<<endl;
//		}
//		void push(int n){
//			if(!isFull()){
//				top++;
//				arr[top]=n;
//				cout<<"The element \""<<n<<"\" is added to ("<<top+1<<") Position."<<endl;
//			}
//			else{
//				cout<<"Stack is Full, can't  add any other element."<<endl;
//			}
//			print();
//		}
//		void pop(){
//			if(!isEmpty()){
//				cout<<"The element \""<<arr[top]<<"\" is removed from ("<<top+1<<") Position."<<endl;
//				top--;
//			}
//			else{
//				cout<<"Stack is Empty."<<endl;
//			}
//			print();
//		}
//};
//int main (){
//	Stack stack;
//	stack.push(2);
//	stack.push(3);
//	stack.pop();
//	stack.pop();
//	stack.pop();
//	
//}


//#include <iostream>
//using namespace std;
//const int Max=10;
//class Queue{
//	private:
//		int front;
//		int rare;
//		int arr[Max];
//	public:
//		Queue(){
//			front=0;
//			rare=-1;
//		}
//		bool isFull(){
//			return rare==Max-1;
//		}
//		bool isEmpty(){
//			return rare<front;
//		}
//		void en(int n){
//			if(!isFull()){
//				rare++;
//				arr[rare]=n;
//				cout<<"The element \""<<n<<"\" is added to ("<<rare+1<<") Position. "<<endl;
//			}
//			else{
//				cout<<"Queue is Full. "<<endl;
//			}
//		}
//		void de(){
//			if(!isEmpty()){
//				int tem=arr[front];
//				for(int n=0; n<rare; n++){
//					swap(arr[n],arr[n+1]);
//				}rare--;
//				cout<<"The element \""<<tem<<"\" is removed from ("<<1<<") Position. "<<endl;
//			}
//			else{
//				cout<<"Queue is Empty. "<<endl;
//			}
//		}
//};
//int main(){
//	Queue q;
//	q.en(1);
//	q.en(2);
//	q.en(3);
//	q.de();
//	q.de();
//	q.de();
//	q.de();
//}


//#include <iostream>
//using namespace std;
//const int Max=5;
//class Queue {
//	private:
//		int front;
//		int rear;
//		int arr[Max];
//		int count;
//	public:
//		Queue(){
//		front=0;
//		rear=-1;
//		count=0;
//		}
//		bool isFull(){
//			return count==Max;
//		}
//		bool isEmpty(){
//			return count==0;
//		}
//		void en(int n){
//			if(isFull()){
//				cout<<"Queue is Full."<<endl;
//				return;
//			}
//			if(rear==Max-1){
//				rear=0;
//			}else{
//			rear++;
//			}
//			arr[rear]=n;
//			count++;
//			cout<<"The element \""<<n<<"\" is added at position ("<<rear<<")."<<endl;
//		}
//		void de(){
//			if(isEmpty()){
//				cout<<"Queue is Empty."<<endl;
//				return;
//			}
//			int temp=arr[front];
//			if(front==Max-1){
//				front=0;
//			}else{
//				front++;
//			}
//			count--;
//			cout<<"The element \""<<temp<<"\" is removed."<<endl;
//		}
//		void display(){
//			if(isEmpty()){
//				cout<<"Queue is Empty."<<endl;
//				return;
//			}
//			cout<<"Queue elements: ";
//			int i=front;
//			int elements=count;
//			while(elements>0){
//				cout<<arr[i]<<" ";
//				if(i==Max-1){
//					i=0;
//				}else{
//					i++;
//				}
//				elements--;
//			}
//			cout<<endl;
//		}
//	};
//int main(){
//	Queue q;
//	q.en(1);
//	q.en(2);
//	q.en(3);
//	q.en(4);
//	q.en(5);
//	q.en(6);
//	q.display();
//	q.de();
//	q.de();
//	q.display();
//	q.en(6);
//	q.en(7);
//	q.display();
//	q.de();
//	q.de();
//	q.de();
//	q.de();
//	q.de();
//	q.display();
//	return 0;
//}



//1

//#include<iostream>
//using namespace std;
//int main(){
//	int num=42;
//	int* ptr=&num;
//	cout<<num<<endl;
//	cout<<*ptr;
//}

//2

//#include<iostream>
//using namespace std;
//int main(){
//	int* num=new int;
//	cout<<"Enter a Value : ";
//	cin>>*num;
//	cout<<*num<<endl;
//	delete num;
//}


//3

//#include<iostream>
//using namespace std;
//int main(){
//	int arr[5];
//	int tem=2;
//	for(int i=0; i<5; i++){
//		arr[i]=tem;
//		tem+=2;
//	}
//	int* ptr;
//	ptr=&arr[0];
//	for(int i=0; i<5; i++){
//		cout<<*ptr<<" ";
//		ptr++;
//	}
//}


//4

//#include<iostream>
//using namespace std;
//int main(){
//	int size=5;
//	int* arr=new int[size];
//	cout<<"How many element you want to add : ";
//	int n;
//	cin>>n;
//	if(n>size){
//		int* newarr=new int[n];
//		for(int i=0; i<size; i++){
//			newarr[i]=arr[i];
//		}
//		delete[] arr;
//		arr=newarr;
//		size=n;
//	}
//	for(int i=0; i<size; i++){
//		arr[i]=rand();
//	}
//	for(int i=0; i<size; i++){
//		cout<<arr[i]<<" ";
//
//	}
//}


//5

//#include<iostream>
//using namespace std;
//int main(){
//	int num=42;
//	int* ptr1=&num;
//	int** ptr2=&ptr1;
//	cout<<**ptr2;
//}


//6


//#include<iostream>
//using namespace std;
//int max(int arr[],int n){
//	return arr[--n];
//}
//int min(int arr[]){
//	return arr[0];
//}
//int main(){
//	int n;
//	cout<<"Enter the Size of Array : ";
//	cin>>n;
//	int arr[n];
//	for(int i=0; i<n; i++){
//		arr[i]=rand();
//	}
//	for(int j=0; j<n; j++){
//		for(int i=j; i<n; i++){
//			if(arr[j]>arr[i]){
//				swap(arr[j],arr[i]);
//			}
//		}
//	}
//	for(int i=0; i<n; i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	cout<<max(arr,n);
//	cout<<endl;
//	cout<<min(arr);
//}


//7

//#include<iostream>
//using namespace std;
//class student{
//	int age;
//	char* name;
//	public:
//		student(char *n,int a){
//			name=n;
//			age=a;
//		}
//		void setname(char* n){
//			name=n;
//		}void setage(int a){
//			age=a;
//		}
//		void display(){
//			cout<<name<<endl<<age<<endl;
//		}
//};
//int main(){
//	student s1("Ameer Ali",19);
//	student s2=s1;
//	s2.setname("Farhan");
//	s1.display();
//	s2.display();
//}


//8

//#include <iostream>
//using namespace std;
//class student {
//    int age;
//    char* name;
//public:
//	student(char *n, int a) {	
//        name = new char[strlen(n) + 1];
//		strcpy(name, n);
//		age = a;
//    }
//	student(const student &s) {
//        name = new char[strlen(s.name) + 1];
//		strcpy(name, s.name);
//		age = s.age;
//    }
//	void setname(char* n) {
//        delete[] name;
//		name = new char[strlen(n) + 1];
//		strcpy(name, n);
//    }
//    void setage(int a) {
//        age = a;
//    }
//	void display() {
//        cout << name << endl << age << endl;
//	}
//	~student() {
//		delete[] name;	
//	}
//};
//int main(){
//	student s1("Ameer Ali", 19);	
//	student s2 = s1;
//	s2.setname("Farhan");
//	s1.display();
//	s2.display();
//}


//9

//#include <iostream>
//using namespace std;
//class Person{
//private:
//    char* name;
//    int age;
//public:
//    Person(char* n, int a) {
//        name=new char[strlen(n) + 1];
//        strcpy(name, n);
//        age=a;
//    }
//    Person(const Person& p) {
//        name=p.name;
//        age=p.age;
//    }
//    void SetAge(int newAge) {
//        age=newAge;
//    }
//    void display() {
//        cout<<"Name: "<<name<<", Age: "<<age<<endl;
//    }
//    ~Person() {}
//};
//
//class PersonDeep {
//private:
//    char* name;
//    int age;
//public:
//    PersonDeep(char* n, int a) {
//        name=new char[strlen(n) + 1];
//        strcpy(name, n);
//        age=a;
//    }
//    PersonDeep(const PersonDeep& p) {
//        name=new char[strlen(p.name) + 1];
//        strcpy(name, p.name);
//        age=p.age;
//    }
//    void SetAge(int newAge) {
//        age=newAge;
//    }
//    void display() {
//        cout<<"Name: "<<name<<", Age: "<<age<<endl;
//    }
//    ~PersonDeep(){
//        delete[]name;
//    }
//};
//
//int main(){
//    Person p1("Ameer", 20);
//    Person p2=p1;
//    p2.SetAge(25);
//    p1.display();
//    p2.display();
//    PersonDeep d1("Ali", 22);
//    PersonDeep d2=d1;
//    d2.SetAge(30);
//    d1.display();
//    d2.display();
//    return 0;
//}


//#include<iostream>
//using namespace std;
//struct node{
//	int var;
//	node* next;
//	node(int v){
//		var=v;
//		next=nullptr;
//	}
//};
//node* head=nullptr;
//node* newnode=nullptr;
//node* tem=nullptr;
//void InsertAtEnd(int v){
//	newnode=new node(v);
//	if(head==nullptr){
//		head=newnode;
//	}else{
//		tem=head;
//		while(tem->next!=nullptr){
//			tem=tem->next;
//		}
//		tem->next=newnode;
//	}
//	tem=nullptr;
//}
//int Findlength(){
//	int count=0;
//	tem=head;
//	while(tem!=nullptr){
//		tem=tem->next;
//		count++;
//	}
//	tem=nullptr;
//	return count;
//}
//void InsertAtPosition(int v,int p){
//	newnode=new node(v);
//	int count=1;
//	tem=head;
//	while(tem!=nullptr && count!=p){
//		tem=tem->next;
//		count++;
//	}
//	newnode->next=tem->next;
//	tem->next=newnode;
//	tem=nullptr;
//}
//void display(){
//	cout<<"List : ";
//	tem=head;
//	while(tem!=nullptr){
//		cout<<tem->var<<" ";
//		tem=tem->next;
//	}
//	tem=nullptr;
//}
//int main(){
//	InsertAtEnd(45);
//	InsertAtEnd(20);
//	InsertAtEnd(30);
//	display();
//	InsertAtPosition(67,2);
//	display();
//	cout<<"Size : "<<Findlength();
//	head=nullptr,tem=nullptr,newnode=nullptr;
//}


//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//    Node(int val) : data(val), next(nullptr) {}
//};
//
//class CircularLinkedList {
//private:
//    Node* last;
//
//public:
//    CircularLinkedList() : last(nullptr) {}
//
//    void insertAtHead(int data) {
//        Node* newNode = new Node(data);
//        if (last == nullptr) {
//            newNode->next = newNode;
//            last = newNode;
//            return;
//        }
//        newNode->next = last->next;
//        last->next = newNode;
//    }
//
//    void insertAtTail(int data) {
//        Node* newNode = new Node(data);
//        if (last == nullptr) {
//            newNode->next = newNode;
//            last = newNode;
//            return;
//        }
//        newNode->next = last->next;
//        last->next = newNode;
//        last = newNode;
//    }
//
//    void deleteLastNode() {
//        if (last == nullptr) {
//            cout << "List is empty" << endl;
//            return;
//        }
//        Node* head = last->next;
//        if (last == head) {
//            delete last;
//            last = nullptr;
//            return;
//        }
//        Node* temp = head;
//        while (temp->next != last) {
//            temp = temp->next;
//        }
//        temp->next = head;
//        delete last;
//        last = temp;
//    }
//
//    void deleteAtHead() {
//        if (last == nullptr) {
//            cout << "List is empty" << endl;
//            return;
//        }
//        Node* head = last->next;
//        if (last == head) {
//            delete last;
//            last = nullptr;
//            return;
//        }
//        last->next = head->next;
//        delete head;
//    }
//
//    bool search(int key) {
//        if (last == nullptr) return false;
//        Node* temp = last->next;
//        do {
//            if (temp->data == key) return true;
//            temp = temp->next;
//        } while (temp != last->next);
//        return false;
//    }
//
//    int count() {
//        if (last == nullptr) return 0;
//        int cnt = 0;
//        Node* temp = last->next;
//        do {
//            cnt++;
//            temp = temp->next;
//        } while (temp != last->next);
//        return cnt;
//    }
//
//    void print() {
//        if (last == nullptr) {
//            cout << "List is empty" << endl;
//            return;
//        }
//        Node* temp = last->next;
//        do {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        } while (temp != last->next);
//        cout << "(back to head)" << endl;
//    }
//
//    ~CircularLinkedList() {
//        while (last != nullptr) {
//            deleteLastNode();
//        }
//    }
//};
//
//int main() {
//    CircularLinkedList list;
//
//    cout << "=== CIRCULAR LINKED LIST OPERATIONS ===" << endl << endl;
//
//    cout << "1. Insert at Head:" << endl;
//    list.insertAtHead(30);
//    cout << "After inserting 30: "; list.print();
//    list.insertAtHead(20);
//    cout << "After inserting 20: "; list.print();
//    list.insertAtHead(10);
//    cout << "After inserting 10: "; list.print();
//    cout << endl;
//
//    cout << "2. Traversal:" << endl;
//    cout << "Current list: "; list.print();
//    cout << "Number of nodes: " << list.count() << endl << endl;
//
//    cout << "3. Insert at Tail:" << endl;
//    list.insertAtTail(40);
//    list.insertAtTail(50);
//    cout << "After inserting 40 and 50: "; list.print();
//    cout << endl;
//
//    cout << "4. Delete Last Node:" << endl;
//    cout << "Before: "; list.print();
//    list.deleteLastNode();
//    cout << "After deletion: "; list.print();
//    list.deleteLastNode();
//    cout << "After deletion: "; list.print();
//    cout << endl;
//
//    cout << "5. Search:" << endl;
//    cout << "Searching for 20: " << (list.search(20) ? "Found" : "Not Found") << endl;
//    cout << "Searching for 100: " << (list.search(100) ? "Found" : "Not Found") << endl;
//    cout << endl;
//
//    cout << "6. Edge Cases:" << endl;
//    cout << "Deleting all nodes..." << endl;
//    while (list.count() > 0) {
//        cout << "Deleting... "; 
//        list.deleteLastNode();
//        if (list.count() > 0) list.print();
//        else cout << "List is empty" << endl;
//    }
//    cout << endl;
//
//    cout << "7. Empty List Operations:" << endl;
//    list.print();
//    list.deleteLastNode();
//    cout << endl;
//
//    cout << "8. Rebuild:" << endl;
//    list.insertAtHead(5);
//    list.insertAtHead(4);
//    list.insertAtHead(3);
//    list.insertAtHead(2);
//    list.insertAtHead(1);
//    cout << "Final list: "; list.print();
//    cout << "Total nodes: " << list.count() << endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//    Node(int val) : data(val), next(nullptr) {}
//};
//
//void push(Node** top, int data) {
//    Node* newNode = new Node(data);
//    newNode->next = *top;
//    *top = newNode;
//}
//
//int pop(Node** top) {
//    if (*top == nullptr) {
//        cout << "Stack Underflow!" << endl;
//        return -1;
//    }
//    Node* temp = *top;
//    int val = temp->data;
//    *top = (*top)->next;
//    delete temp;
//    return val;
//}
//
//void display(Node* top) {
//    if (top == nullptr) {
//        cout << "Stack is empty" << endl;
//        return;
//    }
//    cout << "Stack: ";
//    Node* temp = top;
//    while (temp != nullptr) {
//        cout << temp->data;
//        if (temp->next != nullptr) cout << " -> ";
//        temp = temp->next;
//    }
//    cout << endl;
//}
//
//bool searchStack(Node* top, int key) {
//    Node* current = top;
//    int pos = 1;
//    while (current != nullptr) {
//        if (current->data == key) {
//            cout << "Found " << key << " at position " << pos << endl;
//            return true;
//        }
//        current = current->next;
//        pos++;
//    }
//    cout << key << " not found" << endl;
//    return false;
//}
//
//void deleteElement(Node** top, int key) {
//    if (*top == nullptr) {
//        cout << "Stack is empty" << endl;
//        return;
//    }
//    if ((*top)->data == key) {
//        Node* temp = *top;
//        *top = (*top)->next;
//        delete temp;
//        cout << "Deleted " << key << endl;
//        return;
//    }
//    Node* current = *top;
//    Node* prev = nullptr;
//    while (current != nullptr && current->data != key) {
//        prev = current;
//        current = current->next;
//    }
//    if (current == nullptr) {
//        cout << key << " not found" << endl;
//        return;
//    }
//    prev->next = current->next;
//    delete current;
//    cout << "Deleted " << key << endl;
//}
//
//void printReverseHelper(Node* top) {
//    if (top == nullptr) return;
//    printReverseHelper(top->next);
//    cout << top->data << " ";
//}
//
//void printInReverse(Node* top) {
//    if (top == nullptr) {
//        cout << "Stack is empty" << endl;
//        return;
//    }
//    cout << "Reverse: ";
//    printReverseHelper(top);
//    cout << endl;
//}
//
//void reverseStack(Node** top) {
//    if (*top == nullptr || (*top)->next == nullptr) return;
//    Node* prev = nullptr;
//    Node* current = *top;
//    Node* next = nullptr;
//    while (current != nullptr) {
//        next = current->next;
//        current->next = prev;
//        prev = current;
//        current = next;
//    }
//    *top = prev;
//}
//
//int main() {
//    Node* stack = nullptr;
//    
//    cout << "=== Stack Operations ===" << endl << endl;
//    
//    cout << "Building stack..." << endl;
//    push(&stack, 10);
//    push(&stack, 20);
//    push(&stack, 30);
//    push(&stack, 40);
//    push(&stack, 50);
//    display(stack);
//    cout << endl;
//    
//    cout << "Task 1: Search Element" << endl;
//    searchStack(stack, 30);
//    searchStack(stack, 10);
//    searchStack(stack, 100);
//    cout << endl;
//    
//    cout << "Task 2: Delete Element" << endl;
//    cout << "Before: "; display(stack);
//    deleteElement(&stack, 30);
//    display(stack);
//    deleteElement(&stack, 50);
//    display(stack);
//    deleteElement(&stack, 10);
//    display(stack);
//    cout << endl;
//    
//    cout << "Task 3: Print Reverse" << endl;
//    display(stack);
//    printInReverse(stack);
//    cout << endl;
//    
//    cout << "Rebuilding stack..." << endl;
//    while (stack != nullptr) pop(&stack);
//    push(&stack, 1);
//    push(&stack, 2);
//    push(&stack, 3);
//    push(&stack, 4);
//    push(&stack, 5);
//    display(stack);
//    printInReverse(stack);
//    cout << endl;
//    
//    cout << "Task 4: Reverse Stack" << endl;
//    cout << "Before: "; display(stack);
//    reverseStack(&stack);
//    cout << "After: "; display(stack);
//    printInReverse(stack);
//    cout << endl;
//    
//    cout << "Testing edge cases..." << endl;
//    Node* empty = nullptr;
//    searchStack(empty, 10);
//    deleteElement(&empty, 10);
//    printInReverse(empty);
//    cout << endl;
//    
//    Node* single = nullptr;
//    push(&single, 99);
//    cout << "Single element: "; display(single);
//    searchStack(single, 99);
//    printInReverse(single);
//    reverseStack(&single);
//    display(single);
//    cout << endl;
//    
//    cout << "Final test..." << endl;
//    Node* test = nullptr;
//    push(&test, 100);
//    push(&test, 200);
//    push(&test, 300);
//    push(&test, 400);
//    push(&test, 500);
//    display(test);
//    searchStack(test, 300);
//    printInReverse(test);
//    deleteElement(&test, 300);
//    display(test);
//    reverseStack(&test);
//    display(test);
//    
//    while (stack != nullptr) pop(&stack);
//    while (single != nullptr) pop(&single);
//    while (test != nullptr) pop(&test);
//    
//    return 0;
//}



//#include <iostream>
//using namespace std;
//class Node {
//public:
//	int value;
//	Node* left;
//	Node* right;
//	Node(int val) {
//		value = val;
//		left = nullptr;
//		right = nullptr;
//	}
//};
//class BinarySearchTree {
//private:
//	Node* root;
//	Node* insertRecursive(Node* node, int value) {
//		if (node == nullptr) {
//			return new Node(value);
//		}
//		
//		if (value < node->value) {
//			node->left = insertRecursive(node->left, value);
//		} else {
//			node->right = insertRecursive(node->right, value);
//		}
//		
//		return node;
//	}
//	
//	Node* findMin(Node* node) {
//		while (node->left != nullptr) {
//			node = node->left;
//		}
//		return node;
//	}
//	
//	Node* deleteRecursive(Node* node, int value) {
//		if (node == nullptr) {
//			return node;
//		}
//		
//		if (value < node->value) {
//			node->left = deleteRecursive(node->left, value);
//		} else if (value > node->value) {
//			node->right = deleteRecursive(node->right, value);
//		} else {
//			if (node->left == nullptr) {
//				Node* temp = node->right;
//				delete node;
//				return temp;
//			} else if (node->right == nullptr) {
//				Node* temp = node->left;
//				delete node;
//				return temp;
//			}
//			
//			Node* temp = findMin(node->right);
//			node->value = temp->value;
//			node->right = deleteRecursive(node->right, temp->value);
//		}
//		
//		return node;
//	}
//	
//	void inorderRecursive(Node* node) {
//		if (node != nullptr) {
//			inorderRecursive(node->left);
//			cout << node->value << " ";
//			inorderRecursive(node->right);
//		}
//	}
//	
//	void preorderRecursive(Node* node) {
//		if (node != nullptr) {
//			cout << node->value << " ";
//			preorderRecursive(node->left);
//			preorderRecursive(node->right);
//		}
//	}
//	
//	void postorderRecursive(Node* node) {
//		if (node != nullptr) {
//			postorderRecursive(node->left);
//			postorderRecursive(node->right);
//			cout << node->value << " ";
//		}
//	}
//public:
//	BinarySearchTree() {
//		root = nullptr;
//	}
//	void insert(int value) {
//		root = insertRecursive(root, value);
//	}
//	void remove(int value) {
//		root = deleteRecursive(root, value);
//	}
//	void inorder() {
//		inorderRecursive(root);
//		cout << endl;
//	}
//	void preorder() {
//		preorderRecursive(root);
//		cout << endl;
//	}
//	void postorder() {
//		postorderRecursive(root);
//		cout << endl;
//	}
//};
//int main() {
//	BinarySearchTree bst;
//	bst.insert(50);
//	bst.insert(30);
//	bst.insert(70);
//	bst.insert(20);
//	bst.insert(40);
//	bst.insert(60);
//	bst.insert(80);
//	cout << "Inorder: ";
//	bst.inorder();
//	cout << "Preorder: ";
//	bst.preorder();
//	cout << "Postorder: ";
//	bst.postorder();
//	bst.remove(30);
//	cout << "\nAfter deleting 30:" << endl;
//	cout << "Inorder: ";
//	bst.inorder();
//	return 0;
//}




#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* left;
	Node* right;
	int height;
};
int max(int a, int b) {
	return (a > b) ? a : b;
}
int height(Node* node) {
	if(node==NULL)
		return 0;
	return node->height;
}
Node* createNode(int data) {
	Node* node=new Node();
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	node->height=1;
	return node;
}
Node* rightRotate(Node* y) {
	Node* x=y->left;
	Node* T2=x->right;
	x->right=y;
	y->left=T2;
	y->height=max(height(y->left), height(y->right)) + 1;
	x->height=max(height(x->left), height(x->right)) + 1;
	return x;
}
Node* leftRotate(Node* x) {
	Node* y=x->right;
	Node* T2=y->left;
	y->left=x;
	x->right=T2;
	x->height=max(height(x->left), height(x->right)) + 1;
	y->height=max(height(y->left), height(y->right)) + 1;
	return y;
}
int getBalance(Node* node) {
	if(node==NULL)
		return 0;
	return height(node->left) - height(node->right);
}
Node* insert(Node* node, int data) {
	if(node==NULL)
		return createNode(data);
	if(data < node->data)
		node->left=insert(node->left, data);
	else if(data > node->data)
		node->right=insert(node->right, data);
	else
		return node;
	node->height=1 + max(height(node->left), height(node->right));
	int balance=getBalance(node);
	if(balance > 1 && data < node->left->data)
		return rightRotate(node);
	if(balance < -1 && data > node->right->data)
		return leftRotate(node);
	if(balance > 1 && data > node->left->data) {
		node->left=leftRotate(node->left);
		return rightRotate(node);
	}
	if(balance < -1 && data < node->right->data) {
		node->right=rightRotate(node->right);
		return leftRotate(node);
	}
	return node;
}
void inorder(Node* root) {
	if(root != NULL) {
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
int main() {
	Node* root=NULL;
	root=insert(root, 35);
	root=insert(root, 55);
	root=insert(root, 40);
	root=insert(root, 23);
	root=insert(root, 33);
	root=insert(root, 62);
	root=insert(root, 76);
	root=insert(root, 20);
	root=insert(root, 27);
	cout<<"Inorder traversal: ";
	inorder(root);
	cout<<endl;
	return 0;
}




















