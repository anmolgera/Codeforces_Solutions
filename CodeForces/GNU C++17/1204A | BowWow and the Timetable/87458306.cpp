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
 
 
bool ans(string s, int index ,string req ){
 int n = s.length();
 for(int i =0; i<7; i++){
 
   if(s[index+i]==req[i]){
       
       continue;
 
   }
 
 
   if(s[index+i]=='?'){
   
      s[index+i] = req[i];
 
 
   }
 
   else return false;
 
 }
 
 
 for(int i =0; i<n; i++){
 
   if(s[i]=='?'){
 
    s[i] ='z';
   }
 
 }
 
 int count =0;
 for(int i =0; i<=n-7; i++){
 
     if(s.substr(i,7)==req){
 
      count++;
     }
 
 
 
 }
 
 
 if(count==1){
 
  cout<<"YES"<<endl;
  cout<<s<<endl;
  return true;
 }
 
 else return false;
 
 
 
 
}
 
 
int32_t main(){
    anmol();
 
 
   
 
   //int n;
   //cin>>n;
 
   string s;
   cin>>s;
 
   
 
   int n = s.size();
 
   if(n==0){
 
    cout<<0<<endl;
    //return 0;
   }
   else{
   int count =0;
   for(int i =0; i<s.size(); i++){
 
     if(s[i]=='1'){
 
      count++;
     }
   }
    
  if(count ==0){
 
    cout<<0<<endl;
  }
  else if(count==1) cout<<s.size()/2<<endl;
  
   else cout<<(s.size()+1)/2<<endl;
  }
  } 
  