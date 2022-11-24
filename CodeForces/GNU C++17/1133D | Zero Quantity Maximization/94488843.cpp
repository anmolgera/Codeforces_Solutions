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
 
 int a[n];
 int b[n];
 
  for(int i =0; i<n; i++){
 
  cin>>a[i];
 }
  
 
  for(int i =0; i<n; i++){
 
    cin>>b[i];
  }
 
 
 
map<pair<int,int> , int> mp;
int ans =0;
 
for(int i =0; i<n; i++){
 
 if(a[i]==0){
 
    ans += (b[i]==0);
 
 
 
 }
 
else {
 
    int ele1 =-b[i];
    int ele2 = a[i];
 
    int sex = __gcd(ele1,ele2);
    ele1 /=sex;
    ele2/=sex;
 
 
    mp[{ele1,ele2}]++;
 
 
 
 
 
 
} 
 
 
}
 
int mx =0;
for(auto i : mp){
if(i.second>mx){
  mx = i.second;
}
 
 
 
}
ans+=mx;
cout<<ans<<endl;
 
 
 
 
 
 }
 