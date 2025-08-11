#include<iostream>
using namespace std;
int main(){
//    //___________________conditionals statements___________________

//    int x;
//        cout<<"Input Number To Check Whether Number is Even or Odd : ";
//        cin>>x;
//        if(x%2==0){
//   	        cout<<"The Number "<<x<<" is Even"<<endl;
//        }else{
//   	        cout<<"The Number "<<x<<" is Odd"<<endl;
//   	    }
//    //___________________Divisible By 5 or Not___________________

//    int y; 
//        cout<<"To Check Number Is Divisible By 5 Or Not : ";
//        cin>>y;
//        if(y%5==0){
//    	      cout<<"The Number "<<y<<" is Divisible By 5"<<endl;
//	      }else{
//		      cout<<"The Number "<<y<<" is not Divisible By 5"<<endl;
//	      }
//    //_______________absolute Value_____________________________

//    int n;
//    cout<<"Enter number to make it Absolute : ";
//        cin>>n;
//        if(n>=0){
//     	      cout<<n<<endl;
//	      }else{
//	          cout<<-n<<endl;
//	      }
//    //____________Cost Price and Selling Price_______________________

//    int cp;
//    int sp;
//    cout<<"Enter Cost Price : ";
//    cin>>cp;
//    cout<<"Enter Selling Price : ";
//    cin>>sp;
//    if(sp>cp){
//    	cout<<"profit"<<endl;
//    	cout<<"The Profit is : "<<sp-cp<<"Rupees"<<endl;
//	}
//	else if(sp<cp){
//		cout<<"loss"<<endl;
//		cout<<"The Loss is : "<<cp-sp<<" Rupees"<<endl;
//	}
//	else{
//		cout<<"no profit no loss"<<endl;
//	}
//   //_________________rectangle Dimensions ____________________

//     int length;
//     int height;
//     cout<<"enter length"<<endl;
//     cin>>length;
//     cout<<"enter height"<<endl;
//     cin>>height;
//     float area;
//     float perimeter;
//     area = length*height;
//     perimeter = 2*(length + height);
//     if(area>perimeter){
//     	cout<<"Area of a Rectangle is greater : "<<area<<endl;
//	 }
//	 else{
//	 	cout<<"Perimeter of a Rectangle is greater : "<<perimeter<<endl;
//	 }
//    //_________________find length of a number_____________________

//    int x;
//      cout<<"Check number length : ";
//      cin>>x;
//      if(x>99 && x<1000){
//      	cout<<"x is a three digit number"<<endl;
//	  }
//	  else{
//	  	cout<<"x is not a three digit number"<<endl;
//	  }
//    //______Check number divided by 5 or 3, not divisible by 15___________

//	  int y;
//	  cout<<"Check number is divisible by 5 or 3 but not divisible by 15 : ";
//      cin>>y;
//      if(y%5==0 || y%3==0){
//      	if(y%15!=0){
//      		cout<<"Divisible by 5 or 3 but not divisible by 15"<<endl;
//		  }
//		  else{
//			cout<<"Divisible by 5 or 3 and also divisible by 15"<<endl;  	
//		  }
//	  }
//	  else{
//	  	cout<<"Not Divisible by 5 or 3"<<endl;
//	  }
//      
//   //_________check sides of a triangle_______________

//   int a,b,c;
//   cout<<"input sides of a triangle : ";
//   cin>>a>>b>>c;
//   if((a+b)>c &&(b+c)>a &&(c+a)>b){
//   	cout<<"Traingle"<<endl;
//   }
//   else{
//   	cout<<"Not a Traingle"<<endl;
//   }
//    //_________check Greatest of number_____________________

//   int a,b,c;
//   cout<<"input three number : ";
//   cin>>a>>b>>c;
//   if(a>b && a>c){
//   	cout<<"A is Greater"<<endl;
//   	if(b>c){
//   		cout<<"C is smallest : ";
//   		cout<<c<<endl;
//	   }
//	   else{
//	   	cout<<"B is smallest : ";
//	   	cout<<b<<endl;
//	   }
//   }
//   else if(b>a && b>c){
//   	cout<<"B is Greater"<<endl;
//   	if(a>c){
//   		cout<<"C is smallest : ";
//   		cout<<c<<endl;
//	   }
//	   else{
//	   	cout<<"A is smallest : ";
//	   	cout<<a<<endl;
//	   }
//   }
//   else{
//   	cout<<"C is Greater"<<endl;
//   	if(a>b){
//   		cout<<"B is smallest : ";
//   		cout<<b<<endl;
//	   }
//	   else{
//	   	cout<<"A is smallest : ";
//	   	cout<<a<<endl;
//	   }
//   }
//    //_____________grades of student__________________________

//    int marks;
//    cout<<"enter marks"<<endl;
//    cin>>marks;
//    if(marks>81 && marks<=100){
//    	cout<<"Very Good"<<endl;
//	}
//	else if(marks>61 && marks<=80){
//    	cout<<" Good"<<endl;
//	}
//	else if(marks>41 && marks<=60){
//    	cout<<"Average"<<endl;
//	}
//	else if (marks>0 && marks<=40){
//		cout<<"Fail"<<endl;
//	}
//	else{
//		cout<<"You have Given Wrong Input"<<endl;
//	}

//  //______________check point lies on which quadrent_________________

//   int x;
//	cout<<"enter x : ";
//	cin>>x;
//	int y;
//	cout<<"enter y : ";
//	cin>>y;
//	if(x>=0 && y>=0){
//		cout<<"1 quadrent "<<endl;
//		if(x==y && x!=0 && y!=0){
//			cout<<"Straight Line"<<endl;
//		}
//		else if(x==y && x==0 && y==0){
//			cout<<"Origin(0,0)"<<endl;
//		}
//	}
//	else if(x<0 && y>=0){
//		cout<<"2 quadrent "<<endl;
//	}
//	else if(x<0 && y<0){
//		cout<<"3 quadrent "<<endl;
//	}
//	else if(x>0 && y<0){
//		cout<<"4 quadrent "<<endl;
//	}
	
//  //_________________Ternary operator_____________________
    // (condition) ? if true : if false;
    
//    int n;
//    cout<<"Enter n : ";
//    cin>>n;
//    (n%2==0)? cout<<"even":cout<<"odd"<<endl;
      
//  //________________Switch Statement________________________

//    int a=19,b=6;
//    char n;
//    cout<<"Enter operator : ";
//    cin>>n;
//    switch(n)
//    {
//    	case'+' : cout<<a+b;
//    	          break;
//    	case'-' : cout<<a-b;
//    	          break;
//    	case'*' : cout<<a*b;
//    	          break;
//    	case'/' : cout<<(float)a/b;
//    	          break;
//    	case'%' : cout<<a%b;
//    	          break;
//        default : cout<<"Invalid Operator"<<endl;
//	}     
}
