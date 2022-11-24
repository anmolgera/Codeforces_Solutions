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
 
 
 
 
 
int32_t main()
{
     anmol();
     int t;
     //cin>>t;
     int z =1;
     //SieveOfEratosthenes();
      t =1;
     while(t--){
       //cout<<"Case #"<<z<<": ";
       //z++;
       int n;
       cin>>n;
 
       /*n*k+1
       2 -1
       3 -1
       4 -1
       5 - 1 2 3
       6 - 1
       7 - 1  3  5 
       8 - 1 3 5 7
       9 - 1 3 5 7 6 4
       */
       
       vector<int> ans;
       int x =0;
       int p =1;
       for(int i =1; i<=n-1; i++){
          if(__gcd(i,n)==1){
              ans.push_back(i);
               p = (p*i)%n;
          }
         
       }
       vector<int> final;
       if(p!=1){
       for(int i =0; i<ans.size(); i++){
           if(ans[i]==p){
 
           }
 
 
           else {
               final.push_back(ans[i]);
           }
       }
 
       ans = final;
       }
       cout<<ans.size()<<endl;
       for(auto i : ans){
           cout<<i<<" ";
       }
 
       cout<<endl;
 
 
     }
}