#include<iostream>
#include<string>
using namespace std;
int main(){
//	//______________+-*/%________________________
//   int a;
//   int b;
//   cout<<"Enter A : ";	
//   cin>>a;
//   cout<<"Enter B : ";
//   cin>>b;
//   cout<<"A + B = "<<a+b<<endl;
//   cout<<"A - B = "<<a-b<<endl;
//   cout<<"A * B = "<<a*b<<endl;
//   cout<<"A / B = "<<a/b<<endl;
//   cout<<"A % B = "<<a%b<<endl;
//   
//  //_____________________Swaping Variables____________
//   int x= 32;
//   int y= 45;
//   int z;
//   cout<<"x : "<<x<<" ";
//   cout<<"y : "<<y<<endl;
//   
//   z=x;
//   x=y;
//   y=z;
//   cout<<"x : "<<x<<" ";
//   cout<<"y : "<<y<<endl;
   
//  //---------------------Write a program to check number is divisible by 5 and 3.
//    int n;
//    cout<<"Enter Number : ";
//    cin>>n;
//    if(n%3==0 && n%5==0){
//    	cout<<"divisible";
//	}else{
//		cout<<"not divisible";
//	}
//   //----------------------------take 3 input from user check largest
//   int x;
//   int y; 
//   int z;
//   cout<<"Enter Number X , Y , Z : "<<endl;
//   cin>>x>>y>>z;
//   if(x>y && x>z){
//   	if(x==y){
//   		cout<<"x and y are equal";
//	   }else if(x==z){
//	   	cout<<" x and z are equal";
//	   }
//   	cout<<"x is greater";
//   }else if(y>x && y>z){
//   	   	if(z==y){
//   		cout<<"z and y are equal";
//   	}
//   	cout<<"y is greater";
//   }else{
//   	cout<<"z is greater";
//   }
//  }
   //--------------------count number of digits
//   int num;
//   cin>>num;
//    int count =0;
//   do{
//   	num =num/10;
//   	count++;
//   }while(num!=0);
//   cout<<count<<endl;

// _________Fibonacci Series_____________
//	int a =0;
//	int b =1;
//	int c;
//	int n;
//	cout<<"Enter number of terms"<<endl;
//	cin>>n;
//	cout<<a<<" "<<b<<" ";
//	for(int i=1;i<=n-2;i++){
//		c = a+b;
//		a=b;
//		b=c;
//		cout<<c<<" ";
//	}
//	int num;
// ____________sum of digits______________
//	cout<<"Enter number : ";
//	cin>>num;
//	int temp;
//	int sum=0;
//	while(num!=0){
//		temp =num%10;
//		sum= sum+ temp;
//		num/=10;
//	}
//	cout<<sum;

//__________________even odd_______________
//	int choice;
//   do{
//		int num1;
//		cout<<"Enter number : ";
//		cin>>num1;
//		if(num1%2==0){
//			cout<<"even"<<endl;
//		}else{
//			cout<<"odd"<<endl;
//		}
//		cout<<"Do you want to continue ? 1/0 : ";
//		cin>>choice;
//    }while (choice!=0);

// //_______________prime or not______________
//     int num ;
// 	cout<<"Enter number : ";
// 	cin>>num;
// 	if(num==1 || num==2){
// 		cout<<"prime";
// 	}else if(num<=0){
// 		cout<<" not a prime number";
// 	}else if((num%2)!=0 && (num%3)!=0){
// 		cout<<" prime";
// 	}else{
// 		cout<<"not a prime";
//     }

////________________strong number__________________
//   int z;
//   cout<<"Enter number : ";
//   cin>>z;
//   int input =z;
//   int temp;
//   int sum=0;
//   while(z!=0){
//   	temp = z%10;
//   	int fact =1;
//   	for(int i=1;i<=temp;i++){
//   		fact *=i;
//	   }
//	   sum = fact +sum;
//	   z/=10;
//   }
//   cout<<sum<<endl;
//   if(input==sum){
//   	cout<<"Strong number ";
//   }else{
//   	cout<<"Not a strong number ";
//   }
   
//------------------perfect number______________
//	int n;
//	cin>>n;
//	int length =0;
//	int sum=0;
//	for(int i=1;i<=n/2;i++){
//		if(n%i==0){
//			sum=sum+i;
//		}
//	}
//	if(sum==n){
//		cout<<"Perfect ";
//	}else{
//		cout<<"Not a perfect ";
//	}
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
///////////////////////////////////////////// ___________armstrong number______________
////    int num ;
////	cout<<"Enter number : ";
////	cin>>num;
////	int temp= num;
////	int count =0;
////	int rev;
////	int ans =1;
////	int sum=0;
////	while(temp!=0){
////		temp = temp /10;
////		count++;
////	}
////		for(int y=1;y<=count;y++){
////			rev =num %10;
////		for(int i=1;i<=count;i++){
////			ans=ans*rev;
////		   }
////		   sum=sum+ans;
////		num/=10; 
////		}
////   cout<<sum;
//   
}
