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
int a[N] , dp[N] , b[N];
 
 
 
int32_t main()
{
   anmol();
   int t;
   cin>>t;
 
   while(t--){
 
 
  int n;
  cin>>n;
 
 
   for(int i =1; i<=2*n; i++){
 
     cin>>a[i];
 
 
 
   }
 
 // int countodd =0;
  //int counte =0;
 
    vector<int> v;
    vector<int> v1;
 
   for(int i =1; i<=2*n; i++){
 
    if((a[i]%2)==0){
     v.push_back(i);
    }
   
    else v1.push_back(i);
 
 
   }
 
   if(n==1){
    cout<<" "<<endl;
   }
 
 
   else{
 
     int x = v.size();
        int y = v1.size();
 
   if(x%2 ==1){
      
      //v.erase(v.begin());
      //v1.erase(v1.begin());
 
       
 
         for (int i = 0; i<x-1; i = i+2) 
        cout << v[i] <<" "<<v[i+1]<<endl; 
     
   
 
         for (int i = 0; i<y-1; i = i+2) 
        cout << v1[i] <<" "<<v1[i+1]<<endl; 
   
   }
 
 
 else{
  
   
 
    
         int count =0;
         for (int i = 0; i<x; i = i+2) {
 
          if(i==0){
           count =1;
           continue;
 
          }
        cout << v[i] <<" "<<v[i+1]<<endl; 
       
     
   }
 
 
 
    for (int i = 0; i<y; i = i+2) {
 
     if(count ==0 && i==0){
      continue;
     }
        cout << v1[i] <<" "<<v1[i+1]<<endl; 
 
 
    }
   
 
 
 }
}
 
 
}
 
   }
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  