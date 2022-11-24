#include <iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
 
int32_t main()
{
  int n;
  cin>>n;
 
  while(n--){
  string s;
  cin>>s;
 
  int count =0;
  vector<int>v;
  for(int i =0; i<s.length(); i++){
 
      if(s[i]=='1'){
 
        v.push_back(i);
      }
 
    }
 
 
  for(int i =1; i<v.size(); i++){
 
    count+=(v[i]-v[i-1]-1);
  }
 
 
  
 cout<<count<<endl;
 
}
}
 
 
 
 
 
 
   
 
 
 
 
 
 
 
  
 
  
  
 
   