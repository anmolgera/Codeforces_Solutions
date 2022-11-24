#include<bits/stdc++.h>
using namespace std;
#define int long long
/*int n1,n2,k1,k2;
int cache[102][102][12][12];
#define MOD 100000000
*/
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
//#define mk(arr,n,type)  type *arr=new type[n];
//#define ml(brr,n,type)  type *brr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int32_t  main()
{
 
 
#ifndef ONLINE_JUDGE
freopen("i.txt", "r", stdin);
freopen("o.txt", "w", stdout);
#else
// online submission
 
#endif
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
  cin>>arr[i];
 
}
sort(arr,arr+n);
 
vector<int> v(n,0);
int j=0;
 
for(int i=1;i<v.size();i+=2)
{
  v[i]=arr[j++];
}
for(int i=0;i<n;i++)
{
  if(v[i]==0)
  {
    v[i]=arr[j++];
  }
}
int ans=0;
for(int i=1;i<n-1;i++)
{
  if(v[i]<v[i+1] && v[i]<v[i-1])
  {
    ans++;
  }
}
cout<<ans<<endl;
for(auto i:v)
{
  cout<<i<<" ";
}
 
}