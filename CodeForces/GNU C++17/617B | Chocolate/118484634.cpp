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
 
 
bool canPartition(vector<int>& nums) {
        
        int sum =0;
        for(int i =0; i<nums.size(); i++){
            sum+=nums[i];
        }
        
        if(sum%2){
            return false;
            
        }
        
        sum = sum/2;
        int n = nums.size();
        int dp[n+1][sum+1];
        dp[0][0] =1;
        for(int i =1; i<=n; i++){
            dp[i][0] = 1;
        }
        
        for(int i =1; i<=sum; i++){
            dp[0][i] =0;
        }
        
        for(int i =1; i<=n; i++){
            for(int j = 1; j<=sum; j++){
                
                if(nums[i-1]<=j){
                    dp[i][j] = dp[i-1][j] ||  dp[i-1][j-nums[i-1]];
                }
                
                else dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[n][sum];
        
        
    }
 
 
//int dp[n+1][2005];
 
int32_t main()
{
     anmol();
     int t;
     //cin>>t;
     t =1;
     
     while(t--){
     int n;
     cin>>n;
     int a[n];
     for(int i =0; i<n; i++) cin>>a[i];
     int pre =-1;
     int ans =0;
     for(int i =0; i<n; i++){
         if(a[i]==1){
             if(pre==-1){
                 ans  =1;
             }
             else {
                 ans*=(i-pre);
             }
             pre =i;
         }
     }
     cout<<ans<<endl;   
     }
}
 
 
 