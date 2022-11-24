/* Author : Anmol Gera
NSIT 4th Year */
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define mod2            998244353
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define ml(brr,n,type)  type *brr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
void anmol()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
 
/*bool check (string s){
 
  int i =0;
  int j = s.length()-1;
 
 
  while(i<=j){
 
    if(s[i]!=s[j]){
      return false;
    }
    i++;
    j--;
 
  }
 
 
  return true;
 
 
}
*/
bool isprime(int n){
 
  for(int i =2; i*i<=n; i++){
 
    if(n%i==0){
      return 0;
    }
  }
 
  return 1;
 
}
 
 
//int a[71][71];
//int dp[71][71][71][71];
//int n,m,k;
 
//# define 
vector<int> adj[100005];
vector<int> check(100005, 0);
bool flag = true;
 
void dfs(int u, int color){
check[u] = color;
for(auto i : adj[u]){
 
  if(check[i]==0){
    dfs(i,3-color);
  }
 
  else if(check[i]==color){
 
    flag = false;
    return;
  }
}
 
 
 
 
}
 
 
 
void solve(){
 
int n,m;
cin>>n>>m;
 
// Bipartite Graph?
 
for(int i =0; i<m; i++){
 
  int u,v;
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);
 
 
}
 
 
for(int i =1; i<=n; i++){
 
 if(check[i]==0){
  dfs(i,1);
 }
 
}
 
if(!flag){
cout<<-1<<endl;
}
 
else {
 
 vector<int> v;
 vector<int> v1;
 for(int i =1; i<=n; i++){
 
   if(check[i]==1){
     
     v.push_back(i);
 
   }
   else v1.push_back(i);
 
 
 }
 
cout<<v.size()<<endl;
 
for(int i =0; i<v.size(); i++){
 
  cout<<v[i]<<" ";
}
 
cout<<endl;
 
cout<<v1.size()<<endl;
 
for(int i =0; i<v1.size(); i++){
 
  cout<<v1[i]<<" ";
}
 
cout<<endl;
 
 
 
}
 
 
}
 
 
int32_t main(){
 
 
  anmol();
  int t;
  t =1;
  //cin>>t;
  while(t--){
        
        //int a,b;
        //cin>>a>>b;
 
    solve();
 
        //cout<<fact[a] - fact[b];
 
 
  }
  //solve();
}