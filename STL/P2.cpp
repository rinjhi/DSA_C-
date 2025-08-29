#include<bits/stdc++.h>
using namespace std;
int main (){
    unordered_set<int>s;
    for(int i=1;i<=10;i++){
        s.insert(i);
    }
    cout<<"elements present";
    for (auto it= s.begin();it!=s.end();it++){
        cout<<* it<<" ";
    }
    cout<<endl;
    int n=2;
    if(s.find(2)!=s.end()){
        cout<<n<<" is present in unorderd set"<<"\n";
    }
    s.erase(s.begin());
    cout<<"elements after deleting the first element:";
    for(auto it=s.begin();it !=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"the size is"<<""<<s.size()<<endl;
    
    if(s.empty()==false){
        cout<<"the unorderd set is not empty";
    }
    else{
        cout<<"the unorded set is empty";
    }
    cout<<endl;
    
    s.clear();
    cout<<"the size of the unorded list now is  "<<s.size();
    
    cout<<endl;
    
    if(s.empty()==false){
        cout<<"the unorderd set is not empty";
    }
    else{
        cout<<"the unorded set is empty";
    }
}
