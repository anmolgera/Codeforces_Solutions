#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> adj[200005];
vector<int> ans(200005,-1);
 
int32_t main(){
 
int t;
cin>>t;
 
while(t--){
 
int n,k;
cin>>n>>k;
 
 
string s;
cin>>s;
int sex =0;
 for(int i =0; i<k; i++){
 
    int ans =0;
    int cc =0;
    vector<int> v(26,0);
 
 
    for(int j =i; j<n; j+=k){
 
      v[s[j]-'a']++;
      cc++;
    }
 
    for (int j = k-i-1; j<n; j+=k){
 
 
      v[s[j]-'a']++;
      cc++;
    }
   int mx =0;
   for(int i =0; i<26; i++){
 
       mx = max(mx,v[i]);  
 
 
   }
 
   sex +=(cc-mx);
 
 }
 
cout<<sex/2<<endl;
 
 
}
 
 
 
 
 
 }