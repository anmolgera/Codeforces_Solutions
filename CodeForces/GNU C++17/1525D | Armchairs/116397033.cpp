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
 
 
int func(vector<int>&from, vector<int>& to, int x, int y){
    
    if(x==0 ){
        return 0;
    }
   
    if(y==0){
        return INT_MAX;
    }
 
    return min(func(from,to,x,y-1), abs(from[x]-to[y]) + func(from,to,x-1,y-1));
 
}
 
 
 
 
int32_t main()
{
     anmol();
     int t;
     //cin>>t;
     t =1;
 
     while(t--){
      
       int n;
       cin>>n;
       int a[n];
       vector<int> from ={0}; /// contains 1
       vector<int> to ={0};   // contains 0
       for(int i =0; i<n; i++){
           cin>>a[i];
           if(a[i]){
               from.push_back(i);
           }
           else {
               to.push_back(i);
           }
       }
      int x = from.size();
      int y = to.size();
      vector<vector<int>> dp(x,vector<int>(y,INF));
      if(from.size()==1|| to.size()==1) cout<<0<<endl;
      else {
      //int z = func(from,to,x,y);
      //cout<<z<<endl;
 
      //dp[i][j] = min(dp[i][j-1],shifting the element from i to j);
      //dp[i][j] = min(dp[i][j-1],(from[i]-to[j])+dp[i-1][j-1]);
      
      for(int j =0; j<y; j++){
          dp[0][j] =0;
      }
      for(int i =1; i<=x-1; i++){
          for(int j =1; j<=y-1; j++){
                dp[i][j] = min(dp[i][j-1], abs(from[i]-to[j])+dp[i-1][j-1]);
          }
      }
 
      cout<<dp[x-1][y-1]<<endl;
      
      
      }
 
 
     }
     
     
 }
 
 // 5 2 4 3 1  // 2 4 1 5 3 // 1 2 4 5 3 // 
 // 5 1 2 3 4
 // 1 2 3 5 4
 // 1 2 3 4 5