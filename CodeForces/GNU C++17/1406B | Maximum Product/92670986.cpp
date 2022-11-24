#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 1000000000000000000;
 
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
 
         int a[n];
        for(int i =0; i<n; i++){
 
 
          cin>>a[i];
        }
 
 
   
    int ans = -1*INF;
    sort(a,a+n);
 
    ans = max(a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5],ans);
    ans = max(a[n-1]*a[n-2]*a[n-3]*a[1]*a[0],ans);
    ans = max(a[n-1]*a[3]*a[2]*a[1]*a[0],ans);
    //cout<<a[n-1]*a[3]*a[2]*a[1]*a[0]<<endl;
 
  cout<<ans<<endl;
 
     }
     
 }
 
 
 
 
 
 