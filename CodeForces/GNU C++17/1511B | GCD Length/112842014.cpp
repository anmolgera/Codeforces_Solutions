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
 
int g(int n){
 
int cnt =0;
while(n--){
 
 cnt+=1;
 n/=10;
 
 
 
}
return cnt;
 
}
 
 
 
void solve()
{
 
int a,b,c;
cin>>a>>b>>c;
 
int x =1;
while(g(x)!=c){
    x*=2;
}
 
int y = min(a,b);
int z = max(a,b);
int ans1;
int ans2;
 
int i =x;
int j =x;
while(g(i)!=a){
    i*=3;
}
ans1 =i;
 
while(g(j)!=b){
    j*=5;
}
 
ans2 = j;
 
cout<<ans1<<" "<<ans2<<" "<<endl;
 
 
}
 
int32_t main()
{
    int z =1;
    anmol();
    int t = 1;
    cin >> t;
    //g();
 
   
 
    while (t--)
    {   //cout<<"Case #"<<z<<": ";
        //z++;
        solve();
    }
    return 0;
}