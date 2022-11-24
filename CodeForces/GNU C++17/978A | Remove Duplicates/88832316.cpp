#include <iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
 
int32_t main()
{
   int n;
   cin>>n;
   
   int a[n];
 
   for(int i =0; i<n; i++){
 
    cin>>a[i];
   }
 
   set<int> s;
 
   stack<int> st;
   for(int i =n-1; i>=0; i--){
    
     if(s.find(a[i])==s.end()){
    st.push(a[i]);
      
     }
    s.insert(a[i]);
    
   
 
   }
 
 
cout<<s.size()<<endl;
while(!st.empty()){
 
 
  int x = st.top();
  st.pop();
 
  cout<<x<<" ";
}
cout<<endl;
}
 
 
 
 
 
 
   
 
 
 
 
 
 
 
  
 
  
  
 
   