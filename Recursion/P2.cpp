#include<bits/stdc++.h>
using namespace std;
int ct=0;
void fun() {
    if (ct == 5) return;
    cout  << "SANA ";
    ct++;
    fun();
}


int main(){
    fun();
    return 0;
}
