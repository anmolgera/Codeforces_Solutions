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
/*void dfs(int node, double prob, int level){
if(ans[node]==1){
  return ;
}
 
ans[node] =1;
 
int cnt =0;
 
for(int i =0; i<adj[node].size(); i++){
  
  if(ans[adj[node][i]]==-1){
  cnt++;
  }
}
 
for(int i =0; i<adj[node].size(); i++){
  
  if(ans[adj[node][i]]==-1){
   dfs(adj[node][i], prob/cnt, level+1);
  }
}
 
 if(cnt==0) output +=prob*(level);
 return;
 
 
 
 
 
 
 
}
*/
 
 
 void dfs(int node){
 
 if(vis[node]==1){
  return;
 }
 
  if(deg[node]!=2){
      ans =0;
    }  
 
vis[node] = 1;
for(int i =0; i<adj[node].size(); i++){
 
 if(vis[adj[node][i]]!=1){
    
   
    dfs(adj[node][i]);
 
 }
 
 
 
 
}
 
return ;
 
 
 
 }
 
 
 
int32_t main(){
anmol();
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
int sex =0;
 for(int i =1; i<=n; i++){
  
  if(vis[i]!=1){
  dfs(i);
  sex+=ans;
  ans =1;
 
  }
 
 
 
 }
 
 
cout<<sex<<endl;
 
//dfs(1,1.0,0);
//cout<<setprecision(10)<<output<<endl;
 
}
 
 
 
 
 
 