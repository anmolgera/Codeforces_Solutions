#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll> dp;
int main(){
ll n,x,ans=0;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>x;
dp[x-i]+=x;
ans=max(ans,dp[x-i]);
}
cout<<ans;
 
return 0;
}