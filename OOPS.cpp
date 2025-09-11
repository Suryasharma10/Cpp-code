#include<iostream>
#include<string>
using namespace std;
//__________OOPS can hold data and function that work on that data.
//-----------types of OOPS-------------------
//---Encapsulation
//---Inherritance
//---Abstraction
//---Polymorphism

//----------------Advantage  of OOPs-------------------
//	
//	1- OOPs provides a clear structure to program
//	2- Make the code easier to maintain , resuse ,and debug
//	3- helps keep the code DRY ( Dont Repeat yourself)
//	4- make it possible to create full resulable application with less code and shorter develepoment time .


	class myclass{
		public :
		int myNum;
		string mystring;	
	}; 
	void isPrime(int n){
		if(n==1||n==2){
			cout<<"Prime ";
		}
		else if(n%2==0 || n%3==0){
			cout<<"Not a prime";
		}else if(n<=0){
			cout<<"Not a prime";
		}else{
			cout<<"Prime";
		}
	}
	int main(){
		myclass myobj ;
		
		myobj.myNum =15;
		myobj.mystring = "surya ";
		
		cout << myobj.myNum << endl;
		cout << myobj.mystring << endl;
		
		isPrime(36);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
