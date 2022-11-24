/* Author : Anmol Gera
NSIT 4th Year */
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define mod2            998244353
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define ml(brr,n,type)  type *brr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
void anmol()
{
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
 
bool check (string s){
 
 int i =0;
 int j = s.length()-1;
 
 
 while(i<=j){
 
  if(s[i]!=s[j]){
   return false;
  }
  i++;
  j--;
 
 }
 
 
 return true;
 
 
}
 
//vector< int> adj[100002];
//vector<int> vis (100002,0);
 
bool isprime(int n){
 
 for(int i =2; i*i<=n; i++){
 
  if(n%i==0){
   return 0;
  }
 }
 
 return 1;
 
}
 
 
//int dp[2005][2005];
void solve(){
 
 int n;
 cin>>n;
 
 string s;
 cin>>s;
 
 int ans =0;
 int ans1 =0;
 int count =0;
 
 for(int i =0; i<n; i++){
 
   if(s[i]=='<'){
    ans++;
   }
 
   else if(s[i]=='>'){
    ans1++;
   }
 
   else {
 
    ans++;
    ans1++;
   }
 
 
 
 }
 
 if(ans == n || ans1 == n){
 
  cout<<n<<endl;
  return;
 }
 
 
 ans =0;
 ans1 =0;
 /*for(int i =0; i<n-1; i++){
 
   if(s[i]=='>' || s[i+1] == '<'){
 
    ans++;
   }
 
  if(s[i]=='<' || s[i+1] == '>'){
 
    ans1++;
   }
 }
 
 */
 
 vector<int>dp(n,0);
 
 for(int i =0; i<n; i++){
 
  
  if(s[i]=='-'){
     dp[i] =1;
 
     if(i==n-1){
 
      dp[0] =1;
     }
     else dp[i+1] =1;
 }
}
 
 for(int i =0; i<n; i++){
 
  if(dp[i]==1){
   count++;
  }
 }
 
 cout<<count<<endl;
 return;
 
 
 
}
 
int32_t main(){
 
 
 anmol();
 int t;
 //t =1;
 cin>>t;
 while(t--){solve();}
 //solve();
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 