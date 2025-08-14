#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
//	int arr[5];
//	cout<<"Enter Array : ";
//	for(int i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<5;i++){
//	    cout<<arr[i]<<" ";	
//	}
//	arr[0]=76;
//	cout<<endl;
//	for(int i=0;i<5;i++){
//	    cout<<arr[i]<<" ";	
//	}
//__________________________________________________
//    int y[3]= {1,2,3};
//    int x[]={2,12,5,7,1,3,11,15};
//    int n = sizeof(x)/4;
//	for(int i=0;i<n;i++){
//		cout<<x[i]*2<<" ";
//	}	
//	cout<<endl;
//	int sum = 0;
//	int product = 1;
//	for(int i=n-1;i>=0;i--){
//		sum+=x[i];
//		product*=x[i];
//		cout<<x[i]*2<<" ";
//	}
//	cout<<endl<<"sum : "<<sum<<endl;
//	cout<<"product : "<<product<<endl;
//	//int b[size];//error
//	int size=10;
//	int b[size];//no error
//	//________Array is pass by reference in function__________
//	// _______because function takes address of array_________
//    int n;
//    cout<<"Enter size of Array : ";
//    cin>>n;
//    cout<<"Enter Array : ";
//    int arr[n];
//    for(int i=0;i<n;i++){
//    	cin>>arr[i];
//	}
//	int max_=0;
//	for(int i=0;i<n;i++){
//	//		if(max_>arr[i]);
//	//		else{
//	//			max_=arr[i];
//	//		}
//		max_ = max(max_,arr[i]);
//	}
//	cout<<"Maximum number is : "<<max_<<endl;
//	int min_=arr[0];
//	for(int i=0;i<n;i++){
//	//		if(min_<arr[i]);
//	//		else{
//	//			min_=arr[i];
//	//		}
//	    min_ = min(min_,arr[i]);
//	}
//	cout<<"Minimum number is : "<<min_<<endl;
//	cout<<INT_MIN<<endl;
//	cout<<INT_MAX<<endl;
//  //_________print Square of a number_______
//    int n;
//    cout<<"Enter n : ";
//    cin>>n;
//	int sqr[n];
//	int arr[n];
//	for(int i=1;i<=n;i++){
//		sqr[i]=i*i;
//		arr[i]=i;
//	}
//	for(int i=1;i<=n;i++){
//		cout<<sqr[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=1;i<=n;i++){
//		if(arr[i]%2==0){
//			cout<<arr[i]+10<<" ";
//		}else{
//			cout<<arr[i]*2<<" ";
//		}
//	}
//   //________count no of elements greater than x___________
//   int count = 0;
//   int x= 34;
//   int even_sum=0;
//   int odd_sum=0;
//   int arr[10]={2,64,7,89,5,34,7,9,97,100};
//   cout<<"Given Array : ";
//   for(int i=0;i<10;i++){
//   	cout<<arr[i]<<" ";
//   	if(arr[i]>x){
//   		count++;
//	   }else;
//   }
//   cout<<endl;
//   cout<<"Number of Element Greater than "<<x<<"  is : "<<count<<endl;
//   for(int i=0;i<10;i++){
//   	if(i%2==0){
//   		even_sum+=arr[i];
//	   }else{
//	   	odd_sum+=arr[i];
//	   }
//   }
//   cout<<"Even Index Sum : "<<even_sum<<endl;
//   cout<<"Odd Index Sum : "<<odd_sum<<endl;
//   cout<<"Difference Between Them is : "<<abs(even_sum - odd_sum)<<endl;//absolute value
//
//	//__________Find Second Largest Element In an Array________________
//    int n;
//    cout<<"Enter n : ";
//    cin>>n;
//    int x;
//    int temp;
//	int arr[n];	
//	int max = INT_MIN;
//	cout<<"Enter Elements : ";
//	for(int i=0;i<n;i++){
//		cin>>x;
//		arr[i]=x;
//	}
//	for(int i=0;i<n;i++){
//	   cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=0;i<n;i++){//{1,42,35,64,24,23,6,46,22,8,3}
//	   if(arr[i]>max){
//	   	temp = max;
//	   	max =arr[i];
//	   }else if(arr[i]>temp){
//	   	temp = arr[i];
//	   }
//	}
//	cout<<"Second Largest Number is : "<<temp<<endl;	
//    //_______Copy array into another array in reverse manner ____________
//	int a[5]={1,2,3,4,5};
//	int b[5];
//	for(int i=0;i<5;i++){
//		b[i]=a[4-i];
//	}
//	cout<<"a : ";
//	for(int i=0;i<5;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	cout<<"b : ";	
//	for(int i=0;i<5;i++){
//		cout<<b[i]<<" ";
//	}
//
//    //__________reverse an Array without using another array____________________
//    int a[]={1,2,3,4,5,6,7,8,9,10};
//    int n = sizeof(a)/4;
//    int temp;
//    for(int i=0;i<n;i++){
//        if(i<n/2){
//        temp =a[i];
//    	a[i]=a[n-1-i];
//    	a[n-1-i]=temp;
//		}
//	}
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//	}
//    //____________check palindrome_____________________
//    int a[]={1,2,3,4,5,4,3,2,1};
//    int n = sizeof(a)/4;
//    for(int i=0;i<n;i++){
//        if(a[i]==a[n-1-i]){
//        	if(i==n-1){
//        	cout<<"Given Array is Palindrome "<<endl;
//        	break;
//			}
//        	
//		}else{
//			cout<<"Not a Palindrome ";
//			break;
//		}
//	}
}
