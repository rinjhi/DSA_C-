#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){
		char a='A';
		for(int j=1;j<=5-i+1;j++){
			cout<<a<<" ";
			a++;
		}
		cout<<endl;
	}
}
