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
 
 
 while(t--){
 int n;
 cin>>n;
 
 int a[n+1];
 int b[n+1];
 int c[n+1];
 
vector<vector<int> > mp(n+1);  
 for(int i =1; i<=n; i++){
 
  cin>>a[i];
  //s.insert(a[i]);
  mp[i].push_back(a[i]);
 }
 
 
 for(int j =1; j<=n; j++){
 
  cin>>b[j];
  //s.insert(b[j]);
  mp[j].push_back(b[j]);
 }
 
 
 for(int i =1; i<=n; i++){
 
  cin>>c[i];
  //s.insert(c[i]);
  mp[i].push_back(c[i]);
 }
 
 int p[n+1] ={0};
 
 
 for(int i =1; i<=n; i++){
 
      if(i==1){
 
       cout<<a[i]<<" ";
       p[i] = a[i];
      }
       
     else  if(i==n){
 
           if(a[i]!=p[i%n +1 ] && a[i]!=p[i-1]){
            cout<<a[i]<<" ";
           }
 
           else if(b[i]!=p[i%n +1] && b[i]!=p[i-1]){
 
            cout<<b[i]<<" ";
           }
 
           else cout<<c[i]<<" ";
 
      }
 
      else if(i!=n) {
 
              
              if( b[i]!=p[i-1]){
 
               cout<<b[i]<<" ";
               p[i] = b[i];
              }
 
              else if(a[i]!=p[i-1]){
 
 
               cout<<a[i]<<" ";
               p[i] = a[i];
              }
 
 
              else {
 
 
               cout<<c[i]<<" ";
               p[i] = c[i];
              }
 
      }
 
 
 
 }
 
 cout<<endl;
 
 }
}