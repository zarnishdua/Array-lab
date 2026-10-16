#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a size of array : ";
	cin>>n;
	int sum_even =0;
	int sum_odd=0;
	int arr[n];
	for(int i=0; i<=n; i++){
		cin>>arr[i];
	}
	for(int j=0; j<=n; j++){
	if(arr[j]%2==0)
	sum_even =sum_even+j;
	else
	 sum_odd=sum_odd+j;	
	}
	cout<<"The sum of even number is " <<sum_even<<endl;
	cout<<"The sum of odd number is " <<sum_odd;
	return 0;
}
