//	----------Constructor
//	1.	A special member function 
//	2.	Same name as class
//	3.	Automatically called When object is is created 
//	4.	No return type 
//	
//	----------Characteristic of Constructor
//	1.	Automatically invoked
//	2.	Can be overloaded
//	3.	Cannot return value 
//	4.	Declared public
//	----------Types of Constructor
//	1.	Default constructor
//	2.	Paramerterized constructor = Allow passing object during object creation
//	3.	Copy constructor = initialize a new object as a copy of another object
//	Q-----What happen if you don’t provided the constructor?
//		---Compiler provided the default constructor automatically
//		---This is called the default (implicit) constructor
//		---It takes no arguments and does nothing special (just create the object)
#include<iostream>
using namespace std;
//		class Student{
//			string name ;
//			int id;
//			public:
//				Student(){
//					name ="Sumit";
//					id=10;
//					cout<<"Constructor Student Called : "<<endl;
//				}
//				void display(){
//					cout<<"Name : "<<name<<endl;
//					cout<<"ID : "<<id<<endl;
//				}
//				
//		};
//		class Teacher{
//			string names;
//			int ssn;
//			public:
//				//------------parameterised constructor
//				Teacher(string i,int id){
//		            ssn = id;
//		            names =i;
//				}
//				//copy constructor
//				Teacher(Teacher &t1){
//					ssn = t1.ssn;
//					names = t1.names;
//					cout<<"Copy constructor envoked : "<<endl;
//				}
//				void display1(){
//					cout<<"Detail : "<<ssn<<" , "<<names<<endl;
//				}
//		};
//--------------------------------------------------------------------------------------------
//		class Human{
//			string name;
//			int age;
//			public: 
//			Human(string i="Gauri" , int j =13){
//				name =i;
//				age = j;
//			}
//			void show(){
//				cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl;
//			}
//		};
//------------------------------------------------------------------------------------------------
class Rectangle{
	int length;
	int breadth;
	public:
		Rectangle(int l){
			cout<<"Area of Square : "<<l*l<<endl;
		}
		Rectangle(int l, int b){
			cout<<"Area of Rectangle is : "<<l*b<<endl;
		}
};


int main(){
//		Student s;
//		s.display();
//		Teacher t("Aadscs",23);
//		t.display1();
//		Teacher t1 =t;
//		t1.display1();
//		  	Human h1("surya",21);
//			  h1.show();      
//		  	Human h2("Rahul",33);
//			  h2.show(); 
//			Human h3("Sana",26);
//			  h3.show();  
//			Human h4;
//			h4.show();   
   	Rectangle r(4);
   	Rectangle r1(6,11);
}
