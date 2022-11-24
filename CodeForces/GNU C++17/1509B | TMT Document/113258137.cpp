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
 
int n;
int a[2005];
int mx = 0, mn = 0; 
int func(){
int d =0;
 
for(int i =0; i<n; i++){
     
     mx = max(a[i],mx);
     mn = min(a[i],mn);
     d+=(mx-mn);
 
}
return d;
 
}
 
void solve()
{
  //int n;
  cin>>n;
 
 
  string s;
  cin>>s;
 
 
 
  int ans =0;
  int totalT =0;
  int totalM =0;
  
  for(int i =0; i<n; i++){
      if(s[i]=='T'){
          ans++;
          totalT++;
      }
 
      else {
          ans--;
          totalM++;
      }
 
      if(ans<0){
      cout<<"NO"<<endl;
      return;
      }
  }
  
  ans =0;
  for(int i = n-1; i>=0; i--){
  
   if(s[i]=='T'){
       ans++;
   }
 
   else ans--;
 
   if(ans<0){
       cout<<"NO"<<endl;
       return;
   }
 
  }
 
  if(totalT==2*totalM){
      cout<<"YES"<<endl;
 
  }
 
  else cout<<"NO"<<endl;
 
}
 
int32_t main()
{
    int z =1;
    anmol();
    int t = 1;
    cin >> t;
    //g();
 
    //t =1;
 
    while (t--)
    {   //cout<<"Case #"<<z<<": ";
        //z++;
        solve();
    }
    return 0;
}