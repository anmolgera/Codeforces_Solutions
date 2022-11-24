 
#include <bits/stdc++.h>
using namespace std;
 
#define int long long 
 
int32_t main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int sex;
      cin>>sex;
      vector<int> v;
 
 
      for(int i =0; i<n; i++){
 
 
        int x;
        cin>>x;
 
        v.push_back(x);
      }
 
 
      sort(v.begin(),v.end());
 
      int ans =0;
      int count =0;
 
      for(int i =0; i<n; i++){
 
        if(v[i]!=sex){
          
          ans++;
          count+=(v[i]-sex);
 
 
        }
 
      }
 
      if(ans==0){
 
        cout<<0<<endl;
      }
 
      else if(count ==0 || ans !=n){
 
        cout<<1<<endl;
      }
 
    
     else cout<<2<<endl;  
       
    }
    
    
}