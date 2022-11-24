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
 
vector<string> v;
for(int i =0; i<n; i++){
    string s;
    cin>>s;
    v.push_back(s);
}
 
set<pair<int,int>> mp;
for(int i =0; i<v.size(); i++){
 
    for(int j =0; j<v[i].length(); j++){
         
         if(v[i][j]=='*'){
           mp.insert({i,j}); 
         }
    }
}
bool flag = false;
 
pair<int,int> p1;
pair<int,int> p2;
for(auto k : mp){
    if(!flag) {p1.first = k.first; p1.second = k.second; flag = true;}
    else {p2.first = k.first; p2.second = k.second;};
}
 
auto i = p1;
auto j = p2;
if(i.first==j.first || i.second == j.second){
    
    if(i.first == j.first){
 
    int x = abs(j.second-i.second);
 
    if(i.first-1>=0){
    v[i.first-1][i.second] ='*';
    v[j.first-1][j.second] ='*';
    }
     
    else {
    
    v[i.first+1][i.second] ='*';
    v[j.first+1][j.second] ='*';
 
    }
 
 
    }
 
    else {
      
     
    int x = abs(j.first-i.first);
 
    if(i.second-1>=0){
    v[i.first][i.second-1] ='*';
    v[j.first][j.second-1] ='*';
    }
     
    else {
    
    v[i.first][i.second+1] ='*';
    v[j.first][j.second+1] ='*';
 
    }
 
    }
}
 
else {
 
v[i.first][j.second] = '*';
v[j.first][i.second] = '*'; 
 
 
 
 
 
 
 
 
 
}
 
for(int k =0; k<v.size(); k++){
    cout<<v[k]<<endl;
}
 
 
 
//cout<<i.first<<" "<<i.second<<" Hi " << j.first<<" "<<j.second<<endl;
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