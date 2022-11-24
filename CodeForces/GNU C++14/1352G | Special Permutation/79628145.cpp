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
#define vi              vector<int>
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
 
 
 
int32_t main()
{
   anmol();
 
int t;
cin>>t;
while(t--){
 
int n,b;
cin>>n;
 
int arr[1000];
memset(arr,-1,sizeof(arr));
 
for(int i =1;i<=n; i++){
 
arr[i] = i;
 
 
}
 
if (n%2 && n>3)
{
 for (int i = 1; i <=n ; i = i+2)
 {
  cout<<arr[i]<<" ";
 }
 
 cout<<arr[n-3]<<" "<<arr[n-1]<<" ";
 
 for(int i = n-5; i>=1; i=i-2){
 
 
  cout<<arr[i]<<" ";
 }
 cout<<endl;
 
}
 
else if (n%2==0 && n>2){
 
 
for (int i = 2; i <=n ; i = i+2)
 {
  cout<<arr[i]<<" ";
 }
 
 cout<<arr[n-3]<<" "<<arr[n-1]<<" ";
 
 for(int i = n-5; i>=1; i = i-2){
 
 
  cout<<arr[i]<<" ";
 }
 
 
cout<<endl;
 
 
 
 
 
 
 
}
 
else cout<<-1<<endl;
 
 
 
}
 
 
 }
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  