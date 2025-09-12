#include<iostream>
#include<string>
using namespace std;
class Teacher{
	private :
		double salary;
		
	public :
	//properties //attributes
	string name;
	string dept;
	string subject;
	
	Teacher(){
		cout<<"Hi I am a constructor"<<endl;
	}
	//---------parameterised constructor 
	Teacher(string name,string dept){
		this->name = name;
		this->dept = dept;
		cout<<"Hi I am parameterised constructor"<<endl;
	}
	Teacher(Teacher &suObj){
		this->name = suObj.name;
		this->dept = suObj.dept;
		cout<<"Copy Constructor Created "<<endl;
	}
	//--------getInfo-------
	void getInfo(){
		cout<<"Teacher name : "<<name<<endl;
		cout<<"Teacher Dept : "<<dept<<endl;
	}
	
	//methods  //member function
	void change_dept(string newdept){
		dept = newdept;
	}
	//setter
	void setSalary(double s){
		salary = s;
	}
	//getter
	double getSalary(){
		return salary;
	}
};
int main(){
	Teacher t1;
	t1.name ="Surya";
	t1.dept ="CSE";
	t1.subject ="C++";
	//t1.salary =1200000;
	t1.setSalary(200000);
	cout<<t1.name<<endl;
	//cout<<t1.salary<<endl; //error due to private salary
	
	cout<<t1.getSalary()<<endl;
	Teacher t2("Ram","Electrical");
	Teacher t3(t2);
	t2.getInfo();
	t3.getInfo();
	return 0;
}
