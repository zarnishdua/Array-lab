#include<iostream>
using namespace std;
int main (){
	int n;
	cout<<"Enter the size of array :";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
	cin>>arr[i];	
	}
	bool sorted =true;
	for(int i=0; i<n-1; i++){
	  if(arr[i]>arr[i+1]){
		sorted=false;
		break;
    }
	}
	if(sorted==true)
	cout<<"Arrays is sorted ";
	else
	cout<<"Array is not sorted ";
	return 0;
}
