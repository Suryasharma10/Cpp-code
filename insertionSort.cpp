#include <iostream>
using namespace std;
	void InsertionSort(int arr[],int n){
		int key,j=0;
		 for (int i = 1; i < n; i++) {
        int key = arr[i];   // element to insert
        int j;

        // Use a for loop instead of while
        for (j = i - 1; j >= 0 && arr[j] > key; j--) {
            arr[j + 1] = arr[j];  // shift element right
        }

        // Insert key at the correct position
        arr[j + 1] = key;
    }
	}
int main() {
    int arr[]={23,43,55,24,77,87,531,12};
    int n = sizeof(arr)/4;
    cout<<"Before Sorting : "<<endl;
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
	InsertionSort(arr,n);
	cout<<"After Sorting : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
    return 0;
}
