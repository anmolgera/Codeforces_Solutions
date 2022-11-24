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
 
int dp[1005][1005];
int func(int forward, int backward, int decay){
     
     if(decay==1 || forward ==0){
         return dp[forward][decay] =1;
     }
 
     if(dp[forward][decay]!=-1){
 
         return dp[forward][decay];
     }
 
     return dp[forward][decay] = (func(backward,forward,decay-1) + func(forward-1,backward+1,decay))%mod;
 
}
 
void solve()
{
   
   int n;
   cin>>n;
 
   int k;
   cin>>k;
 
   memset(dp,-1,sizeof(dp));
   cout<< func(n,0,k)<<endl;
 
 
 
 
}
 
int32_t main()
{
    int z =1;
    anmol();
    int t = 1;
    cin >> t;
    while (t--)
    {   //cout<<"Case #"<<z<<": ";
        //z++;
        solve();
    }
    return 0;
}