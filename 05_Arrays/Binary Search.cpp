#include<iostream>
using namespace std;
int search(int a[],int min,int max,int num){
	if (min>max){
		return -1;
	}
	int mid;
	mid=(min+max)/2;
	if(a[mid]==num){
		return 11;
	}
	else if(a[mid]<num){
		return search(a,mid+1,max,num);
	}
	else if(a[mid]>num){
		return search(a,min,mid-1,num);
	}
	return -1;
}
int main()
{
	int b,num;
	cout<<"How many number you want to Enter : ";
	cin>>b;
	int a[b];
	cout<<"Enter the array elements : ";
	for(int i=0; i<b; i++){
		cin>>a[i];
	}
	cout<<"Enter the number you want to search : ";
	cin>>num;
	for(int j=0; j<b; j++){
		for(int i=0; i<b; i++){
			if(a[j]<a[i]){
				swap(a[j],a[i]);
			}
		}
	}
	int r;
	r=search(a,0,(b-1),num);
	if(r==-1){
		cout<<"Number not found!!";
	}
	else {
		cout<<"Number found!!";
	}
}