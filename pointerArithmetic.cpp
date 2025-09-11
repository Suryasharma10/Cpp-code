#include<iostream>
using namespace std;
int main(){
//		int a=10;
//		int*p = &a;
//		cout<<p<<endl;	
//	//	p= p+10;
//	//	cout<<p<<endl;
//	//	p--;
//	//	cout<<p<<endl;
//	//	p++;
//	//	cout<<p<<endl;
//		//addition (p+n)
//		int n;
//		cout<<"enter n : ";
//		cin>>n;
//		cout<<p+n<<endl;
//		cout<<p+1<<endl;
//		cout<<p-1<<endl;
//		cout<<p+3<<endl;
//		cout<<p-2<<endl;
//	//(p1+p2)----x
//	//(p1*p2 or p1/p2)----x
//	
//	//diference b/w two pointer 
//	int arr[5]={1,2,3,4,5};
//	int*p1=&arr[4];
//	int*p2=&arr[1];
//	cout<<p1-p2<<endl;
	
//	//constant pointer

//	a>> -----------pointer to constant data
//	const int*p; // int const*p;
//	you cannot change the value via pointer 
//	but you can change the pointer to point somewhere else.

//	b>> -------constant pointer (pointer itself is constant)
//	int *const p = &a;
//	you cannot change the pointer (it always points to the same location)
//	but you can change the value at that location

//	c>> -----------constant pointer to constant data 
//	const int *const p=&a;
//	You cannot change the pointer or the value
	
	
//		int a=10, b=20;
//		int*x =&b;
//		cout<<x<<endl;
//	//	int* p=&a;
//	//	cout<<p<<endl;
//	//	*p=30;
//	//	p=&b;
//	//	cout<<"------------------------------"<<endl;
//	//---------------------------------------------------------------
//		const int*p=&a;
//		cout<<p<<endl;
//		p=&b;
//		cout<<p<<endl;
//	//----------------------------------------------------------------
//	//		int* const p =&a;
//	//		*p=50;
//	//		cout<<*p<<endl;
//		
//		const int* const p =&a;
//		cout<<*p<<endl;
//	//		*p =20;//error
//	//		cout<<p<<endl;
//	//		*p =&b;
//	//		cout<<p<<endl;

//		int arr[5]={11,87,8,76,56};
//		int *p =&arr[0];
//		int max = *p;
//		cout<<max<<endl;
//		for(int i=0;i<5;i++){
//			cout<<arr[i]<<" ";
//			if(max<arr[i]){
//				max =arr[i];
//			}
//		}
//		cout<<endl;
//		cout<<"Maximum Element : "<<max<<endl;

//	//    Generic pointer
//	A pointer of type void*.
//	it can store the address of any data type.
//	but since it doesnt know the data type,you must typecast it before defrenceing.	

// 	int a=13;
// 	float b =5.5;
// 	char c='X';
// 	void* p; //generic pointer
// 	  p= &a;
// 	 cout<<"Integer : "<<*(int*)p<<endl;
// 	  p= &b;
// 	 cout<<"float : "<<*(float*)p<<endl;
// 	  p= &c;
// 	 cout<<"Character : "<<*(char*)p<<endl;

//	//----------------reverse of an array-------
//		int arr[5]={1,2,3,4,5};
//		int * p1 =&arr[0];
//		int rev =*p1;
//		int * p2 =&arr[5];
//		int rev2 =*p2;
//		for(int i=0;i<5/2;i++){
//			rev = rev2;
//			cout<<rev2;
//			
//		}
//---------------Need of constructor
//1>>initialization of objects
//2>>Avoid manual settings of value
 
//	//----------------Types of construcctor 
//	--------------Default constructor
//	--------------parameterised constructor
//	--------------copy constructor
	
	
	
	
	
	
	
	
	
	
	
	
}
