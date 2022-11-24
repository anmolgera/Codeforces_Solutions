#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
 int t;
 cin>>t;
 while(t--){
 
  int n;
  cin>>n;
  int x;
  cin>>x;
 
  bool flag = false;
  int a[n];
  int b[n];
  sort(a,a+n);
  sort(b,b+n);
  //reverse(b,b+n);
  for(int i =0; i<n; i++){
 
      cin>>a[i];
  }
 
  for(int i =0; i<n; i++){
 
      cin>>b[i];
  }
  
 
 
  for(int i =0; i<n; i++){
 
      if(a[i]+b[n-1-i]>x){
          flag = true;
          //cout<<a[i]+b[i]<<" ";
      }
  }
  
 
  if(flag){
      cout<<"No"<<endl;
  }
 
  else cout<<"Yes"<<endl;
 }
 
 
 
 
}