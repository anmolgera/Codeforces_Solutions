 
        
        
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
//#define my              unordered_map<int,int>
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
int a[N] , dp[N] , freq[N];
 
 
 
int32_t main(){
 
  anmol();
  int t;
  cin>>t;
  while(t--){
   
   int n,k;
   cin>>n>>k;
  
    
    for(int i =0; i<n; i++){
 
 
     cin>>a[i];
    }
 
    vector<int> v;
    vector<int> v1;
 
 
 
   
   for(int i =0; i<n; i++){
 
 
 
    if(a[i]%k==0){
 
     v1.push_back(a[i]);
    }
  
 
  else v.push_back(a[i]);
 
   }
 
 
 
   
   map<int,int> my;
 
   //reverse(v.begin(),v.end());
 
   sort(v.begin(),v.end());
 
 
   for(int i =0; i<v.size(); i++){
 
   my[v[i]%k]++;
    
 
   }
 
   int max_count =0;
   int max_element=0;
   for(auto i = my.begin(); i!=my.end(); i++){
 
     if(i->second>max_count){
 
      max_count =i->second;
      max_element = i->first;
     }
 
 
 
 
   }
 
//cout<<max_count<<" "<<max_element<<endl;
 
int ans =0;
 
 
if(max_element>0){
if(max_count>1){
ans += (k*(max_count-1)+k-max_element+1);
}
 
else ans +=k-max_element+1;
}
 
 
 
 
cout<<ans<<endl;
 
 
 
 
 
}
 
}
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  