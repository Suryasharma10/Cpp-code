#include<iostream>
using namespace std;
int fact(int x){
	int f =1;
	for(int i=1;i<=x;i++){ // i is a local variable
		f*=i;
	}
	return f;
}
int main(){
	int n,r;//global variable
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Enter r : ";
	cin>>r;
	int a = fact(n);
	int b = fact(r);
	int c = fact(n-r);
	//___________combination_____________
	cout<<a/(b*c)<<endl;
	//___________permutation_____________
	cout<<a/c<<endl;
}
