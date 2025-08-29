#include<bits/stdc++.h>

using namespace std;

int main() {
  vector<int>v;
  for(int i=0;i<10;i++){
      v.push_back(i);
  }
  cout<<"The elements in the vector are ";
  for(auto it=v.begin();it!=v.end();it++){
      cout<<* it<<" ";
  }
  cout<<endl;
  cout<<"the front of a vector :"<<v.front()<<endl;
  cout<<"The back of a vector :"<<v.back()<<endl;
  cout<<"The size of the vector :"<< v.size()<<endl;
  cout <<"Deleting the  last element :"<<v[v.size()-1]<<endl;
  v.pop_back();
  cout<<"Printing the vector after deleting the  last element ";
  for (int i = 0; i < v.size(); i++)
  cout << v[i] << " ";
  cout<<endl;
  cout<<"Insert at thr begining";
  v.insert(v.begin(),1);
  cout<<endl;
  cout<<"The first element is: "<<v[0]<<endl;
  cout<<"Erasing the first element";
  v.erase(v.begin());
  cout<<endl;
  if(v.empty()){
    cout<<"Vector is empty\n";
  }
   else{ 
    cout<<"Vector is not empty\n";
   }
    v.clear();
    cout<<"\nThe size of the vector is now: "<<v.size();
  }

