#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pro ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(x)  x.begin(),x.end()
#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define mem(x,n) memset(x,n,sizeof(x))
#define endl "\n"
const int mod=998244353;
int powmod(int a,int b) {int res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
const int N=2e5+100;
vector<int> graph[N];
bool used[N];
 
void addEdge(int v,int u){
    graph[v].push_back(u),graph[u].push_back(v);
}
 
void dfs(int v){
    used[v]=true;
    for(auto x:graph[v]){
        if(!used[x]){
            dfs(x);
        }
    }
}
 
signed main(){
    pro
    int t;
    t=1;
    while(t--){
        int n;
        cin>>n;
        mem(used,false);
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(char c:s){
                addEdge(i,c+n-'a');
            }
        }
 
        int ans=0;
        for(int i=n;i<n+26;i++){
            if(!used[i]&&!graph[i].empty()){
                dfs(i);
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
 
 
 