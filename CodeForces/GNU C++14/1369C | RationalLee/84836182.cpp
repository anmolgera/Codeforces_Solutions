#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n],pos[k];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(ll i=0;i<k;i++)
        {
            cin>>pos[i];
        }
        sort(pos,pos+k);
        sort(arr,arr+n);
        ll r=n-1;
        ll l=0;
        ll ans=0;
        for(ll i=0;i<k;i++)
        {
            if(pos[i]==1)
            {
                ans+=2*(arr[r]);
                r--;
            }
            else
            {
                break;
            }
            
            
            
        }
        for(int i=k-1;i>=0;i--)
        {
            if(pos[i]==1)
            {
                break;
            }
            else
            {
                
                ans+= arr[r] + arr[l];
                r--;
               l += pos[i]-1;
                
            }
        }
        cout<<ans<<endl;
        
        
    }
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 