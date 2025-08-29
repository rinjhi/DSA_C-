#include<bits/stdc++.h>
using namespace std;
void fun(int i,int n){
	if(i<1) return;
	cout<<i<<"\n";
	fun(i-1,n);
}
int main(){
	int n;
	cin>>n;
	fun(n,n);
}
