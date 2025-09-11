#include<iostream>
using namespace std;
	int sqr(int x){
		return x*x;
	}
	int multiple(int p,int q);//function prototype
int main(){
	int num;
	cout<<"Enter number : ";
	cin>>num;
	cout<<"Square of a number "<<num<<" is : "<<sqr(num)<<endl;
	int a, b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	cout<<"Multiple of a number is : "<<multiple(a,b);
}
	//function definition  
	multiple(int p, int q){ 
		return p*q;
	}
