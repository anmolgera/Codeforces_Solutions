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
 
 
 
 
 
void solve(){
 
int n;
cin>>n;
 
int q;
cin>>q;
 
string s;
cin>>s;
 
vector<pair<int,int>> v(n,{0,0});
 
int count0 =0;
int count1 =0;
 
for(int i =0; i<n; i++){
 
 if(s[i]-'0'==1){
 
  count1++;
 }
 
 else count0++;
 
 
 v[i].first = count0;
 v[i].second = count1;
 
 
 
 
}
 
 
for(int i =0; i<q; i++){
 
 int x,y;
 cin>>x>>y;
 
bool  flag = false;
 
char ch1 = s[x-1];
char ch2 = s[y-1];
 
for(int i =0; i<x-1; i++){
  
  if(s[i]==ch1){
    flag = true;
  }
 
 
}
 
 
for(int i = y; i<n; i++){
 
  if(s[i]==ch2){
    flag = true;
  }
}
 
 
if(flag){
 
  cout<<"YES"<<endl;
}
 
else cout<<"NO"<<endl;
 
 
 
 
 
 
 
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