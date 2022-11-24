#include <bits/stdc++.h> 
#define ll long long  int
 
using namespace std;
 
 
void anmol()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
 
 
int main() 
{ 
    #ifndef ONLINE_JUDGE
freopen("l.txt", "r", stdin);
freopen("m.txt", "w", stdout);
#else
#endif 
ll t;
cin>>t;
while(t--)
{
 
  ll n;
  cin>>n;
  ll a[n],b[n],c[n];
  for(ll i=0;i<n;i++)
  {
  cin>>c[i];
  }
  for(ll i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(ll i=0;i<n;i++)
  {
    cin>>b[i];
  }
  vector<ll> dp(n,0);
 
ll maxi=0;
  for(ll i=1;i<n;i++)
  {
    ll first=a[i];
    ll second=b[i];
    if(first>second)
    {
      swap(first,second);
    }
    if(first==second)
    {
      dp[i]=2;
      maxi=max(maxi,dp[i]+c[i]-1);
      continue;
    }
    // ll curr=c[i]+1;
   ll last=c[i-1];
   ll len=second-first;
   if(dp[i-1]==0)
   {
    dp[i]=2+len;
    maxi=max(maxi,dp[i]+c[i]-1);
    continue;
   }
   
   dp[i]=max(2+len,dp[i-1]+(last-len-1)+2);
   maxi=max(maxi,dp[i]+c[i]-1);
  }
  // for(auto i: dp)
  //   cout<<i<<" ";
 
 
  cout<<maxi<<endl;
}
 
}