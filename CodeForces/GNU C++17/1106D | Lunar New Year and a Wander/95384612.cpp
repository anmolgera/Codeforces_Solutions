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
 
bool check (string s){
 
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
 
vector< int> adj[100002];
vector<int> vis (100002,0);
 
 
 
void solve(){
 
 int n,m;
 cin>>n>>m;
 
 
 
 
 for(int i =0; i<m; i++){
 
 
  int u,v;
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);
 
 }
   
 
 
    set<int> s;
    s.insert(1);
    vector<int>ans;
    while(!s.empty()){
     
       auto node = *s.begin();
       s.erase(node);
       vis[node] =1;
       ans.push_back(node);
       int i = node;
       for(auto i : adj[i]){
 
        if(!vis[i]){
         s.insert(i);
 
 
           }
       }
 
     
 
 
 
 
    }
 
   
 for(int i =0; i<ans.size(); i++){
 
  cout<<ans[i]<<" ";
 }
 
 cout<<endl;
 
 return;
 
 
 
}
 
int32_t main(){
 
 
 anmol();
 int t;
 t =1;
 //cin>>t;
 while(t--){solve();}
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 