#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> adj[200005];
vector<int> vis(200005,0);
vector<int> deg(200005,0);
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 double output =0;
 int ans =1;
 
  
void dfs(int node){
 
  if(vis[node]){
    return;
  }
 
    vis[node] =1;
 
    if(deg[node]!=2){
      ans =0;
    }
 
 for(auto i : adj[node]){
 
  if(!vis[i]){
 
    dfs(i);
  }
 }
return;
}
 
 
 int32_t main(){
 
  int n,m;
  cin>>n>>m;
 
 
  for(int i =1; i<=m; i++){
    
    int u,v;
    cin>>u>>v;
 
    adj[u].push_back(v);
    adj[v].push_back(u);
    deg[u]++;
    deg[v]++;
 
 
 
  }
 
 int s =0;
 for(int i =1; i<=n; i++){
 
 
  if(!vis[i]){
 
    dfs(i);
    s+=ans;
    ans =1;
  }
 }
 
 
  cout<<s<<endl;
 
 
 }
 
 
 
 
 
 