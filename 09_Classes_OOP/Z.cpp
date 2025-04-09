//#include<iostream>
//using namespace std;
//class animal{
//	protected:
//		int age;
//		string name;
//	public:
//		void eat(){
//			bool e=0;
//			cout<<"Is animal eating 0 to no / 1 to yes : ";
//			cin>>e;
//			if(e==1){
//				cout<<"Animal is Eating.";
//			}
//			else {
//				cout<<"Animal is not Eating.";
//			}
//		}
//		void sleep(){
//			bool s;
//			cout<<"Is animal Sleeping 0 to no / 1 to yes : ";
//			cin>>s;
//			if(s==1){
//				cout<<"Animal is Sleeping.";
//			}
//			else {
//				cout<<"Animal is not Sleeping.";
//			}
//		}
//};
//class mammal:public animal{
//	public:
//	mammal(int a,string n){
//		age=a;
//		name=n;
//	}
//	void fur(){
//		bool f;
//		cout<<"Is Mammal Fur 0 to no / 1 to yes : ";
//		cin>>f;
//		if(f==1){
//			cout<<"Mammal is Fur.";
//		}
//		else {
//			cout<<"Mammal is not Fur.";
//		}
//	}
//	void nurse(){
//		cout<<"bowbow";
//	}
//};
//class bird:public animal{
//	public:
//	bird(int a,string n){
//		age=a;
//		name=n;
//	}
//	void fly(){
//		bool f;
//		cout<<"Is Bird can Fly 0 to no / 1 to yes : ";
//		cin>>f;
//		if(f==1){
//			cout<<"Bird can Fly.";
//		}
//		else {
//			cout<<"Bird cannot Fly.";
//		}
//	}
//	void chirp(){
//		cout<<"Chirp...Chirp";
//	}
//};
//class reptile:public animal{
//	public:
//	reptile(int a,string n){
//		age=a;
//		name=n;
//	}
//	void bloodtype(){
//		bool r;
//		cout<<"Is Reptile ColdBlooded 0 to no / 1 to yes : ";
//		cin>>r;
//		if(r==1){
//			cout<<"Reptile is ColdBlooded.";
//		}
//		else {
//			cout<<"Reptile is WarmBlooded.";
//		}
//	}
//	void slither(){
//		cout<<"Seeeee...Seeeee";
//	}
//};
//int main(){
//	mammal m1(3,"Dog");
//	bird b1(7,"Han");
//	reptile r1(10,"Snake");
//}


#include<iostream>
using namespace std;
class animal{
    protected:
    string name;
    int age;
    public:
  bool Eat;
  void EAT(){
  cout<<"Is animal Eating?";
  cout<<endl;    
  cin>>Eat;
      if(Eat==1){
          cout<<"Eating"<<endl;
      } else{
          cout<<"Not Eating"<<endl;
      }
  }
  void sleep(){
  	int s;
      cout<<"Is animal sleeping"<<endl;
      cin>>s;
      if(s=1){
          cout<<"Animal is sleeping"<<endl;
  } else{
      cout<<"Not sleeping"<<endl;
  }}
  };
  class mammal: public animal{
  	public:
      mammal(string n, int a){
          name=n;
         age=a; 
          }
          void hasFur(){
          	int fur;
              cout<<"Mammal has fur? 0/1"<<endl;
              cin>>fur;
              if(fur==1){
                  cout<<"Mammal has fur"<<endl;
              } else{
                  cout<<"Mammal does not have fur"<<endl;
              }
          }
          void nurse(){
       cout<<"Mammal is doing great!!"<<endl;
  }
  };
  
  class bird: public animal{
    public:
	  bird( string n, int a){
          name=n;
          age=a;
      }
      void canFly(){
      	int fly;
          cout<<"Bird can fly? 0/1"<<endl;
          cin>>fly;
          if(fly==1){
              cout<<"Bird can fly!!"<<endl;
          } else{
              cout<<"Bird cant fly :("<<endl;
          }
      }
      void chirp(){
          cout<<"Birds are tasty for lunch :)"<<endl;
      }
  };
  
  int main(){
      mammal cat1("Cat",4);
      bird duck("Moulard Duck",5);
      duck.canFly();
      duck.chirp();
  }
