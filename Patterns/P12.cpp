#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	int s=2*(n-1);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		for(int j=1;j<=s;j++){
			cout<<" ";
		}		
		for(int j=i;j>=1;j--){
			cout<<j;
		}
		cout<<"\n";
		s-=2;
	}
}
