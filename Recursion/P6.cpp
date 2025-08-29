#include<bits/stdc++.h>
using namespace std;
void fun(int i,int n){
    if(i<1)return;
    
    fun(i-1,n);
    cout<<i<<"\n";
    
}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    fun(n,n);
}
