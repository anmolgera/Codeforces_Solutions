#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> adj[200005];
vector<int> dp(200005,0);
vector<int> level(200005,0);
vector<int> vis(200005,0);
//int cnt =0;
/*#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
//#define vi              vector<int>
#define mii             map<int,int>
//#define my              unordered_map<int,int>
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
 
 */
 
 
 
 
//int sex[502][502];
//int a[2000];
/*int n,m;
int cnt ;
int sr,sc;
 
void dfs(int sr, int sc){
 
 if(sr>=n || sc>=m || sr<0 || sc<0 || cnt==0){
  return;
 }
 
 if(sex[sr][sc]==0 || sex[sr][sc] ==2 ) {return ;} 
 cnt--;
 //cout<<cnt<<endl;
 sex[sr][sc] = 2;
 
dfs(sr+1,sc);
dfs(sr,sc+1);
dfs(sr-1,sc);
dfs(sr,sc-1);
return;
 
 
 
 
 
 
 
}
*/
 
 
int dfs(int s, int lev){
 
/*if(vis[s]){
  return;
}*/
vis[s] =1;
level[s] = lev;
int cnt =1;
 
for(int i =0; i<adj[s].size(); i++){
 
  if(!vis[adj[s][i]]){
  
  cnt+=dfs(adj[s][i],lev+1);
  }
 
}
 dp[s] = cnt;
//dp[s] +=(1+cnt);
return cnt;
 
 
}
 
 
int32_t main(){
int n,k;
cin>>n>>k;
 
for(int i =0; i<n-1; i++){
int u,v;
cin>>u>>v;
adj[u].push_back(v);
adj[v].push_back(u);
 
}
 
dfs(1,0);
vector<int> sex;
 
 
for(int i =1; i<=n; i++ ){
 
  sex.push_back(level[i]-(dp[i])+1);
 
 
}
 
sort(sex.begin(),sex.end());
reverse(sex.begin(),sex.end());
int sum =0;
for(int i =0; i<k; i++){
sum+=sex[i];
 
}
cout<<sum<<endl;
 
 }