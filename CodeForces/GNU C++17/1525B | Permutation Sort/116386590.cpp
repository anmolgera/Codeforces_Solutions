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
     cin>>t;
 
     while(t--){
      
     int n;
     cin>>n;
 
     int a[n];
     for(int i =0; i<n; i++){
         cin>>a[i];
     }
     
     int mx =0;
     int cnt =0;
     bool flag = true;
     for(int i =0; i<n; i++){
      if(a[i]!=i+1){
          flag = false;
      }   
     }
 
     if(flag) cout<<0<<endl;
     else {
        
            if(a[0]==n && a[n-1]==1){
                 cout<<3<<endl;
              }
            
            
             else if((a[0]==1 || a[n-1]==n)){
                 //cout<<"HI"<<endl;
                 cout<<1<<endl;
             }
 
             
             
            
             else {
                 cout<<2<<endl;
             }
             
         
 
 
 
     }
 
 
 
 
 
 
 
     }
     
     
 }
 
 // 5 2 4 3 1  // 2 4 1 5 3 // 1 2 4 5 3 // 
 // 5 1 2 3 4
 // 1 2 3 5 4
 // 1 2 3 4 5