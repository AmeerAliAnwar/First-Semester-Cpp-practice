//#include <iostream>
//using namespace std;
//int main()
//{
//	int a[2][2],b[2][2],c[2][2];
//	cout<<"Input your First Matrix : "<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cin>>a[i][j];
//		}
//	}
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cout<<a[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout<<endl;
//	cout<<"Input your Second Matrix : "<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cin>>b[i][j];
//		}
//	}
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cout<<b[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			c[i][j]=a[i][j]+b[i][j];
//		}
//	}
//	cout<<"The sum of First/Second : "<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cout<<c[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			c[i][j]=a[i][j]-b[i][j];
//		}
//	}
//	cout<<"The subtraction of First/Second : "<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cout<<c[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout<<endl;
//	int n;
//	cout<<"Enter a scalar number to Multiply by Matrix : ";
//	cin>>n;
//	cout<<"Enter the values of matrix : "<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cin>>c[i][j];
//		}
//	}
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			c[i][j]*=n;
//		}
//	}
//	cout<<"Matrix after multiplying it by a scaler number : "<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cout<<c[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout<<endl;
//	cout<<"Input your First Matrix : "<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cin>>a[i][j];
//		}
//	}
//	cout<<endl;
//	cout<<"Input your Second Matrix : "<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cin>>b[i][j];
//		}
//	}
//	c[0][0]=(a[0][0]*b[0][0])+(a[0][1]*b[1][0]);
//	c[0][1]=(a[0][0]*b[0][1])+(a[0][1]*b[1][1]);
//	c[1][0]=(a[1][0]*b[0][0])+(a[1][1]*b[1][0]);
//	c[1][1]=(a[1][0]*b[0][1])+(a[1][1]*b[1][1]);
//	for(int i=0;i<2; i++){
//		for(int j=0; j<2;j++){
//			cout<<c[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<endl;
//	cout<<"Transpose : "<<endl;
//	cout<<"Input your a Matrix : "<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cin>>a[i][j];
//		}
//	}
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			c[i][j]=a[j][i];
//		}
//	}
//	cout<<"Transpose : "<<endl;
//	for(int i=0;i<2; i++){
//		for(int j=0; j<2;j++){
//			cout<<c[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<endl;
//	cout<<"Determinent : "<<endl;
//	cout<<"Input your a Matrix : "<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cin>>a[i][j];
//		}
//	}
//	n=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
//	cout<<"Determinent = "<<n<<endl;
//	cout<<endl;
//	cout<<"Inverse : "<<endl;
//	float d[2][2];
//	cout<<"Input your a Matrix : "<<endl;
//	for (int i=0; i<2; i++){
//		for(int j=0; j<2; j++){
//			cin>>d[i][j];
//		}
//	}
//	float n1;
//	n1=(d[0][0]*d[1][1])-(d[0][1]*d[1][0]);
//	if(n1!=0){
//		d[0][0]=d[1][1]+d[0][0]-(d[1][1]=d[0][0]);
//		(d[1][0])*(-1);
//		(d[0][1])*(-1);
//		for(int i=0; i<2; i++){
//			for(int j=0; j<2; j++){
//				d[i][j]/=n1;
//			}
//		}
//		for(int i=0; i<2; i++){
//			for(int j=0; j<2; j++){
//				cout<<d[i][j]<<" ";
//			}
//			cout<<endl;
//		}
//		cout<<endl;
//	}
//	else{
//		cout<<"Inverse is not possible!!"<<endl;
//	}
//}


#include<iostream>
using namespace std;
int main(){
//	int a[3][3],b[3][3],c[3][3];
//	cout<<"Input your First Matrix : "<<endl;
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cin>>a[i][j];
//		}
//	}
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cout<<a[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout<<endl;
//	cout<<"Input your Second Matrix : "<<endl;
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cin>>b[i][j];
//		}
//	}
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cout<<b[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout<<endl;
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			c[i][j]=a[i][j]+b[i][j];
//		}
//	}
//	cout<<"The sum of First/Second : "<<endl;
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cout<<c[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout<<endl;
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			c[i][j]=a[i][j]-b[i][j];
//		}
//	}
//	cout<<"The subtraction of First/Second : "<<endl;
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cout<<c[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout<<endl;
//	int n;
//	cout<<"Enter a scalar number to Multiply by Matrix : ";
//	cin>>n;
//	cout<<"Enter the values of matrix : "<<endl;
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cin>>c[i][j];
//		}
//	}
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			c[i][j]*=n;
//		}
//	}
//	cout<<"Matrix after multiplying it by a scaler number : "<<endl;
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cout<<c[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout<<endl;
//	cout<<"Multiplying two matrices : "<<endl;
//	cout<<"Input your First Matrix : "<<endl;
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cin>>a[i][j];
//		}
//	}
//	cout<<endl;
//	cout<<"Input your Second Matrix : "<<endl;
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cin>>b[i][j];
//		}
//	}
//	c[0][0]=(a[0][0]*b[0][0])+(a[0][1]*b[1][0])+(a[0][2]*b[2][0]);
//	c[0][1]=(a[0][0]*b[0][1])+(a[0][1]*b[1][1])+(a[0][2]*b[2][1]);
//	c[0][2]=(a[0][0]*b[0][2])+(a[0][1]*b[1][2])+(a[0][2]*b[2][2]);
//	
//	c[1][0]=(a[1][0]*b[0][0])+(a[1][1]*b[1][0])+(a[1][2]*b[2][0]);
//	c[1][1]=(a[1][0]*b[0][1])+(a[1][1]*b[1][1])+(a[1][2]*b[2][1]);
//	c[1][2]=(a[1][0]*b[0][2])+(a[1][1]*b[1][2])+(a[1][2]*b[2][2]);
//	
//	c[2][0]=(a[2][0]*b[0][0])+(a[2][1]*b[1][0])+(a[2][2]*b[2][0]);
//	c[2][1]=(a[2][0]*b[0][1])+(a[2][1]*b[1][1])+(a[2][2]*b[2][1]);
//	c[2][2]=(a[2][0]*b[0][2])+(a[2][1]*b[1][2])+(a[2][2]*b[2][2]);
//	
//	for(int i=0;i<3; i++){
//		for(int j=0; j<3;j++){
//			cout<<c[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<endl;
//	cout<<"Transpose : "<<endl;
//	cout<<"Input your a Matrix : "<<endl;
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cin>>a[i][j];
//		}
//	}
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			c[i][j]=a[j][i];
//		}
//	}
//	cout<<"Transpose : "<<endl;
//	for(int i=0;i<3; i++){
//		for(int j=0; j<3;j++){
//			cout<<c[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<endl;
//	cout<<"Determinent : "<<endl;
//	cout<<"Input your a Matrix : "<<endl;
//	for (int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cin>>a[i][j];
//		}
//	}
//	n=(a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2])))-(a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2])))+(a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1])));
//	cout<<"Determinent = "<<n<<endl;
//	cout<<endl;
	cout<<"Inverse : "<<endl;
	float d[3][3],e[3][3];
	cout<<"Input your a Matrix : "<<endl;
	for (int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>d[i][j];
		}
	}
	float n1;
	n1=(d[0][0]*((d[1][1]*d[2][2])-(d[2][1]*d[1][2])))-(d[0][1]*((d[1][0]*d[2][2])-(d[2][0]*d[1][2])))+(d[0][2]*((d[1][0]*d[2][1])-(d[2][0]*d[1][1])));
	if(n1!=0){
		e[0][0]=d[1][1]*d[2][2]-d[1][2]*d[2][1];
		e[0][1]=-(d[1][0]*d[2][2]-d[1][2]*d[2][0]);
		e[0][2]=d[1][0]*d[2][1]-d[1][1]*d[2][0];
	
		e[1][0]=-(d[0][1]*d[2][2]-d[0][2]*d[2][1]);
		e[1][1]=d[0][0]*d[2][2]-d[0][2]*d[2][0];
		e[1][2]=-(d[0][0]*d[2][1]-d[0][1]*d[2][0]);

		e[2][0]=d[0][1]*d[1][2]-d[0][2]*d[1][1];
		e[2][1]=-(d[0][0]*d[1][2]-d[0][2]*d[1][0]);
		e[2][2]=d[0][0]*d[1][1]-d[0][1]*d[1][0];
		
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				d[i][j]=e[j][i];
			}
		}		
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				d[i][j]/=n1;
			}
		}
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cout<<d[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	else{
		cout<<"Inverse is not possible!!"<<endl;
	}
	cout<<"Ajoint : "<<endl;
	cout<<"Enter a Mtrix : ";
	for (int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>d[i][j];
		}
	}
	
		e[0][0]=d[1][1]*d[2][2]-d[1][2]*d[2][1];
		e[0][1]=-(d[1][0]*d[2][2]-d[1][2]*d[2][0]);
		e[0][2]=d[1][0]*d[2][1]-d[1][1]*d[2][0];
	
		e[1][0]=-(d[0][1]*d[2][2]-d[0][2]*d[2][1]);
		e[1][1]=d[0][0]*d[2][2]-d[0][2]*d[2][0];
		e[1][2]=-(d[0][0]*d[2][1]-d[0][1]*d[2][0]);

		e[2][0]=d[0][1]*d[1][2]-d[0][2]*d[1][1];
		e[2][1]=-(d[0][0]*d[1][2]-d[0][2]*d[1][0]);
		e[2][2]=d[0][0]*d[1][1]-d[0][1]*d[1][0];
		
}