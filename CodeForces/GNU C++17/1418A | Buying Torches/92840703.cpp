#include <bits/stdc++.h>
using namespace std ;
# define int long long 
 
int32_t main(){
    int t ;
    cin >> t ;
    while(t--){
        
    int x,y,k;
    cin>>x>>y>>k;
 
    int sum = (y)*(k) + k-1;
    
    int ans =0;
    ans+=k;
 
    int count = (sum)/(x-1);
    if(sum%(x-1)){
        count++;
    }
    ans+=count;
    cout<<ans<<endl;
 
 
 
}}