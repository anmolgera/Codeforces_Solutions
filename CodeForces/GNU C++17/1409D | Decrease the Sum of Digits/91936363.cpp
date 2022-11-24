#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
#define int long long 
 
 
 
vector<int> gen(int n, int start,int  diff){
 vector<int> v (n);
 
  v[0] = start;
 
 for(int i = 1; i<n; i++){
 
    v[i] = v[i-1] + diff;
 }
 
return v;
}
 
int32_t main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 
    int t;
    cin>>t;
    while(t--){
     int n,s;
     cin>>n>>s;
//cout<<n<<endl;
 
     vector<int> v;
     int sex =0;
     while(n){
 
        sex +=n%10;
        v.push_back(n%10);
        n=n/10;
     }
 
     int ff=1;
     int carry =0;
     int ans =0;
     for(int i =0; i<v.size(); i++){
          
          if(carry+sex<=s){
            break;
          }
          ans+=ff*(10-carry-v[i]);
          //cout<<ans<<endl;
          carry =1;
          sex-=v[i];
          ff = ff*10;
 
     }
 
cout<<ans<<endl;
      
    }
 
 
 
    }
    
    