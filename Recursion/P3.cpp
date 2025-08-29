#include<bits/stdc++.h>
using namespace std;
void fun(int i,int n){
    if(i>n)return;
    cout<<"sana"<<"\n";
    fun(i+1,n);
}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    fun(1,n);
}
