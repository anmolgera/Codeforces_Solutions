#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
int func(int n){
 
  if(n==0 || n==1){
 
    return n;
  }
 
 
  return func(n/2) +n;
 
 
 
 
}
int32_t main(){
 
int t;
cin>>t;
 
while(t--){
  
  int n;
  cin>>n;
 
 
  int x = func(n);
  cout<<x<<endl;
 
 
}
 
 
 
 
 
}