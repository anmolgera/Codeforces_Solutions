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
 
 
 int n;
 cin>>n;
 
 //int a[n];
 map<int,int> mp;
 bool flag= true;
 for(int i =0; i<n; i++){
 
  int x;
  cin>>x;
 
  int y = x-25;
  if(y==75){
 
      if(mp[25] && mp[50]){
        mp[25]--;
        mp[50]--;
      }
 
      else if(mp[25]>=3){
        mp[25]-=3;
      }
 
      else {flag = false;
        break;
 
 
                }
 
 
 
  }
 
 
  else if(y==25) {
 
       if(mp[25]){
        mp[25]--;
       }
 
       else {
        flag = false;
        break;
       }
 
 
 
  }
 
  mp[x]++;
 
 
 
 }
 
 
 
 
 
 /*for(int i =0; i<n; i++){
 
    int x = a[x];
 
 
 
 
 
 
 }
*/
 
 if(flag){
 
  cout<<"YES"<<endl;
 }
  
 else cout<<"NO"<<endl;
 }