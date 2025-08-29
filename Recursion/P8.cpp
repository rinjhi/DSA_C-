#include<bits\stdc++.h>
//sum of n number using parameter
using namespace std;
int fun(int i ,int sum){
	if(i<1){
		cout<<sum;
		return 1 ;
	}
	fun(i-1,sum+i);
}
int main(){
	int n;
	cin>>n;
	fun(n,0);
}
