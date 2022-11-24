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
 
int dp[505][505][2][2];
 
int func(int zeroOne, int zeroes , int midzero, int canreverse){
 
if(zeroes + zeroOne + midzero ==0){
    return 0;
}
 
if(dp[zeroOne][zeroes][midzero][canreverse]!=-1){
    return dp[zeroOne][zeroes][midzero][canreverse];
}
 
int ans1 =1e9;
int ans2 =1e9;
int ans3 =1e9;
int ans4 =1e9;
int ans5 =1e9;
 
if(zeroOne && canreverse==1){
 
   
 
        ans1 = 0-func(zeroOne,zeroes,midzero,1-canreverse);
}
 
if(zeroOne>0){
    ans2 = 1-func(zeroOne-1,zeroes,midzero,1);
}
 
 
if(zeroes>0){
    ans3 = 1-func(zeroOne+1,zeroes-1,midzero,1);
}
 
if(midzero){
    ans4 = 1-func(zeroOne,zeroes,0,1);
}
return dp[zeroOne][zeroes][midzero][canreverse] = min({ans1,ans2,ans3,ans4,ans5});
}
 
 
 
 
int32_t main()
{
     anmol();
     int t;
     cin>>t;
 
     
     for(int i =0; i<=500; i++){
         for(int j =0; j<=500; j++){
             for(int k =0; k<2; k++){
                 for(int l =0; l<2; l++){
                     dp[i][j][k][l]=-1;
                 }
             }
         }
     } 
     //t =1;
 
     while(t--){
 
 
 
 
     int n;
     cin>>n;
     string s;
     cin>>s;
     int i =0;
     int j = n-1;
     int c1=0,c2=0,c3=0;
     while(i<=j){
         if(i==j){
             if(s[i]=='0')
             c3 =1;
             break;
         }
 
         if(s[i]!=s[j]){
             c1++;
         }
         else {
             if(s[i]=='0'){
                 c2++;
             }
         }
 
         i++;
         j--;
 
     }
 
     int val = func(c1,c2,c3,1);
     if(val<0) cout<<"ALICE"<<endl;
     else if(val>0) cout<<"BOB"<<endl;
     else cout<<"DRAW"<<endl;
 
     }
 }
 