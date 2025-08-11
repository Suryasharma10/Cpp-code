#include<iostream>
using namespace std;
int fact(int x){
	int f=1;
	for (int i=1;i<=x;i++){
		f*=i;
	}
	return f;
}
int combination(int i,int k){
	      int a=fact(i);
		  int b=fact(k);
		  int c=fact(i-k);
		  return a/(b*c);
}
int pascalTraingle(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n-i;j++){
			cout<<"   ";
		}
		for(int k=0;k<=i;k++){
             cout<<combination(i,k)<<"     ";
		}
		cout<<endl;
	}	
	
	
}
int main(){
//	                       1
//	                     1   1
//	                   1   2   1
//	                 1   3   3   1
//	               1   4   6   4   1
//	             1   5  10  10   5   1
      pascalTraingle();
}
