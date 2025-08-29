#include<bits/stdc++.h>
using namespace std;
//print linearly from 1 to N
void fun(int i,int n){
	if(i>n)return;
	cout<<i<<"\n";
	fun(i+1,n);
}
int main(){
	int n;
	cin>>n;
	fun(1,n);
}
