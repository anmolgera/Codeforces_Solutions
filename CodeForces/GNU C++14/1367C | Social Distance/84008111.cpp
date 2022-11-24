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
#define mo              unordered_map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
//#define zrobits(x)      __builtin_ctzll(x)
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
int a[N] , dp[N] , brr[N];
 
 
 
 
 
int32_t main()
{
   anmol();
  int t;
  cin>>t;
 while(t--){
 int n,k;
 cin>>n>>k;
 
 string s;
 cin>>s;
 int count =0;
 
 vector<int> v;
 
 for(int i =0; i<n; i++){
 
  if(s[i]=='1'){
   v.push_back(i);
  }
 }
 
 
int m = v.size();
if(m==0){
 cout<<1+(n-1)/(k+1)<<endl;
}
 
 
 else {
 
 for(int i =1; i<v.size(); i++){
 
   int diff = v[i]-v[i-1]-1;
   count+=(diff-k)/(k+1);
 
 }
 
 
 
 
 
 int x = v[0]/(k+1);
 if(x>0){
  count+=x;
 }
 
 int y = (n-1-v[m-1])/(k+1);
 if(y>0){
  
  count+=y;
 
 }
 
 cout<<count<<endl;
}
}
}
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  