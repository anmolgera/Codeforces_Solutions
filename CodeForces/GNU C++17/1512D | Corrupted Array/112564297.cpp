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
 
int a[n+2];
set<int> st;
map<int,int> mp;
for(int i =0; i<n+2; i++){
    cin>>a[i];
    //st.insert(a[i]);
    mp[a[i]]++;
}
 
sort(a,a+n+2);
 
int s =0;
for(int i =0; i<n; i++){
    s+=a[i];
}
 
if(s==a[n]){
 
    for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
 
    }
 
    cout<<endl;
    return;
}
 
 
else {
 
    s+=a[n];
    for(int i =0; i<n+1; i++){
     if(s-a[i]==a[n+1]){
      for(int j =0; j<n+1; j++){
          if(i!=j){
              cout<<a[j]<<" ";
          }
      }
 
      cout<<endl;
      return;
     }
    }
}
 
cout<<-1<<endl;
 
 
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