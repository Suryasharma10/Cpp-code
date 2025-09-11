#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number of elements : ";
	cin>>n;
	int arr[n];
	cout<<"Enter Array : "<<endl;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}	
	int num;
	cout<<"Enter Element To Find : ";
	cin>>num;
	int mid;
	int start = 0;
	int end = n;
	for(int i =0;i<n/2;i++){
		mid = (start + end)/2;
		if(num == arr[mid]){
			cout<<"Element Found : "<<endl;
			break;
		}else if(num<mid){
			end =mid;
			start =0;
		}else{
			start =mid;
			end =n;
		}
	}
}
