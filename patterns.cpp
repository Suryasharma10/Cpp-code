#include<iostream>
#include<cmath>
using namespace std;
int main(){
//	//__________rectangle____________
//	for(int i=1;i<=3;i++){
//		for(int j=1;j<=5;j++){
//			cout<<"*"<<" ";
//		}
//		cout<<endl;
//	}
//	//________input user, Solid Square______
//	int m;
//	cin>>m;
//		for(int i=1;i<=m;i++){
//		for(int j=1;j<=m;j++){
//			//cout<<char(j + 64)<<" ";
//			//cout<<i<<" ";
//			//cout<<(char)(j+96)<<" ";
//			cout<<char(i+64)<<" ";
//		}
//		cout<<endl;
//	}
//	
//	//____________Right angle traingle_____________
//	int a=1;
//	for(int i=1;i<=7;i++){
//		for(int j =1;j<=i;j++){
//			//cout<<"* ";
//			//cout<<j<<" ";
//			//cout<<char(j+96)<<" ";
//			//cout<<i<<" ";
//			//if(i%2!=0){
//				//cout<<j <<" ";
//			//}
//			//else{
//				//cout<<(char)(j+64)<<" ";
//			//}
//			cout<<a<<" ";
//			a++;
//		}
//		cout<<endl;
//	}
//	//__________opposite of RAT_________
//	for(int i=1;i<=9;i++){
//		for(int j=9;j>=i;j--){
//			//cout<<"* ";
//			cout<<char(j+121)<<" ";
//		}
//		cout<<endl;
//	}
//  	//__________2 opposite of RAT_________
//  	int n;
//  	cin>>n;
//		for(int i=1;i<=n;i++){
//		for(int j=1;j<=n-i+1;j++){
//			//cout<<n-j+1<<" ";
//			//cout<<1+(j-1)*2<<" ";
//			//cout<<2*j-1<<" ";
//		}
//		cout<<endl;
//	}
//  //___________RAT__________
//	for(int i=1;i<=7;i++){
//		for(int j =1;j<=i;j++){
//			if((i+j)%2==0) cout<<1<<" ";
//			else cout<<0<<" ";
////         if(i%2!=0){
////         	if(j%2!=0){
////         		cout<<1<<" ";
////			 }else{ 
////			 cout<<0<<" ";
////			 }
////		 }else{
////		 	if(j%2==0){
////		 		cout<<1<<" ";
////			 }else{
////			 	cout<<0<<" ";
////			 }
////		 }
//		}
//		cout<<endl;
//	}
	
//	//________PLUS________________
//	int n;
//	cin>>n;
//	int mid = n/2+1;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			if(i==mid || j==mid) cout<<" *";
//			else cout<<"  ";
//		}
//		cout<<endl;
//	}
//  //______hollow square_________
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//		if(i==1||i==n||j==1||j==n){
//			cout<<" *";
//		}else{
//			cout<<"  ";
//		}
//		}
//		cout<<endl;
//	}
//  //_________X___________________
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			if(i==j||(j==n-i+1 && i)) cout<<" *";
//			
//			else cout<<"  ";
//		}
//		cout<<endl;
//	}
//  //________Rohmbus____________	
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n-i+1;j++){
//			cout<<"  ";
//		}
//		int a = 1;
//		for(int k=1;k<=n;k++){
//			//cout<<" *";
//			cout<<a<<" ";
//			a++;
//		}
//		cout<<endl;
//	}
//  //_______RAT opposite______________
//	int n;
//	cin>>n;
//	int mid = n/2+1;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n-i+1;j++){
//			cout<<"  ";
//		}
//		int a = 1;
//		for(int k=1;k<=i;k++){
//			cout<<" *";
//			a++;
//		}
//		cout<<endl;
//	}


//  //________________________pyramid_________________________
//     for(int i=1;i<=7;i++){
//     	for(int j=1;j<=7-i;j++){
//     		cout<<"  ";
//		 }
//		 for(int k=1;k<=i;k++){
//		 	cout<<"* ";
//		 }
//		 for(int k=1;k<=i-1;k++){
//		 	cout<<"* ";
//		 }
//		 cout<<endl;
//	 }
//	  for(int i=1;i<=7;i++){
//     	for(int j=1;j<=i;j++){
//     		cout<<"  ";
//		 }
//		 for(int k=1;k<=7-i;k++){
//		 	cout<<"* ";
//		 }
//		 for(int l=1;l<7-i;l++){
//		 	cout<<"* ";
//		 }
//		 cout<<endl;
//	 }	
//    int r=19;
//      for(int i=0;i<=r*2;i++){
//      	for(int j=0;j<=r*2;j++){
//      		float distance = sqrt((i-r)*(i-r)+(j-r)*(j-r));
//      		if(distance > r-0.5 && distance < r+0.5){
//      			cout<<"*";
//			  }else{
//			  	cout<<" ";
//			  }
//		  }
//		  cout<<endl;
//	  }
}
