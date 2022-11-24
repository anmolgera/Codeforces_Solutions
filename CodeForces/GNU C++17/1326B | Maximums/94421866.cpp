#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
/*vector<int> g[200005];
int a[200005];
int pos[200005];
vector<bool> vis(200005,false);
 
 
bool cmp (int i, int j){
 
 return pos[i] < pos[j];
}
 
 
 
bool bfs(){
 
 
vis[1] = true;
queue<int> q;
q.push(1);
int nxt =1;
 
while(!q.empty()){
 
int i = q.front();
q.pop();
 
if(i!=a[nxt]){
return false;
 
}
 
else {
 
 
    nxt++;
    vis[i] = true;
    for(auto j : g[i]){
 
     if(!vis[j]) {
 
 
      vis[j] = true;
      q.push(j);
 
 
     }
 
    }
 
 
}
 
 
 
 
 
 
 
 
}
 
 
 
return true;
 
 
}
*/
 
int32_t main(){
 
 anmol();
    int t;
    cin>>t;
  
    int a[t];
    for(int i =0; i<t; i++){
 
     cin>>a[i];
    }
 
    int sum =0;
    int maxsum =0;
    for(int i =0; i<t; i++){
 
      
     sum+=a[i];
    // maxsum = max(maxsum,sum);
 
 
 
  cout<<maxsum+a[i]<<" ";
              maxsum = max(maxsum+a[i],maxsum);
      
 
    }
 
    cout<<endl;
 
 
 
 
 }