#include<bits/stdc++.h>
using namespace std;
#define int long long
 
vector<int> g[200005];
vector<int> col(200005,-1);
vector<int> vis(200005,0);
vector<int>v;
bool ok = true;
void dfs(int s){
 
 
if(vis[s]){
    return ;
}
 
vis[s] =1;
 
for(int i =0; i<g[s].size(); i++){
 
if(col[g[s][i]]==-1){
 
    col[g[s][i]] = 1-col[s];
}
 
else if(col[g[s][i]]!=(1-col[s])){
 
    ok = false;
    break;
}
 
dfs(g[s][i]);
 
}
 
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
int32_t main(){
 
int n,m;
cin>>n>>m;
 
 
for(int i =0; i<m; i++){
 
 
    int x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
    v.push_back(x);
}
col[1] =0;
dfs(1);
 
if(!ok){
 
    cout<<"NO"<<endl;
}
 
else {
 
 
 
 
    cout<<"YES"<<endl;
    for(int i =0; i<v.size(); i++){
        
         if(col[v[i]]==-1){
            break;
        }
 
        cout<<col[v[i]];
 
      /*  if(col[i]==-1){
            break;
        }*/
    }
  
  cout<<endl;
  return 0;
}
 
 
 
 
 
}