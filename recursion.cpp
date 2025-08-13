#include<iostream>
#include<cmath>
using namespace std;
	//	void greet(){
	//		cout<<"hey"<<endl;
	//		//greet();
	//	}
	//	void desending(int a){
	//		cout<<a<<" ";
	//		if(a==1) return;
	//		desending(a-1);
	//	}
	//	void asending(int n,int i){
	//		cout<<i<<" ";//work
	//		if(i==n) return;
	//		i++;
	//		asending(n,i);//call
	//	}
	//	void asending_oneParameter(int n){
	//		if(n==0) return;
	//		 asending_oneParameter(n-1);//call
	//		 cout<<n<<" ";//work
	//	}
	//	void sum_parameterised(int n,int sum){
	//		if(n<1){
	//			cout<<"Sum : "<<sum<<endl;
	//			return;
	//		}
	//		sum_parameterised(n-1,sum+n);
	//	}
	//	int sum_returnType(int n){
	//		if(n==1) return 1;
	//		if(n==0) return 0;
	//		return n + sum_returnType(n-1);
	//	}
	//	void fact_parameteriesed(int n, int fact){
	//		if(n<1||n==0){
	//		   cout<<"Factorial : "<<fact<<endl;
	//		   return;	
	//		}
	//		 fact_parameteriesed(n-1,fact*n);
	//		
	//	}
	//	int fact_returnType(int n){
	//		if(n==1||n==0) return 1;
	//		return n*fact_returnType(n-1);
	//	}
	int power(int a ,int b ){
	      if(b==1) return a;  
		return a*power(a,b-1);
	}
int main(){
	int i=1;
	//___________recursion : Function calling itself_________
	//___________replacement of for loop_________________
	//greet();
	//	int n;
	//	cout<<"Enter n : ";
	//	cin>>n;
	//	desending(n);
	//	cout<<endl;	
	//	asending(n,i);
	//	cout<<endl;
	//	asending_oneParameter(n);
	//	//___________print sum from 1 to n _____________________
	//	sum_parameterised(n,0);
	//	cout<<"Sum : "<<sum_returnType(n)<<endl;
	//	//___________print fact from 1 to n_____________________
	//	fact_parameteriesed(n,1);
	//	cout<<"Factorial : "<<fact_returnType(n)<<endl;
	int a;
	cout<<"Enter number a : ";
	cin>>a;
	int b;
	cout<<"Enter power b : ";
	cin>>b;
	cout<<"Power : "<<power(a,b)<<endl;	
}
