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
 
 int fib(int n){
    if(n==0 || n==1){
     return 1;
    }
 
    return fib(n-1) + fib(n-2);
  }
 
int32_t main()
{
   anmol();
 
  int t;
  cin>>t;
 
  while(t--){
 
  int a,b;
  cin>>a>>b;
 
   int prev =0;
   int prev2 =0;
  
  //int i =0;
 
  
 
if(a%2==0){
 cout<<a + b*2<<endl;
 
}
 
else {
 
 
 for(int i =3; i<=sqrt(a); i = i+2){
    
       if(a%i==0){
        prev2 =i;
        break;
       }
 
      
 }
  if(prev2 ==0){
   prev2 = a;
  }
 
cout<<prev2 +a + (b-1)*2<<endl;
}
 
 
 
 
 
 
 
  }
 
 
  
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  