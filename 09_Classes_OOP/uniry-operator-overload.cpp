#include<iostream>
using namespace std;
//class A{
//	private:
//		int n;
//	public:
//		A()
//		{
//			n=0;
//		}
//		void show()
//		{
//			cout<<n;
//		}
//		void operator ++()
//		{
//			n=n+1;
//		}
//};
//int main()
//{
//	A obj;
//	obj.show();
//	++obj;
//	obj.show();
//	
//}













class d{
	private:
		int feet;
		int inches;
	public:
		d()
		{
			feet=0;
			inches=0;
		}
		
		d(int f,int i)
		{
			feet=f;
			inches=i;
		}
		void display()
		{
			cout<<"Feet "<<feet <<"  	Inches "<<inches<<endl;
		}
		d operator -()
		{
			feet=-feet;
			inches=-inches;
			return d(feet,inches);
		}
};
int main()
{
	d d1(10,6);
	-d1;
	d1.display();

}














