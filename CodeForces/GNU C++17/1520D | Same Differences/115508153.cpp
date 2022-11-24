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
 
 
int res[505][505];
int cnt =0;
int n;
 
void rec(int x, int y, int w) {
 
if(x< 0 || y<0 || x>=n || y>=n || res[x][y]!=-1 || cnt==0){
    return;
}
 
cnt--;
res[x][y] = w;
rec(x+1,y,w);
rec(x,y-1,w);
 
}
 
 
int32_t main()
{
     anmol();
     int t;
     cin>>t;
 
     while(t--){
      
     int n;
     cin>>n;
 
     int a[n+1];
     for(int i =1; i<=n; i++){
         cin>>a[i];
     }
 
     map<int,int> mp;
     int ans =0;
 
     for(int i =1; i<=n; i++){
       ans+=mp[a[i]-i]++;
     }
     
     cout<<ans<<endl;
     
 
     }     
 
 }
 