#include <iostream>
using namespace std;
int main ()
{
	int x ;
	cout <<"Enter your marks out of 100 : ";
	cin >>x;
if (x<100 && x>0)	
{
	if (x>90){cout<<"Your grade is A+.";
	}
	else if (x>80){cout<<"Your grade is A.";
	}
	else if (x>70){cout<<"Your grade is B.";
	}
	else if (x>60){cout<<"Your grade is C.";
	}
	else if (x>=50){cout<<"Your grade is D.";
	}
	else if (x<50){cout<<"Your grade is F.";
	}
}
else {cout<<"INVALID MARKS!!";
}
	return 0;
}