#include<bits/stdc++.h>
using namespace std;
 
void ex_vector(){
	vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(4);
    vector<pair <int,int>> vec;
    vec.emplace_back(9,8);
    for (auto i : v) {
        cout << i << " ";
    }
    cout<<endl;
    for(auto a:vec){
    	cout<< "("<<a.first<<","<<a.second<<")";
	}
	cout<<endl;
}
int main() {
    ex_vector();
    return 0;
}

