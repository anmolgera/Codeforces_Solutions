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
 
      //swap(a[0],a[1]);
 
    /*  b[n-1] = a[1];
      b[n-2] = a[0];
 
 
    for(int i =1; i<n; i++){
 
        b[i-2] = a[i];
      }
 
    for(int i =0; i<n; i++){
 
        cout<<b[i]<<" ";
    
    }
  */
 
      reverse(v.begin(),v.end());
 
      for(int i =0; i<v.size(); i++){
 
 
        cout<<v[i]<<" ";
      }
  cout<<endl;
}
 
}
    
    