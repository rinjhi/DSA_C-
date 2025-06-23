#include<bits/stdc++.h>
using namespace std;
int main(){
	int age;
	cout<<"Enter the age of the candidate:";
	cin>>age;
	if(age<18){
		cout<<"Not eligible for Job";
	}
	else if(age>=18 && age<=54){
		cout<<"Eligilbe for Job";
	}
	else if(age>=55 && age<=57){
		cout<<"Eliglbe for jobs ,but retirement is soon";
	}
	else {
		cout<<"retirement time";
	}
	return 0;
}
