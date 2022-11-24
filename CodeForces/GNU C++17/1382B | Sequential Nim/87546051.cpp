#include<bits/stdc++.h>
using namespace std;
 
#define fastio          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define sze             200005
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define pr(x);          for(auto el : x) cout<<el<<' '; cout<<'\n';
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define pw(b,p)         pow(b,p) + 0.1
#define mxel            max_element
#define mnel            min_element
#define db(...)         debug(#__VA_ARGS__, __VA_ARGS__)
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template <typename Arg1> void debug(const char* name, Arg1&& arg1){cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void debug(const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " = " << arg1;
    debug(comma, args...);
}
 
void c_p_c()
{
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("output.txt", "w", stderr);
    #endif
}
 
const int N = 1e6 + 5 ;
int a[N] , b[N] , freq[N];
 
int32_t main()
{
    c_p_c();
    
     int t;
     cin>>t;
 
     while(t--){
 
    int n,m;
    cin>>n;
 
 
    for(int i =0; i<n; i++){
 
        cin>>a[i];
 
 
    }
 
   
    if(a[0]==1){
 
        int count =0;
    for(int i =0; i<n; i++){
   
          if(a[i]==1){
 
            count++;
          }
 
          else break;
 
         
 
 
    }
 
 
    if(count ==n){
 
 
        if(count%2){
 
            cout<<"First"<<endl;
        }
 
        else cout<<"Second"<<endl;
    }
 
 
 
    else if(count!=n){
 
         if(count%2){
 
            cout<<"Second"<<endl;
         }
 
         else cout<<"First"<<endl;
 
    }
    }
 
 
    else cout<<"First"<<endl;
 
   
 
 
     }
 
 
}