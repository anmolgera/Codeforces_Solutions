#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
 
typedef long long int ll ;
typedef vector<long long int> vi;
typedef pair<ll,ll> pi;
typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;
 
#define PB push_back
#define EB emplace_back
#define REP(i,a,b) for(long long int i=a ; i<=b ; i++)
#define F first
#define S second
#define MP make_pair
#define INF 100000000000
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,cf,cb,i,j,mx;
    cin>>n;
    ll a[n+1];
    REP(i,1,n)
        cin>>a[i];
    i=0;
    j=n+1;
    cf=cb=mx=0;
    while(i<j)
    {
        if(cf==cb)
        {
            if(cf>mx)
                mx=cf;
            i++;
            j--;
            cf+=a[i];
            cb+=a[j];
        }
        else if(cf>cb)
        {
            j--;
            cb+=a[j];
        }
        else
        {
            i++;
            cf+=a[i];
        }
    }
    cout<<mx;
    return 0;
}