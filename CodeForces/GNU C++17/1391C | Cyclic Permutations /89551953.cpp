#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
//#define vi              vector<int>
#define mii             map<int,int>
#define my              unordered_map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
//#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define ml(brr,n,type)  type *brr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
 
//#define int long long 
 
int mod =1000000007;
 
int result[1000002] = {0};
 
int moduloMultiplication(int a, 
                            int b, 
                            int mod) 
{ 
    int res = 0; // Initialize result 
  
    // Update a if it is more than 
    // or equal to mod 
    a %= mod; 
  
    while (b) 
    { 
        // If b is odd, add a with result 
        if (b & 1) 
            res = (res + a) % mod; 
  
        // Here we assume that doing 2*a 
        // doesn't cause overflow 
        a = (2 * a) % mod; 
  
        b >>= 1; // b = b / 2 
    } 
  
    return res; 
} 
void fact(int n) {
  
      result[0] = 1;
      for (int i = 1; i <= n; ++i) {
         result[i] =moduloMultiplication(result[i-1],i,mod);
         result[i]=result[i]%mod;
      }
    
   
}
 
int32_t main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 
       
        int n;
        cin>>n;
          fact(n);
        int dp[n+1];
        dp[1]=1;
        dp[2]=2;
        dp[3]=4;
        for(int i=4;i<=n;i++){
           dp[i]=moduloMultiplication(dp[i-1],2,mod);
           dp[i]%=mod;
        }
    
        int x=(result[n]%mod-dp[n]%mod)%mod;
        if(x<0)
        x+=mod;
        cout << x << endl;
     
    
    
    
}