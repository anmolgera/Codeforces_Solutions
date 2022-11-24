#include <bits/stdc++.h>
using namespace std ;
# define int long long 
#define inf 2000000
 
int32_t main(){
 
 
int t;
cin>>t;
 
while(t--){
 
  int n;
  cin>>n;
 
  int a[n];
 
  for(int i =0; i<n; i++){
   
   cin>>a[i];
 
  }
 
 
 int mx =0;
  for(int i =1; i<n; i++){
 
          int d = a[i]-a[i-1];
          if(d>=0){
            continue;
          }
 
          d = -d;
          int ans =1;
          int k =1;
          while(2*k<=d){
           k =2*k;
           ans++;
 
 
          }
 
      mx = max(mx,ans);
      a[i] = a[i-1];
 
  
 
 
 
 
  }
 
 cout<<mx<<endl;
 
 
}
 
 
 
}