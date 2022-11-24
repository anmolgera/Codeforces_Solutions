#include<bits/stdc++.h>
using namespace std;
 #define int long long
 
int32_t main(){
 
 
int t;
cin>>t;
 
while(t--){
 
  int n;
  cin>>n;
 
  int a[n];
  int b[n];
 
  vector<int> v(n,0);
 
  for(int i =0; i<n; i++){
 
    //cin>>a[i];
    cin>>v[i];
 
 
      }
 
 
  int sum =0;
  int prefix =0;
  for(int i =0; i<n; i++){
     
     prefix+=v[i];
     
     if(prefix<0){
      
          sum+=abs(prefix);
          prefix =0;
 
     }
 
 
 
  }
 
 
 
  cout<<sum<<endl;
}
 
}
    
    