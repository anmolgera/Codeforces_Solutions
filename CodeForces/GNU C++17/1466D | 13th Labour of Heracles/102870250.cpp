#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
#define int long long 
 
int mod(int x){
    if(x>=0){
        return x;
    }
    
    return -x;
}
 
 
vector<int> countDigit(int n)
{
    vector<int>ret;
    while (n != 0) 
    {
        ret.push_back(n%10);
        n = n / 10;
     
    }
    return ret;
}
 
bool check(int mid,set<int>s,int n){
    for(auto it=s.begin();it!=s.end();it++){
        int val = *it;
        if(mid%val!=0 && val<=mid){
            return true;
        }
    }
    
    return false;
    
    
    
    
}
 
bool ispallidrome(string s){
 
 
    int i =0;
    int j= s.length();
    while(i<=j){
        if(s[i++]!=s[j--]){
            return false;
        }
    }
    return true;
}
 
 
void solve(){
 
int n;
cin>>n;
int a[n];
int ans =0;
for(int i =0; i<n; i++){
    cin>>a[i];
    ans+=a[i];
}
int deg[n] ={};
for(int i =0; i<n-1; i++){
    int u,v;
    cin>>u>>v;
    u--;
    v--;
    deg[u]++;
    deg[v]++;
}
 
vector<int> res ={};
//int ans =0;
for(int i =0; i<n; i++){
    for(int j =0; j<deg[i]-1; j++){
         //ans+=a[i];
        res.push_back(a[i]);
    }
}
 
sort(res.begin(),res.end());
reverse(res.begin(),res.end());
cout<<ans<<" ";
for(int i =0; i<res.size();  i++){
    cout<<ans+res[i]<<" ";
    ans = ans+res[i];
}
cout<<endl;
 
}
 
 
 
 
int32_t main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
   cin>>t;
    while(t){
        t--;
      solve();
     
    }
    
    
}