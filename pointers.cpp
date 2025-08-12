#include<iostream>
using namespace std;
	//Swaping of two numbers using pointer and function	
	void swap(int* a,int* b){
		int temp = *a;
		*a = *b;
		*b = temp;
	}
	
int main(){
//	int x=3;//memory located and data store
//	int y=7;//memory located and data store
//	
//	cout<<&x<<endl;//print address of memory x
//	cout<<&y<<endl;//print address of memory y
//	
//	// pointers to store address of data types 
//	int* p;// memory p stores address of another memory location
//	int* ptr;// memory ptr stores address of another memory location
//	
//	p = &x;//p stores address of x
//	ptr = &y;//ptr stores address of y
//	
//	cout<<p<<endl;//display address of x
//	cout<<ptr<<endl;//display address of y
//	
//	// Access the value of variable(x,y) whose address is in the pointer(p,ptr) using dereference operator.
//	cout<<*p<<endl;//display value of x
//	cout<<*ptr<<endl;//display value of y
//	
//	//udating Dereference value
//	*ptr=23;
//	cout<<y<<endl;
//	cout<<*ptr<<endl;
	
	//Swaping of two numbers using pointer
	int a=15;
	int b=67;
	cout<<a<<"  "<<b<<endl;
	int* p=&a;
	int* q=&b;
	//*p=a+b;
	//*q=a-b;
	//*p=a-b;
	//cout<<*p<<"  "<<*q<<endl;
	
    swap(&a,&b);//pass by reference
    cout<<*p<<"  "<<*q<<endl;		
}
