#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int on;
	cout<<"Press 1 (ON) or 0 (OFF) the CALCULATOR : ";
	do{	cin>>on;
	if (on==0){break;
	}
	float x,y;
	const float pi=3.14;
	int c,aa,bb;
	cout<<"\n                                            CALCULATOR MENU : \n\n";
	cout<<"1.  ADDITION   \n2.  SUBSTRACTION  \n3.  MULTIPLICATION  \n4.  DIVISION  \n";
	cout<<"5.  POWER  \n6.  PERCENTAGE  \n7.  SQUARE \n8.  SQUARE ROOT \n9.  Area of Circle \n10. Are of Rectangle \n11. Area of Triangle \n";
	cout<<"12. ASCII Code \n13. Circumference of Circle \n14. Temperature conversion from degree Celcius to Fahrenheit \n15. Time in seconds \n";
	cout<<"16. Remainder \n17. Sine of Angle \n18. Cosine \n19. Tangent of Angle(tan) \n20. Natural Logrithum (Base = e) \n21. Logrithum with Base 10 \n";
	cout<<"22. Degree to Radian \n23. Radian to Degree \n";
	cout<<"\n                             Enter the number with operation for Calculation :  ";
	cin>>c;
	switch (c){
	case 1:
		cout <<"ADDITION : \nEnter first number : ";
		cin>>x;
		cout <<"Enter second number : ";
		cin>>y;	
		cout<<"The result of ADDITION : "<<x+y;
		cout<<endl;
	break;
	case 2:
		cout <<"SUBSTRACTION : \nEnter first number : ";
		cin>>x;
		cout <<"Enter second number : ";
		cin>>y;
		cout<<"The result of substraction : "<<x-y;
		cout<<endl;
	break;
	case 3:
		cout <<"MULTIPLICATION : \nEnter first number : ";
		cin>>x;
		cout <<"Enter second number : ";
		cin>>y;		
		cout<<"The result of multiplication : "<<x*y;
		cout<<endl;
	break;
	case 4:
		cout <<"DIVISION : \nEnter first number : ";
		cin>>x;
		cout <<"Enter second number : ";
		cin>>y;		
		cout<<"The result of division : "<<x/y;
		cout<<endl;
	break;	
	case 5:
		cout <<"TAKING POWER : \nEnter base number : ";
		cin>>x;
		cout <<"Enter power number : ";
		cin>>y;
		cout <<"The result for power is : ";
		cout<<pow(x,y);
		cout<<endl;
	break;   
	case 6:
		cout <<"PERCENATGE : \nEnter numinater number : ";
		cin>>x;
		cout <<"Enter denominater number : ";
		cin>>y;
		cout<<"The result for PERCENTAGE is : "<<(x*100)/y;
		cout<<endl;
	break;
	case 7:
		cout <<"SQUARE : \nEnter the number for it's square : ";
		cin>>x;
		cout<<"The result of square is : " <<x*x;
		cout<<endl;
	break;
	case 8:
		cout <<"SQUARE ROOT : \nEnter the number for it's square root : ";
		cin>>x;
		cout <<"square root is : "<<sqrt(x);
		cout<<endl;
	break;
	case 9:
		cout <<"Area of Circle : \n";
		cout<<"Enter radius of Circle (cm) : ";
		float r;
		cin>>r;
		cout <<"Area of Circle (cm square) : ";
		cout<<pi*r*r;
		cout<<endl;
	break;	
	case 10:
		cout<<"Area of RECTANGLE: \n";
		cout <<"Enter the length of RECTANGLE (cm) : ";
		cin>>x;
		cout<<"Enter the wirth of RECTANGLE (cm) : ";
		cin>>y;
		cout<<"The AREA of RECTANGLE (cm square) = "<<x*y;
		cout<<endl;
	break;
	case 11:
		cout<<"Area of Triangle : \n";
		float a,d;
		cout << "Enter the length first side (cm) : ";
		cin>>a;
		cout<<"Enter the length second side (cm) : ";
		cin>>x;
		cout<<"Enter the length third side (cm) : ";
		cin>>y;
		d=(a+x+y)/2;
		cout<<"AREA of Triangle (cm square) : ";
		cout<<sqrt(d*(d-a)*(d-x)*(d-y));
		cout<<endl;
	break;
	case 12:
		cout<<"ASCII Code : \n";
		char ch;
		cout<<"Enter your letter to find its ASCII code : ";
	    cin>>ch;
	    x=ch;
	    cout<<"The ASCII code for your Letter is : (";
	    cout<<ch;
	    cout<<" = ";
    	cout<<x;
    	cout<<") ";
    	cout<<endl;
    break; 
    case 13:
    	cout<<"Circumference of Circle : \n";
		cout<<"Enter the value of RADIUS : ";	
		cin>>x;
		cout<<"The Circumference of cirle = ";
		cout<<2*pi*x;
		cout<<endl;
	break;
	case 14:
		cout<<"TEMPERATURE Converter : \n";
		x=1.8;
		cout<<"Enter the TEMPERATURE in degree Celsius : ";
		cin>>y;
		cout<<"( "<<y<<" ) degree Celcius is equal to ( ";
		cout<<x*y + 32 <<" ) degrees Fahrenheit";
		cout<<endl;
	break;	
	case 15:
		cout<<"Time in Seconds : \n";
		cout<<"Enter Hours = ";
		cin>>x;
		cout<<"Enter mintues = ";
		cin>>y;
		cout <<"Enter seconds = ";
		float sec;
		cin>>sec;
		cout <<"Time = ";
		cout<<x*3600+y*60+sec;
		cout <<" seconds";
		cout<<endl;
	break;
	case 16:
		cout<<"Remainder : \n";
		cout <<"Enter the Base number : ";
		cin>>aa;
		cout <<"Enter the Diviser number : ";
		cin>>bb;
		cout <<"The Remainder = "<<aa%bb;
		cout<<endl;
	break;
	case 17:
		cout<<"Sine of angle : \n";
		cout <<"Enter the angle to find it's sine : ";
		cin>>x;
		cout <<"The sine of "<<x<<" = "<<sin(x);
		cout <<endl;
	break;
	case 18:
		cout<<"Cosine of angle : \n";
		cout <<"Enter the angle to find it's cosine : ";
		cin>>x;
		cout <<"The cosine of "<<x<<" = "<<cos(x);
		cout <<endl;
	break;
	case 19:
		cout <<"Tangent of angle : \n";
		cout <<"Enter the angle to find it's tan : ";
		cin>>x;
		cout <<"The tan of "<<x<<" = "<<tan(x);
		cout <<endl;
	break;
	case 20:
		cout<<"Natural Logrithum : \n";
		cout <<"Enter the value for it's Natural Logrithum : ";
		cin>>x;
		cout <<"The Natural Logrithum of "<<x<<" = "<<log(x);
		cout <<endl;
	break;
	case 21:
		cout<<"Logrithum with base 10 : \n";
		cout <<"Enter the value for it's Logrithum with base 10 : ";
		cin>>x;
		cout <<"The Natural of "<<x<<" = "<<log10(x);
		cout <<endl;
	break;
	case 22:
		cout<<"Degree to Radian : \n";
		cout <<"Enter the angle in Degree : ";
		cin>>x;
		cout<<"The angle "<<x<<" in Radian = ";
		cout <<(x*pi)/180;
		cout <<endl;
	break;
	case 23:
		cout <<"Radian to Degree : \n";
		cout <<"Enter the angle in Radian : ";
		cin>>x;
		cout<<"The angle "<<x<<" in Degree = ";
		cout <<(x*180)/pi;
		cout <<endl;
	break;
	}
	cout<<"Press (1) to Reuse and 0 to (OFF) : ";
	if (on!=1) {cout<<"CALCULATOR TURNED OFF !!";}
	}while (on==1);
	if (on!=1){cout<<"CALCULATOR TURNED OFF !!";
	}
else {cout<<"Invalid input !!";
}
	return 0;	
}
