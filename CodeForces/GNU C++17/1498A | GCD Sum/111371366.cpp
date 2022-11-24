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
 
void solve()
{
 
int n;
cin>>n;
int s =0;
 
while(true){
int m =n;
s=0;
while(m){
s+=m%10;
m/=10;
}
//cout<<s<<endl;
if(__gcd(n,s)>1){
    cout<<n<<endl;
    return;
}
n++;
}
 
 
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