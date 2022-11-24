#include<bits/stdc++.h>
using namespace std;
#define int long long
//vector<int> adj[200005];
//vector<int> vis(200005,0);
//vector<int> deg(200005,0);
 
 
 
 
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
//#define vi              vector<int>
#define mii             map<int,int>
#define my              unordered_map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define ml(brr,n,type)  type *brr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
/*void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
*/
 
 /*void dfs(int node, int &vertices, int& edges){
 
 
    if(vis[node]){
        return;
    }
    //cout<<"sex"<<endl;
    vis[node] = 1;
    ++vertices;
    
    edges +=adj[node].size();
 
    for(int i : adj[node]){
   
       if(!vis[i]){
       
        dfs(i,vertices,edges);
       }
 
    }
 
 }
 
*/
 
 
 int32_t main(){
   anmol();
   
   int t;
    cin>>t;
 
    while(t--){
 
        int n;
        cin>>n;
 
 
        vector<int> v(n,0);
 
        int pos=0;
        int neg=0;
        int zero=0;
 
        for(int i=0;i<n;i++){
            cin>>v[i];
 
            if(v[i]==0){
                zero++;
            }
 
            else if(v[i]>0){
                pos++;
            }
            else{
                neg++;
            }
 
        }
 
        sort(v.begin(),v.end());
 
          int ans=1;
 
        if(pos==0 && zero==0){
 
 
 
            for(int i=n-1;i>=n-5;i--){
                ans*=v[i];
            }
 
 
 
        }
 
        else if(pos==0){
            ans=0;
        }
 
        else if(pos==1 || pos==2){
 
            for(int i=0;i<4;i++){
                ans*=v[i];
            }
 
            ans*=v[n-1];
 
        }
 
        else if(pos==3 || pos==4){
 
            // 4-1 and 2-3 combinations possible
 
            int ans1=1;
            int ans2=1;
 
            for(int i=0;i<4;i++){
                ans1*=v[i];
            }
 
            ans1*=v[n-1];
 
            ans2*=v[0];
            ans2*=v[1];
            ans2*=v[n-1];
            ans2*=v[n-2];
            ans2*=v[n-3];
 
            ans=max(ans1,ans2);
 
        }
 
        else{
 
            // 4-1  2-3  0-5
 
          int ans1=1;
          int ans2=1;
          int ans3=1;
 
            for(int i=0;i<4;i++){
                ans1*=v[i];
            }
 
            ans1*=v[n-1];
 
            ans2*=v[0];
            ans2*=v[1];
            ans2*=v[n-1];
            ans2*=v[n-2];
            ans2*=v[n-3];
 
            //ans=max(ans1,ans2);
 
            for(int i=n-1;i>=n-5;i--){
                ans3*=v[i];
            }
 
            ans=max(ans1,max(ans2,ans3));
 
        }
 
        cout<<ans<<endl;
    }
 
    return 0;
 }
 
 
 
 
 
 