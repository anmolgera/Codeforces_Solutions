#include<bits/stdc++.h>
using namespace std;
#define int long long
 
vector<int> g[200005];
vector<int> vis(200005,0);
vector<int> used(200005,0);
int a[200005];
int count =0;
int m;
//int n;
int ans =0;
void dfs(int s){
 
 
vis[s] =1;
 
if(used[s]>m){
  return ;
}
 
int cnt =0;
 
for(int i =0; i<g[s].size(); i++){
 
if(vis[g[s][i]]) continue;
used[g[s][i]] = used[s]+1;
if(a[g[s][i]]==0) {used[g[s][i]] =0;}
dfs(g[s][i]);
cnt++;
//cout<<cnt<<endl<<"Hi";
}
 
if(cnt ==0 ) {ans++;}
return;
 
 
 
 
 
 
 
}
 
 
 
/*void dfs(int v)
{
    vis[v] = 1;
    if (used[v] > m) return;
    int cnt = 0;
    for (int u : g[v])
    {
        if (vis[u]) continue;
        used[u] = used[v] + 1;
        if (a[u] == 0) used[u] = 0;
        dfs(u);
        cnt++;
    }
    if (cnt == 0) ans++;
    return;
}
*/
int32_t main(){
 
int n;
cin>>n>>m;
 
 
 
for(int i =1; i<=n; i++){
 
 
  cin>>a[i];
}
 
 
for(int i =0; i<n-1; i++){
 
  int u,v;
  cin>>u>>v;
  //u--;v--;
  g[u].push_back(v);
  g[v].push_back(u);
 
}
used[1]=a[1];
dfs(1);
cout<<ans<<endl;
 
 
 
}