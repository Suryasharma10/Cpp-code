#include<iostream>
#include<vector>
using namespace std;
int main(){
		// vector<int> vec ={1,2,3};
		// cout<<vec[0]<<endl;
		// vector<int> vec1 (4,0);
		// cout<<vec1[1];
		// cout<<vec1[2];
		// cout<<vec1[3]<<endl;
		// vector<char> name = {'a','s','d','d','w','g'};
		// for(char val : name){
		// 	cout<<val<<endl;
		// }
	// vector <int> num ;
	// cout<<"before Size = "<<num.size()<<endl;
	// num.push_back(51);
	// num.push_back(32);
	// num.push_back(1);
	// num.push_back(92);
	// num.push_back(2);
	// cout<<"after push back Size = "<<num.size()<<endl;
	// for(int val : num){
	// 	cout<<val<<" ";
	// }
	// cout<<endl;
	// num.pop_back();
	// cout<<"after pop back Size = "<<num.size()<<endl;
	// for(int val : num){
	// 	cout<<val<<" ";
	// }
	// cout<<"\nFront value = "<<num.front();
	// cout<<"\nBack value = "<<num.back();
	// cout<<"\nvalue at 1 index = "<<num.at(1)<<endl; 
	// cout<<num.capacity()<<endl;
	// vector<int> v={1,2,1,3,2,4,3,5,4,6,5,7};
	// v.clear();
	// cout<<"Size = "<<v.size();
	vector<int> v1={1,2,3,4,5,2,3,4,1};
	int ans;
	for(int i=0;i<v1.size();i++){
		ans = ans ^ v1[i];
	}
	cout<<ans;
	return 0;
}
