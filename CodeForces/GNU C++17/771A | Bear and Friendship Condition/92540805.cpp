#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> adj[200005];
vector<int> vis(200005,0);
//vector<int> deg(200005,0);
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 void dfs(int node, int &vertices, int& edges){
 
 
    if(vis[node]){
        return;
    }
    //cout<<"sex"<<endl;
    vis[node] = 1;
    ++vertices;
    
    edges +=adj[node].size();
 
    for(int i : adj[node]){
   
       if(!vis[i]){
       
        dfs(i,vertices,edges);
       }
 
    }
 
 }
 
 
 
 
 int32_t main(){
   anmol();
   
   int n,m;
   cin>>n>>m;
 
    for(int i =0; i<m; i++){
 
        int u,v;
        cin>>u>>v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
  int vertices =0;
 int edges =0;
 for(int i =1; i<=n; i++){
  
 
  if(!vis[i]){
  vertices =0;
 edges =0;
 dfs(i,vertices,edges);
  if(edges != vertices*(vertices-1)){
  cout<<"NO"<<endl;
  return 0;
 
  
  }
 
 
 
 }
 
 //else continue;
 } 
 
 /*if(edges != vertices*(vertices-1)){
  cout<<"NO"<<endl;
  return 0;  
}*/
 cout<<"YES"<<endl;
 //return 0;
  
 }
 
 
 
 
 
 