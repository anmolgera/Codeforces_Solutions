#include <bits/stdc++.h>
 
#define ll  long long int 
using namespace std;
 
 
 
ll check(vector<pair<ll,ll>> v,ll mid,ll n)
{
 
 
for(ll i=0;i<v.size();i++)
{
    if(i+(v[i].second-1)*(mid)<n)
    {
        continue;
    }
    else
    {
        return false;
    }
}
return true;
 
 
 
 
}
bool compare(pair<ll,ll> a,pair<ll,ll> b)
{
    return a.second>b.second;
}
int  main()
{
 
  #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("cfoutput.txt", "w", stdout);
#else
// online submission
 
#endif
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll> m;
    set<ll> stk;
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
        stk.insert(arr[i]);
    }
    for(auto i:stk)
    {
        v.push_back({i,m[i]});
    }
    sort(v.begin(),v.end(),compare);
    ll start=0;
    ll end=n;
    ll mid=(start+end)/2;
    ll ans=-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(check(v,mid,n))
        {
            start=mid+1;
            ans=mid;
        }
        else
        {
 
            end=mid-1;
 
        }
    }
    cout<<ans-1<<endl;
 
 
 
 
 
 
  }
 
    
    return 0;
   
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 