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
char a[61][61];
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
 
 
 
void solve(){
 
int n;
cin>>n;
 
/*int x,y;
//cin>>x>>y;
x =0;
y =0;
 
int ans =0;
 
if(isprime(6*(n-1)+1)){
 
 
ans = 6*(n-1)+1;
 
 
}
else {
 
 ans = 6*(n+1) +1;
     
 
}
 
int a[n][n];
 
 
for(int i =0; i<n-1; i++){
 
   for(int j =0; j<n-1; j++){
 
    a[i][j] = ans-1;
   }
 
}
 
 
for(int i =0; i<n; i++){
 
  a[i][n-1] =1;
}
 
for(int i =0; i<n; i++){
 
  a[n-1][i] =3;
}
 
if(n%2==0){
    
     if(isprime(n-1))
 
}
 
else {
 
 
   a[n-1][n-1]=2;
}
 
for(int i =0; i<n; i++){
 
  for(int j =0; j<n; j++){
 
          cout<<a[i][j]<<" ";
 
  }
  cout<<endl;
}
*/
 
int a[n+1][n+1];
 
memset(a,0,sizeof(a));
 
//a[0][0] =1;
//a[n-1][n-1] =1;
//a[n-1][0] =1;
//a[0][n-1] =1;
int x = (n+1)/2;
//if(n%2) { =1;}
for(int i =1; i<=n; i++){
 
  for(int j =1; j<=n; j++){
     
     if(i==j){
 
      a[i][j] =1;
     }
    //cout<<a[i][j]<<" ";
 
     if(i+j==n+1){
      a[i][j]=1;
     }
     
     if(n%2){
     a[x][1] =1;
     a[1][x] =1;
      }
 
     cout<<a[i][j]<<" ";
  
  }
 
  cout<<endl;
}
 
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