#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
#define int long long 
 
int32_t main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 
    int t;
    cin>>t;
    while(t--){
     
      int a,b;
      cin>>a>>b;
 
      int m = abs(a-b);
 
      int x = m/10;
 
      if(m%10){
        x++;
      }
 
      cout<<x<<endl;
    
 
    }
 
 
 
    }
    
    