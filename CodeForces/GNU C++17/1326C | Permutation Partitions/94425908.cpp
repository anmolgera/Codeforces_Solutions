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
const int m = 998244353;
 
int32_t main(){
 
 anmol();
    int n,k;
    cin>>n>>k;
 
 
    int a[n];
 
    for(int i =0; i<n; i++){
 
      cin>>a[i];
    }
 
 
   int ans =0;
   int sex = INT_MIN;
   int pro =1;
    for(int i =0; i<n; i++){
 
          if(a[i]>=n-k+1){
 
 
             if(sex!=INT_MIN){
              pro = pro*(i-sex)%m;
 
             }
 
             ans+=a[i];
 
             sex = i;
 
          }
   
 
 
   } 
 
  cout<<ans<<" "<<pro%m<<endl;
 
 
 }