#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int i=0;i<4;i++){
		for(int j=0;j<4-i-1;j++){
			cout<<" ";
		}
		char ch='A';
		int br=(2*i+1)/2;
		for(int j=1;j<=2*i+1;j++){
			cout<<ch;
			if(j<=br)ch++;
			else ch--;
		}
		
		for(int j=0;j<4-i-1;j++){
			cout<<" ";
		}
		cout<<"\n";
	}
}
