#include<iostream>
using namespace std;
int main(){
// ____________________________Break Statement________________________


// break = to get out of the loop.
// _______________________highest Factor rather than n itself__________

//___________Simple way__________________
//  int n;
//  cout<<"enter number : ";
//  cin>>n;
//  int f=1;
//  for(int i = 1; i<n; i++){
//	  if(n%i==0){
//		  f=i;
// 	  }
//  }
//  cout<<f<<" ";
// ________________________Using Break__________________________
//    int n;
//    cout<<"enter number : ";
//    cin>>n;
//    for(int i =n/2; i>=1;i--){
//    	if(n%i==0){
//    		cout<<i<<" ";
//    		break;
//		}
//	}

//____________composite or not_____________________
//if n has extra factors except 1 and n ;otherwise n is a prime number 
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i = 2;i<=n/2;i++){
//     	if(n%i==0){
//     		cout<<n<<" is a composite number "<<endl;
//     		break;
//		 }
//		 else{
//		 	cout<<n<<" is a prime number "<<endl;
//		 	break;
//		 }
//	 }
//	 if(n==1)cout<<" Neither prime nor composite ";

// _____________________Continue Statement________________________
// if you want to skip a round 
//    for(int i = 1; i<=100; i++){
//    	if(i%2==0) continue;
//    	cout<<i<<" ";
//	}

//	for(int i = 1; i<20; i++){
//    	if(i==3||i==18||i==7) continue;
//    	cout<<i<<" ";
//	}
}
