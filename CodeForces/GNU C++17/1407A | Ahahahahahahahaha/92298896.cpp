#include<bits/stdc++.h>
using namespace std;
#define int long long
 
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
 
 
 
 
 
 
int a[200005];
int32_t main(){
 
int t;
cin>>t;
while(t--){
 
  int n;
  cin>>n;
  int z =0;
  int o =0;
  for(int i =0; i<n; i++){
 
    cin>>a[i];
    if(a[i]==0){
      o++;
    }
 
    else z++;
  }
 
 
  if(o>=z){
     cout<<n/2<<endl;
     for(int i =0; i<n/2; i++){
 
      cout<<0<<" ";
     }
 
     cout<<endl;
 
 
  }
 
  else {
 
n = n/2;
if(n%2){
  n++;
}
cout<<n<<endl;
for(int i =0; i<n; i++){
 
      cout<<1<<" ";
     }
 
     cout<<endl;
 
 
 
 
 
  }
 
}
}