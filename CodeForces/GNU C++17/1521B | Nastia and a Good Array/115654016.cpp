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
 
 
 
 
 
int cntd( int n ){
 
  int ans =0;
  while(n){
      n/=10;
      ans++;
  }
  return ans;
 
}
 
int func(int x, int n){
   
   string ans ="";
   for(int i =0; i<x; i++){
       ans+='1';
   }
 
   int y = stoi(ans);
  /// cout<<y<<endl;
   if(y>n){
       ans.pop_back();
       y = stoi(ans);
   }
 
   return y;
     
}
 
int cntd1(int n){
  
  int m =n;
  int ans =0;
  while (n)
  {
      ans++;
      n/=10;
  }
 
  
  string a ="";
  a ='1';
  for(int i =0; i<ans-1; i++){
      a+='0';
  }
  
  int x = stoi(a);
  if(x==m){
      a.pop_back();
 
  }
  return stoi(a);
  
 
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
     vector<vector<int>> v;
     for(int i =1; i<n; i+=2){
         v.push_back({i+1,i,mod,min(a[i],a[i-1])});
     }
 
     cout<<v.size()<<endl;
     for(int i =0; i<v.size(); i++){
      cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2]<<" "<<v[i][3]<<endl;
     }
 
 
 
 
     }
     
     
 }