#include<iostream>
using namespace std;
	//    int fibo(int n){
	//	    if(n==1 | n==2) return 1;
	//	    return fibo(n-1) + fibo(n-2);
	//    }
    int power(int a , int b){
    	if(b==1) return a;
    	if(b%2!=0){
    		return a*power(a,b-1);	
		}else{
			return power(a,b/2)*power(a,b/2);
		}
	}
int main(){
	//	//_______calculate Fibonacci number___________
	//	// 0,1,1,2,3,5,8,13,21,34,55,89,.....
	//	int n;
	//	cout<<"Enter n : ";
	//	cin>>n;
	//	cout<<"Fibonacci number is : "<<fibo(n)<<endl;
	//_____calculate power function(lagorithmic)________
	int a,b;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter power of a : ";
	cin>>b;
	cout<<power(a,b)<<endl;
}
