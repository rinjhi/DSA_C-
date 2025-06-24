#include<bits/stdc++.h>
using namespace std;
int main(){
for(int i=1;i<=5;i++){
	int s=0;
	if(i%2==0)s=0;
	else s=1;
	for(int j=1;j<=i;j++){
		cout<<s;
		s=1-s;
	}
	cout<<"\n";
}	
}
