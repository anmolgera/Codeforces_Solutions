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
     
     int n,x,y;
 
     cin>>n>>x>>y;
     
     int best = INT_MAX;
     vector<int> b;
 
     for(int start =1; start<=50; start++){
 
 
        for(int diff = 1; diff<=50; diff++){
 
            vector<int> v = gen(n,start,diff);
            bool hasx = false;
            bool hasy = false;
 
            for(int i :v){
 
                if(i==x){
                    hasx = true;
                }
 
                if(i==y){
 
                    hasy = true;
                }
            }
 
 
            if(hasx&& hasy && v[n-1]<best){
 
                best = v[n-1];
                b =v;
 
            }
        }
     }
 
 
   // int s = v[0];
 
    for(int i =0; i<b.size(); i++){
 
        cout<<b[i]<<" ";
    }
  cout<<endl;
 
      
    }
 
 
 
    }
    
    