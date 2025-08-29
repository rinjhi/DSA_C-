#include<bits/stdc++.h>
using namespace std;
//reverse a variable using two pointers using recursion
int fun(int i,int arr[],int r){
	if(i>=r){
		return 0;
	}
	swap(arr[i],arr[r]);
	fun(i+1,arr,r-1);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	fun(0,arr,n-1);
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
	return 0;
}
