#include <bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>
 
using namespace __gnu_pbds;
 
///#define int long long
#pragma GCC optimize ("O3")
#define ll long long
#define vec vector <int>
#define rep(i,a,b) for (ll i=a;i<b;i++)
#define repD(i,a,b) for (ll i=a;i>b;i--)
#define pb push_back
#define pii pair <int,int>
#define mp make_pair
#define ff first
#define ss second
#define all(a) a.begin(),a.end()
#define maa 1000000007
#define Eps 1e-9
#define PI 3.14159265359
 
typedef tree<pii,null_type,less <pii >,rb_tree_tag,tree_order_statistics_node_update>ind_set;
typedef gp_hash_table<int, int, hash<int> > ht1;   /// if clear is required
typedef cc_hash_table<int, int, hash<int> > ht2;
 
///*X.find_by_order("index")
///X.order_of_key("key")
 
///----------------------------------------------------------------------------------
 
 
int n,m;
vec adj[1005];
bool vis[1005];
pii info[1005];
vec crit;
vector <pair<pii,int> > VP;
pii dfs1(int so,int p,int ht=0)
{
    pii ret=mp(ht,so);
    for (auto x:adj[so])
    {
        if (x==p)continue;
        pii te=dfs1(x,so,ht+1);
        if (ret.ff<te.ff)
        {
            ret=te;
        }
    }
    return ret;
 
}
pii dfs2(int so,int p)
{
    vis[so]=true;
    pii ret=mp(info[so].ff,so);
    for (auto x:adj[so])
    {
        if (x==p)continue;
        pii te=dfs2(x,so);
        if (te.ff<ret.ff)ret=te;
    }
    return ret;
}
void solve()
{
    cin>>n>>m;
    int a,b;
    rep(i,0,m)
    {
        cin>>a>>b;adj[a-1].pb(b-1);adj[b-1].pb(a-1);
    }
    rep(i,0,n)
    {
        info[i]=dfs1(i,-1);
    }
    rep(i,0,n)
    {
        info[i].ss=info[info[i].ss].ff;
    }
    fill(vis,vis+n,false);
 
    rep(i,0,n)
    {
        if (!vis[i])
        {
            crit.pb(dfs2(i,-1).ss);
        }
    }
    int ans=0;
    for (auto x:crit)
    {
        VP.pb(mp(info[x],x));
 
    }
    sort(all(VP));
    reverse(all(VP));
    string OP="";
    if (VP.size()==1)
    {
        cout<<VP[0].ff.ss<<"\n";return;
    }
    rep(i,1,VP.size())
    {
        OP+=to_string(VP[0].ss+1)+" "+to_string(VP[i].ss+1)+"\n";
 
    }
    rep(i,0,n)
    {
        ans=max(ans,info[i].ss);
        //cout<<info[i].ff<<" "<<info[i].ss<<"\n";
    }
    if (VP.size()>1)ans=max(ans,VP[0].ff.ff+1+VP[1].ff.ff);
    if (VP.size()>2)ans=max(ans,VP[2].ff.ff+2+VP[1].ff.ff);
    cout<<ans<<"\n";
    cout<<OP;
}
 
signed main()
{
 
    srand(time(NULL));
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
///freopen("input.txt","r",stdin);
///freopen("output.txt","w",stdout);
 
    int t=1;
/// cin>>t;
    rep(a,0,t)
    {
 
        ///cout<<"Case "<<a+1<<": ";
        solve();
    }
}