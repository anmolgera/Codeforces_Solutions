 #include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
 
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
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
const int N = 1e6 + 5 ;
int a[N],cnt[N];
int n,q;
 
 
 
 
int32_t main()
{ 
  anmol();
 
 int t;
 cin>>t;
 
 while(t--){
 
  int n,m;
  cin>>n>>m;
 
 /* vector<vector<string>> v;
 
 
  for(int i =0; i<n; i++){
   vector<string> v1;
   for(int j =0; j<m; j++){
       
      
 
       string ch;
       cin>>ch;
 
       v1.push_back(ch);
      
 
   }
 
   v.push_back(v1);
 
  }
 
  
  for(int i =0; i<n; i++){
 
   for(int j =0; j<m; j++){
 
    cout<<v[i][j]<<" ";
   }
 
  cout<<endl;
 
  }
*/
 
 
 
  char dp[101][101];
 
  for(int i =0; i<n; i++){
    
    for(int j =0; j<m; j++){
 
         char ch;
         cin>>ch;
 
         dp[i][j] = ch;
      
 
    }
 
 
 
 
  }
 
  int count  =0;
 
  for(int j =0; j<n; j++){
 
    if(dp[j][m-1]=='R'){
 
        count++;
    }
  }
 
  for(int i =0; i<m; i++){
  
  if(dp[n-1][i]=='D'){
 
    count++;
  }
 
  }
 
 
 
 cout<<count<<endl;
 
 
   }
}
 
 
 
 