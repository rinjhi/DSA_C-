#include<bits\stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"enter a number to check whether it is prime or not";
	cin>>n;
	int ct=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			ct++;
		}
	}
	if(ct==2){
		cout<<"IT is a prime number";
	}
	else{
		cout<<"it is not a prime number";
	}
}
