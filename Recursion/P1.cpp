#include<bits/stdc++.h>
using namespace std;
int ct=0;
void fun() {
    if (ct == 4) return;
    cout << ct << " ";
    ct++;
    fun();
}


int main(){
    fun();
    return 0;
}
