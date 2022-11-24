 #include<bits/stdc++.h>
 #include<string.h>
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
  
 
 bool sign(int num){
  return num>0;
 }
 
 
 
bool isprime(int n){
 
 
for(int i =2; i*i<=n; i++){
   if(n%i==0){
  return false;
 }
}
return true;
 
}
 
 
 
 
 
 
 
int32_t minnoofsteps(int n, int m , int dp[][10001]){
      
 
 
      if(n-m ==1 || m == 2*n){
       return 1;
      }
 
      if(dp[n][m]!=-1){
       return dp[n][m];
      }
 
     int x,y;
     y = INT_MAX;
     x = INT_MAX;
 
 
     x = minnoofsteps(n-1,m,dp);
     if(m%2==0){
      y = 1 + minnoofsteps(n,m/2,dp);
     }
 
 
     return dp[n][m] = min(x,y) +1;
 
 
} 
 
int32_t main()
   {
   anmol();
     
      
 
        int n,m;
        cin>>n>>m;
        int k =0;
         
       while(n<m){
 
        if(m%2==0){
         m = m/2;
        }
 
 
       else m++;
       k++;
 
 
 
       }
 
       cout<<k+n-m<<endl;
 
     }
      
 
 
 
 
       
     
   
 
     
     
 
 
     
 
   
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
     
 
   