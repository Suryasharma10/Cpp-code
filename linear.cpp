#include<iostream>
using namespace std;
linear(int n){
	int arr[n];
	cout<<"Enter "<<n<<" Array Elements : "<<endl;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cout<<"Enter Element to Search : ";
	cin>>x;
	for(int i=0;i<n;i++){
		if(x == arr[i]){
			cout<<"Element Found at index : "<<i<<endl;
		}
	}
}

int main(){
	int n;
	cout<<"Enter Size of an Array : ";
	cin>>n; 
	linear(n);
	
}
