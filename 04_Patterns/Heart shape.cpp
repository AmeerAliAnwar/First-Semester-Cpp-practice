#include <iostream>
using namespace std;
int  main ()
{
	for (int a=3; a>=1; a-=2){
	    for (int b=1; b<a-1; b++){
	    cout <<" ";}
	    for (int c=5; c>=a; c--){
	        
	        cout <<"*";
	    }if (a==1){cout<<"*";}
	    for (int b=1; b<=a+1; b++){
	    cout <<" ";}
	    if(a==3){cout<<"  ";}
	    if (a==1||a==3){
	        cout<<"  ";
	    }
	    for (int c=5; c>=a; c--){
	        
	        cout <<"*";
	    }
	    if (a==1){cout<<"*";
	    }
	    cout<<endl;
	}
	for(int a=1; a<=7; a++){
		for(int b=1; b<a; b++){cout<<" ";
		}
		for (int c=7; c>=a; c--){
		    if (a==1&&c==1||a==2&&c==3||a==5&&c==5){
		        cout<<" / ";
		    }
		    else if(a==3&&c==4||a==4&&c==4||a==6&&c==6){
		        cout<<" \\ ";
		    }
		    else {cout <<"*";
		    }
		}
		for (int d=7; d>=a; d--){
		    if (a==7&&d==7){
		        cout<<" \\ ";
		    }
		    else {cout <<"*";
		    }
		}cout<<endl;
	}
	return 0;
}