#include <iostream>
#include <set>
#include <map>
#include<bits/stdc++.h>
 
using namespace std;
 
 
#define int long long 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
 
    while(t--){
       
       int n;
       cin>>n;
      
 
      if(n==2){
 
        cout<<2<<endl;
        cout<<1<<" "<<2<<endl;
      }
 
      else {
 
            
            cout<<2<<endl;
            cout<<n<<" "<<n-2<<" "<<endl;
            cout<<n-1<<" "<<n-1<<" "<<endl;
             
            for(int i = n-3; i>=1; i--){
 
                cout<<i<<" "<<i+2<<" "<<endl;
            }
 
 
 
 
      }
 
 
    
 
 
    }
 
}
 
    
 
 
 
 