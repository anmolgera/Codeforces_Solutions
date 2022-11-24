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
int a[N] , dp[N] , brr[N];
 
 
 
 
int32_t main()
{
   anmol();
  int t;
  cin>>t;
  while(t--){
 
 int n;
 cin>>n;
 
 
 int max =INT_MIN;
 //set<int > s;
 
 for(int i =0; i<n; i++){
 
 
  cin>>a[i];
    if(a[i]>max){
 
     max = a[i];
    }
 }
 
int j;
int result=0;
int flag =0;
unordered_set<int> s;
sort(a,a+n);
if(n%2==1){
 
 cout<<-1<<endl;
}
 
 
 
 //cout<<max<<endl;
 
else{
 for(int i =0; i<=2*max; i++){
 
     
    for(int k =0; k<n; k++){
 
       s.insert(a[k]);
 
 
 
    }
 
    
    
    for( j =0; j<n; j++){
 
      if (s.find(i^a[j]) != s.end()) {
        result++; 
        // Make element visited 
        s.erase(a[j]); 
        s.erase(i^a[j]);
 
        if(s.size()==0){
         break;
        }
 
       
      }
 
 
 
    }
 
   if(s.size()==0 && result ==n/2){
 
    cout<<i<<endl;
    flag =1;
    break;
   }
 
   else {
    result =0;
    int d=0;
    while(s.size()!=0){
     s.erase(a[d]);
     d++;
 
    }
 
 
    continue;
   }
 
 
 
 }
 
 
if(flag!=1){
cout<<-1<<endl;
}
}
}
}
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  