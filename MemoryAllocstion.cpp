//	Memory Allocation
//	
//	Static allocation: Memory is fixed at compile time (e.g., arrays int arr[10];).
//	
//	Dynamic allocation: Memory is allocated at runtime using new and released using delete.
//	
//	This is important when:
//	
//	You don’t know the size of data in advance.
//	
//	You want efficient memory usage.
//
//	new Operator
//	
//	Allocates memory from the heap at runtime.
//	
//	Returns a pointer to the allocated memory.
//	
//	
//	pointer = new data_type;
//	pointer = new data_type[size];   // for arrays
//	
//	
//	------------------------------------------------------
//	Destructor
//	
//	Introduction
//	
//	Destructor is a special member function in C++.
//	
//	It is used to destroy objects and release resources.
//	
//	Automatically called when the object goes out of scope.
//	
//	Denoted with tilde (~) symbol before class name.
//	
//	
//	Syntax:
//	
//	~ClassName() {
//	    // cleanup code
//	}
//	
//	
//	---
//	
//	Slide 3: Destructor (continued)
//	
//	Key Characteristics
//	
//	Name is same as class name, but prefixed with ~.
//	
//	No return type
//	
//	No parameters allowed.
//	
//	Only one destructor per class (cannot be overloaded).
//	
//	Called in reverse order of constructor calls.
//	
//	
//	Use Cases
//	
//	Releasing dynamically allocated memory (delete).
//	
//	Closing files and database connections.
//	
//	Freeing resources like sockets, threads, handles, etc.
//	
//	Preventing memory leaks in programs.
#include<iostream>
using namespace std;
//class Student{
//	string name;
//	public:
//	Student(string n){
//		name =n;
//		cout<<"Constructor Called For : "<<name<<endl;
//	}
//	~Student(){
//		cout<<"Destructor called for : "<<name<<endl;
//	}
//};
class Number{
	int *value;
	public:
		Number(int v){
			*value = v;
			cout<<"Construvtor called value "<<*value<<endl;
		}
		Number(const Number &n){
			value = new int;
			value = (n.value);
			cout<<"Copy construvtor called value : "<<*value<<endl;
		}
		void Display(){
			cout<<"Value : "<<*value<<endl;
		}
		~Number(){
			cout<<"Distructor Called Realeasing Memory For value : "<<*value<<endl;
			delete value;
		}
};

int main(){
//		int *p =new int;//allocate memory for 1 int
//		int *p1 =new int(5);
//		*p =10;
//		cout<<" P : "<<*p<<endl;
//		cout<<" *P1 : "<<*p1<<endl;
//		delete p;//free memory
//		int *p2 = new int(20);
//		delete p2;
//		//p2 = nullptr;
//		cout<<*p2<<endl;
//----------------------------------------------------------
//			Student s1("Aman");
//			Student s2("Rahul");
//			cout<<"Inside main Function"<<endl;
      Number n1(10);
      Number n2 =n1;
      n1.Display();
      n2.Display();












}
