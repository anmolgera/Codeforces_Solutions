 
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
 
 
int32_t  main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n;
  cin>>n;
        
 
        if(n==1){
 
         cout<<"FastestFinger"<<endl;
        }
 
  else if(n%2==1){
 
   cout<<"Ashishgup"<<endl;
  }
 
 
  else if(n==2){
 
   cout<<"Ashishgup"<<endl;
  }
 
 
  else{
 
 
          int count =0;
          for(int i =2; i*i<=n; i++){
 
               if(n%i==0){
 
 
                   if(i%2==1){
 
                         if((n/i)!=2){
                          count =1;
                          break;
                         }
 
 
                   }
                
 
                 else if((n/i)%2==1){
 
                          
 
                      if((i)!=2){
                          count =1;
                          break;
                         }
 
 
                 }
 
 
               }
 
 
 
 
 
 
 
 
 
 
          }
         
 
            
            if(count ==0){
 
                 
            cout<<"FastestFinger"<<endl;
 
            }
         
 
         else {
 
          cout<<"Ashishgup"<<endl;
         }
 
 
  }
 
 
 
  
 }
}
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  