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
     int z =1;
     //SieveOfEratosthenes();
     
     while(t--){
       //cout<<"Case #"<<z<<": ";
        int n;
        cin>>n;
        int a[n];
        int x =0;
 
        for(int i =0; i<n; i++){
            cin>>a[i];
             x^=a[i];
        }
 
        if(x==0){
            cout<<"YES"<<endl;
        }
        else {
 
            // 5 1 4 5 -> 5 5 5
            // 5 5 5 5 5 
            int k =0;
            int count =0;
            for(int i =0; i<n; i++){
            k^=a[i];
            if(k==x){
                k=0;
                count++;
            }
            }
 
            if(count>2){
                cout<<"YES"<<endl;
            }
 
            else cout<<"NO"<<endl;
 
 
 
 
 
 
 
 
        }
       }
     }
 