#include<bits/stdc++.h>
//factorial using functional recursion
using namespace std;
int fact(int n){
	if(n==1)
	return 1;
	return n*fact(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<fact(n);
}
