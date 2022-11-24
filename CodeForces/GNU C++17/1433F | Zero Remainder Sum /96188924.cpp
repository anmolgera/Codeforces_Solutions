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
 
bool isprime(int n){
 
  for(int i =2; i*i<=n; i++){
 
    if(n%i==0){
      return 0;
    }
  }
 
  return 1;
 
}
 
 
int a[71][71];
int dp[71][71][71][71];
int n,m,k;
 
//# define 
 
 
int func(int i, int j , int count, int cntsum ){
 
 if(i==n){
 
  return (cntsum ==0 ) ? 0: -1*inf;
 }
 
 if(j==m){
 
 
  return func(i+1,0,0,cntsum);
 }
 
 
 if(count == m/2){
  return func(i+1,0,0,cntsum);
 }
 
 
 if(dp[i][j][count][cntsum]!=-1){
  return dp[i][j][count][cntsum];
 }
 
 int result = -1*inf;
 result = max(result, func(i,j+1,count,cntsum));
 result = max(result,func (i, j+1, count+1 , (cntsum + a[i][j])%k)+a[i][j]);
 
 dp[i][j][count][cntsum] = result;
 return dp[i][j][count][cntsum] ;
 
}
 
 
void solve(){
 
//int n,m,k;
cin>>n>>m>>k;
 
for(int i =0; i<n; i++){
 
   for(int j =0; j<m; j++){
 
    cin>>a[i][j];
   }
 
 
}
 
memset(dp,-1,sizeof(dp));
 
int ans = func(0,0,0,0);
cout<<ans<<endl;
 
 
 
 
return;
 
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