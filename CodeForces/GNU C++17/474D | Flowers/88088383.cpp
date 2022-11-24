#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define d long double
#define pii pair<int,int>
#define pb push_back
#define pf push_front
//#define cases int tc,k;cin>>tc>>k;while(tc--)
#define N 100003
#define M 1003
//typedef tree<int,null_type,less_equal <int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;    //multiset
//typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update>ordered_set;        //set
//*X.find_by_order("index")
//X.order_of_key("key")
int mod=1e9+7;
//int mod=998244353;
int dp[N];
 
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
    memset(dp,0,sizeof dp);
    int t,k;
    cin>>t>>k;
    int i,j;
    dp[0]=1;
    for(i=1;i<k;++i)
    {
        dp[i]=1;
    }
    for(i=k;i<N;++i)
    {
        dp[i]=((dp[i-k])+(dp[i-1]))%mod;
    }
    for(i=1;i<N;++i)
        dp[i]=(dp[i]+dp[i-1])%mod;
 
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<(dp[b]-dp[a-1]+mod)%mod<<"\n";
    }
 
 
 
    return 0;
}