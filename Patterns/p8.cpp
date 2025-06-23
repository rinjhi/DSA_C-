#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int a=0;a<=4;a++){
		for(int j=0;j<a;j++){
		  cout<<" ";
	}
		for(int j=0;j<2*4-(2*a+1);j++){
			cout<<"*";
		}
			for(int j=0;j<a;j++){
		       cout<<" ";
			}
			cout<<"\n";
		}	
}
