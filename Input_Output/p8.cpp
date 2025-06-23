#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b){
	int c;
	c=a+b;
	return c; 
}
int main(){
	int a,b;
	cout<<"enter the value of a";
	cin>>a;
	cout<<"enter the value of b";
	cin>>b;
	int result=sum(a,b);
	cout<<result<<" is the sum of a and b"<< endl;
 	return 0;
}
