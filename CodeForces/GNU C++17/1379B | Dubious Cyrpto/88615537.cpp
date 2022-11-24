#pragma GCC optimize("O3")
//#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
#define bll __int128
#define ll long long
#define ld  double
#define pii pair<int,int>
#define pip pair<int,pii>
#define ppi pair<pii,int> 
#define ppp pair<pii,pii>
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define ff first
#define ss second
#define warmup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 200003, mod=1e9+7;
const ll inf=(1e18+11);  
 
signed main()
{
    warmup
    
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll l,r,m;
        cin>>l>>r>>m;
        ll ma=r-l,i,j,a,b,c;
        
        for(i=l;i<=r;++i)
        {
            if(i>m)
            {
                if(i-m<=ma)
                {
                    a=i;b=l;c=l+(i-m);
                    break;
                }   
            }
            else
            {
                if((m%i)<=ma)
                {
                    a=i;c=l;b=l+(m%i);
                    break;
                }
                else if((m/i+1)*i - m <= ma)
                {
                    a=i;b=l;c=l+i-(m%i);
                    if(c<=r and c>=l)
                        break;
                }   
            }
        }   
        cout<<a<<' '<<b<<' '<<c<<'\n';
    }   
    
    return 0;
}