 
        
        
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
 int b[N] , freq[N];
 
 
 
 
int32_t main(){
 
  anmol();
  
   int t;
   cin>>t;
 
   while(t--){
 
 
 
    int n,m;
    cin>>n>>m;
 
    int a[n][m];
 
   for(int i =0; i<n; i++){
 
 
    for(int j =0; j<m; j++){
     
     cin>>a[i][j];
 
 
 
 
 
    }
   }
 
 
   int temp[n][m];
 
 
   temp[0][0] =2;
   temp[0][m-1] =2;
   temp[n-1][0] =2;
 
   temp[n-1][m-1] =2;
 
   for(int i =1; i<m-1;i++ ){
 
 
    temp[0][i] =3;
    temp[n-1][i] =3;
   }
  
 
  for(int i =1; i<n-1;i++ ){
 
 
    temp[i][0] =3;
    temp[i][m-1] =3;
   }
  
 
  for(int i =1; i<n-1; i++){
 
 
   for(int j =1; j<m-1; j++){
 
 
    temp[i][j] = 4;
   }
  }
 
bool flag = true;
 for(int i =0; i<n; i++){
 
 
 
  for(int j =0; j<m; j++){
 
      if(temp[i][j] < a[i][j]){
 
       flag = false;
       break;
      }
 
 
  }
 }
 
if(flag){
 
 
 cout<<"YES"<<endl;
 
 
 for(int i =0; i<n; i++){
 
  for(int j =0; j<m; j++){
 
 
  cout<<temp[i][j]<<" ";
 
 }
 
 cout<<endl;
 }
}
 
 
else cout<<"NO"<<endl;
 
 
  }
 
 
 
}
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  