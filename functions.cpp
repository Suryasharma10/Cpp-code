#include<iostream>
using namespace std;
void greet(){
	cout<<"Good Morning"<<endl;
	return;
}
int usa(){
	cout<<"You are in USA"<<endl;
}
void india(){
	cout<<"You are in India "<<endl;
	usa();          //calling function must be above from the main function
    cout<<"Thanks for Comming "<<endl;
	return; // end of a function
	cout<<"You are in India "<<endl;
}
int sum(){
	int a=17, b=32;
    return a+b;
}
int main(){
	cout<<"Hey !"<<endl;
	india();
	greet();
	cout<<sum()<<endl;	
	return 0;
}
