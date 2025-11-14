#include<iostream>
using namespace std;
//	class parent{
//		public:
//		int id;
//		int age;
//		string name;
//	};
//	class parent2{
//		public:
//		int rank;
//	};
//	class child :public parent,public parent2{
//		public:
//			int rollno;
//		void getinfo(){
//			cout<<name<<endl;
//			cout<<"age : "<<age<<endl;
//			cout<<"roll no : "<<rollno<<endl;
//			cout<<"rank : "<<rank<<endl;
//		}
//	};
class A{
	public:
	void a1(){
		cout<<"Hi a"<<endl;
	}
};
class B{
	public:
	void a1(){
		cout<<"Hi b"<<endl;
	}
};
class C : public A,public B{
	public:
	
};
int main(){
//		child c;
//		c.name = "Aman";
//		c.age = 21;
//		c.rollno=78;
//		c.rank = 1;
//		c.getinfo();
	C obj;
	obj.a1();
};  
//---------benifits of inheritance------------
//code reuse
//less redundancy 
//Easier maintenance
//faster development
	




























