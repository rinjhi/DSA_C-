#include<bits/stdc++.h>
using namespace std;
//reverse an arry using one pointer using recursion
int fun(int i,int arr[],int n){
	if(i>=n/2){
		return 0;
	}
	swap(arr[i],arr[n-i-1]);
	fun(i+1,arr,n);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	fun(0,arr,n);
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	return 0;
}
