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
 
 
const int x = 10000005;
int b[x];
//int c[10*x];
map<int,int> mmp;
 
 
void g(){
 
 
b[1] =0;
for(int i =1; i<=x-2; i++){
    for(int j = i; j<=x-2; j+=i){
          b[j]+=i;
    }
}
 
for(int i =1; i<=1000000; i++){
   if(!mmp[b[i]]){
    mmp[b[i]] = i;
   }
}
 
 
 
 
}
 
void solve()
{
 
int n;
cin>>n;
 
int a[n];
for(int i =0; i<n; i++){
 
    cin>>a[i];
}
 
int mn = *min_element(a,a+n);
int s =0;
for(int i =0; i<n; i++){
    if((mn & a[i])!=mn){
        cout<<0<<endl;
        return;
    }
 
    if(mn == a[i]){
        s++;
    }
}
 
int cnt = s*(s-1);
//cout<<cnt<<"Hi"<<endl;
for(int i = n-2; i>=1; i--){
    cnt = (cnt*i)%mod;
}
 
cout<<cnt<<endl;
 
 
 
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