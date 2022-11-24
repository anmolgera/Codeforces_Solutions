#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define int long long
//typedef pair<int, int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9 + 7, N = 2e6 + 7, M = 2e6 + 7, INF = INT_MAX / 10;
ll powe(ll x, ll y)
{
    x = x % mod, y = y % (mod - 1);
    ll ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            ans = (1ll * x * ans) % mod;
        }
        y >>= 1;
        x = (1ll * x * x) % mod;
    }
    return ans;
}
 
void anmol()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
int a[2003];
int dp[2003][2003];
int func(int start, int end){
 
 if(start==end){
     return 0;
 }
 
 if(start==end-1){
 return a[end]-a[start];
 }   
 
 if(dp[start][end]!=-1){
     return dp[start][end];
 }
 
 return dp[start][end] = min(a[end]-a[start]+func(start+1,end) , a[end]-a[start]+func(start,end-1));
 
 
 
 
}
 
 
 
int32_t main()
{
    
    anmol();
  
      int n;
      cin>>n;
  
      //int a[n];
  memset(dp,-1,sizeof(dp));
  for(int i =0; i<n; i++){
      cin>>a[i];
  }
  
  sort(a,a+n);
  int x = func(0,n-1);
  cout<<x<<endl;
  
    
    return 0;
}