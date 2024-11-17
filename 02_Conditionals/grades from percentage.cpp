#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Student's score : ";
	cin>> n;
	if (n>90&&n<100){cout<<"The Student's grade is : A";
	}
else if (n>80&&n<89){cout<<"The Student's grade is : B";
	}
else if (n>70&&n<79){cout<<"The Student's grade is : C";
	}
else if (n>60&&n<69){cout<<"The Student's grade is : D";
	}
else if (n>60){cout<<"The Student's grade is : F";
	}
}