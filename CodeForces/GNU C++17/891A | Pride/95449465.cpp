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
 
 
 
void solve(){
 
 int n;
 cin>>n;
 int a[n+1];
 for(int i =1; i<=n; i++){
 
  cin>>a[i];
 }
 
 
 int g =0;
 int cnt =0;
 
 for(int i =1; i<=n; i++){
 
  g = __gcd(g,a[i]);
  if(a[i]==1){
   cnt++;
  }
 }
 
 if(g>1){
  cout<<-1<<endl;
  return;
 }
 
 
 if(cnt>0){
  cout<<n-cnt<<endl;
  return;
 }
    
    int minlen = n;
 
    for(int i =1; i<=n; i++){
        
         int curr =0;
 
        int j;
        for(j =i; j<=n; j++){
 
             curr = __gcd(a[j],curr);
 
             if(curr ==1){
              break;
             }
 
 
 
        }
 
        if(curr == 1){
 
         minlen = min(minlen , j-i);
        }
 
 
 
 
 
    }
 
cout<<minlen + n-1<<endl;
return;
 
}
 
int32_t main(){
 
 
 anmol();
 int t;
 t =1;
 //cin>>t;
 while(t--){solve();}
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 