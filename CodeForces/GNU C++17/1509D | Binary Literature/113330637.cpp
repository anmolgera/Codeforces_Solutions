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
 
         string a,b,c;
         cin>>a>>b>>c;
 
         int i=0; int j =0; int k =0; 
         int siz_curr =0;
         string ans ="";
         while(i!=2*n && j!=2*n && k!=2*n){
 
             int count = (int) ( a[i]=='0') + (b[j]=='0') + (c[k]=='0');
             char ch;
             if(count>=2){
                 ans+='0';
                 ch ='0';
             }
 
             else {ans+='1'; ch='1';   }
 
             if(a[i]==ch){
                 i++;
             } 
 
             if(b[j]==ch){
                 j++;
             }
 
             if(c[k]==ch){
                 k++;
             }
 
            
             siz_curr++;
 
 
 
         }
 
         //cout<<ans<<endl;
         
 
         if(i!=2*n && 2*n-i<=3*n-siz_curr){
             ans+=a.substr(i);
         }
        
        else  if(j!=2*n && 2*n-j<=3*n-siz_curr){
             ans+=b.substr(j);
         }
 
         else  if(k!=2*n && 2*n-k<=3*n-siz_curr){
             ans+=c.substr(k);
         }
 
        cout<<ans<<endl;
 
 
     }
 
     
}