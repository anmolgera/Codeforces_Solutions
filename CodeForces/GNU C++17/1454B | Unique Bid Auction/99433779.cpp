/* Author : Anmol Gera
NSIT 4th Year */
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
void anmol()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
 
bool isPerfectSquare(long double x) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 
 
/*
while(lo < hi) {
int mid = lo + (hi - lo) / 2;
if(Special condition passed)(optional):
  return mid; 
if(condition passed)
  hi = mid;
else 
  lo = mid + 1;
}
return lo;
*/
 
void solve(){
 
int n;
cin>>n;
 
int a[n+1];
for(int i =0; i<n; i++){
 
  cin>>a[i];
}
 
map<int,int> mp;
for(int i =0; i<n; i++){
 
  mp[a[i]]++;
}
 
int mx = INT_MAX;
 
 
for(auto i : mp){
  if(i.second==1 && i.first < mx){
 
    mx = i.first;
  }
 
}
 
if(mx == INT_MAX){
  cout<<-1<<endl;
}
 
else {
 
  for(int i =0; i<n; i++){
 
    if(mx==a[i]){
      cout<<i+1<<endl;
      break;
    }
  }
 
 
}
 
 
 
 
}
 
 
 
 
 
int32_t main(){
 
 
  anmol();
  int t;
  ///t =1;
  cin>>t;
  while(t--){
        
        //int a,b;
        //cin>>a>>b;
 
    solve();
 
        //cout<<fact[a] - fact[b];
        // look for base cases always 
 
 
 
  }
 
}