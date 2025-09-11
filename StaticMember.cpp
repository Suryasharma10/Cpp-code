//	## Static Member
//	Static Member Data in C++
//	
//	- Declared inside a class with the keyword static.
//	- *Shared by all objects* of the class (only one copy exists).
//	- Memory is allocated once, not per object.
//	- Must be *defined outside the class* as well.
#include<iostream>
using namespace std;
class MyClass {
	static int count;
	public:
		MyClass(){
			count++;
		}
		static int getCount(){
			cout<<count;
		}
};
	int MyClass :: count =0;
int main(){

	MyClass c1;
	c1.getCount();
}
