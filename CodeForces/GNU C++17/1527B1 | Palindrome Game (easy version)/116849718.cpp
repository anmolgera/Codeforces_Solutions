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
 
 
int func(vector<int>&from, vector<int>& to, int x, int y){
    
    if(x==0 ){
        return 0;
    }
   
    if(y==0){
        return INT_MAX;
    }
 
    return min(func(from,to,x,y-1), abs(from[x]-to[y]) + func(from,to,x-1,y-1));
 
}
 
 
int ct(string s, char c ){
    int num=0;
    for(auto i : s) {
        if(i==c){
            num++;
        }
    }
    return num;
 
}
 
int32_t main()
{
     anmol();
     int t;
     cin>>t;
     //t =1;
 
     while(t--){
      
      int n;
      cin>>n;
      string s;
      cin>>s;
     
      if(n%2 && s[n/2]=='0'){
          int x = ct(s,'0');
          if(x==1) cout<<"BOB"<<endl;
          else cout<<"ALICE"<<endl;
      }
      else if(ct(s,'1')==n){
          cout<<"DRAW"<<endl;
      }
 
      else cout<<"BOB"<<endl;
      
 
      
     }
 }
 