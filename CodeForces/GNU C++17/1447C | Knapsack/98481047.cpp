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
 
 
/*int power(int x, int y){
 
   
 
 
 
 
 
}*/
 
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
/*
 
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
 
*/
 
int gcd(int a,int b){
 
 
  if(a==0){
    return b;
  }
 
  else return gcd(b%a,a);
}
 
#define mod             1000000007
#define mod2            998244353
#define inf             1e18
 
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
int ans =0;
int vis[60][60];
//char a[61][61];
//int n,m;
 
/*bool isvalid(int i, int j){
 
  
 if(i>n || j>m || i<=0 || j<=0 ){
    return false;
  }
 
 else return true;
 
}
 
 
void dfs(int i, int j, int px, int py){
 
 
 
  if(vis[i][j]==1){
 
       ans =1;
       return;
 
  }
  
  vis[i][j] = 1;
 
  for(int x =0; x<4; x++){
       
       int s = i + dx[x];
       int r = j + dy[x];
 
       if(isvalid(s,r) && a[s][r] == a[i][j]){
           
           if(s!=px || r!=py){
            dfs(s,r,i,j);
           }
 
       }
 
  }
 
 
 
 
}
 
*/
 
//int a[501][501];
int b[501][501];
int pos[501*501];
 
int dp[205][305];
///int a[205];
//int n;
 
 
 
 
void solve(){
 
int n,W;
cin>>n>>W;
int a[n];
vector<pair<int,int>> v;
int sum =0;
for(int i =0; i<n; i++){
  cin>>a[i];
  sum+=a[i];
  v.push_back({a[i],i+1});
}
 
sort(v.begin(),v.end());
 
if(v[0].first>W || sum<(W+1)/2){
  cout<<-1<<endl;
  return;
}
 
  int curr_sum = v[0].first, start = 0, i; 
  
    /* Add elements one by one to curr_sum and  
    if the curr_sum exceeds the sum, 
    then remove starting element */
    for (i = 1; i <= n; i++) { 
        // If curr_sum exceeds the sum, 
        // then remove the starting elements 
        while (curr_sum > W && start < i - 1) { 
            curr_sum = curr_sum - v[start].first; 
            start++; 
        } 
  
        // If curr_sum becomes equal to sum, 
        // then return true 
        if (curr_sum >=(W+1)/2 && curr_sum<=W) { 
           cout<<i-start<<endl;
           for(int j =start; j<i; j++){
            cout<<v[j].second<<" ";
           }
           cout<<endl;
            return ;
        } 
  
        // Add this element to curr_sum 
        if (i < n) 
            curr_sum = curr_sum + v[i].first; 
    } 
  
    // If we reach here, then no subarray 
    cout <<-1<<endl; 
    return;
 
}
 
 
 
 
 
int32_t main(){
 
 
  anmol();
  int t;
  //t =1;
  cin>>t;
  while(t--){
        
        //int a,b;
        //cin>>a>>b;
 
    solve();
 
        //cout<<fact[a] - fact[b];
        // look for base cases always 
 
 
 
  }
 
}