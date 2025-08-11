#include<iostream>
using namespace std;
//	// _______pass by value only share data not memory
//	void swap(int x , int y){
//	    x=x+y;
//	    y=x-y;
//	    x=x-y;
//	}
	//________pass by reference share data as well same memory
	void swap(int& x , int& y){
	    x=x+y;
	    y=x-y;
	    x=x-y;
	}	
int main(){
	//_________Swap 2 number_____________
	int a=17, x=12;
	int b=56, y=23;
	int c;
	cout<<"a before Swaping "<<a<<endl;
	cout<<"b before Swaping "<<b<<endl;
	c=a;
	a=b;
	b=c;
	cout<<"a after Swaping : "<<a<<endl;
	cout<<"b after Swaping : "<<b<<endl;
	//______Without using extra variable_______
	cout<<x<<" "<<y<<endl;
    swap(x,y);
	cout<<x<<" "<<y<<endl;	
}
