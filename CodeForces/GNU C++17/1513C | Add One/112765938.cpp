#include <bits/stdc++.h>
using namespace std;
#define gok ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
# define int long long
# define ll long long
#define pb push_back
const int N = 200005,mod = 1000000007;
int dp[10][200005];
int help(int dig,int rem)
{
    if(rem==0)
        return 1;
    if(dp[dig][rem]!=-1)
        return dp[dig][rem];
 
    int op=0;
    if(dig==9)
    {
        op = (help(1,rem-1) + help(0,rem-1))%mod;
    }
    else
        op = help(dig + 1,rem-1);
    return dp[dig][rem] = op;
 
}
signed main(){
 gok
 
 int t;
 cin>>t;
 memset(dp,-1,sizeof(dp));
 for(int i=0;i<10;i++)
    {
        for(int j=0;j<=200000;j++)
        {
            help(i,j);
        }
    }
 while(t--)
    {
        int n,m;
        cin>>n>>m;
 
        int an=0;
 
        while(n>0)
        {
            int dig = n%10;
            an += dp[dig][m];
            an %= mod;
            n/=10;
        }
        cout<<an<<endl;
    }
 
 
  return 0;
}
 
 