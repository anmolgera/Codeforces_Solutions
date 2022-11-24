#include<bits/stdc++.h>
using namespace std;
 
#define int long long
vector<int> g[100005];
int vis[100005];
 
int sum1 =0;
int sum2 =0;
void addedge(int u, int v){
 
    g[u].push_back(v);
    g[v].push_back(u);
}
 
 
 
void dfs(int s, int t){
 
vis[s] =1;
if(t%2){
    sum1++;
}
 
else sum2++;
 
for(int i =0; i<g[s].size(); i++){
     
     if(!vis[g[s][i]]){
 
        dfs(g[s][i],1-t);
     }
 
 
}
 
}
 
 
 
 
 
int32_t main(){
int n;
cin>>n;;
 
//int m;
//cin>>m;
 
 
//int a[n];
 
/*for(int i =0; i<n; i++){
 
    cin>>a[i];
}
*/
 
for(int i =0; i<n-1; i++){
 
int u,v;
cin>>u>>v;
addedge(u,v);
}
 
memset(vis,0,sizeof(vis));
dfs(1,0);
cout<<sum1*sum2-(n-1)<<endl;
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 