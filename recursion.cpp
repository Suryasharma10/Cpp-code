#include<iostream>
#include<cmath>
using namespace std;
	void greet(){
		cout<<"hey"<<endl;
		//greet();
	}
	void desending(int a){
		cout<<a<<" ";
		if(a==1) return;
		desending(a-1);
	}
	void asending(int n,int i){
		cout<<i<<" ";//work
		if(i==n) return;
		i++;
		asending(n,i);//call
	}
	void asending_oneParameter(int n){
		if(n==0) return;
		 asending_oneParameter(n-1);//call
		 cout<<n<<" ";//work
	}
int main(){
	int i=1;
	//___________recursion : Function calling itself_________
	//___________replacement of for loop_________________
	greet();
	int n;
	cout<<"Enter n : ";
	cin>>n;
	desending(n);
	cout<<endl;	
	asending(n,i);
	cout<<endl;
	asending_oneParameter(n);
	
	
	
	
	
	
	
	
	
}
