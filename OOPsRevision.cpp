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
	return 0;
}
