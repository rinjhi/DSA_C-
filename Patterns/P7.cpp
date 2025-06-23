#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int a=0;a<=2;a++){
		for(int j=0;j<3-a-1;j++){
		  cout<<" ";
	}
		for(int j=0;j<2*a+1;j++){
			cout<<"*";
		}
			for(int j=0;j<2-a-1;j++){
		       cout<<" ";
			}
			cout<<"\n";
		}	
}
