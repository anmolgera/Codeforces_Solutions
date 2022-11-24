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
 
 
 
void solve(){
 
int d;
cin>>d;
 
int k;
cin>>k;
 
int mxturns =0;
 
for(int i =0; i<=d; i++){
 
 
 int j = sqrtl(d*d-i*i);
 int yturns = j/k;
 int xturns = i/k;
 
  mxturns = max(xturns+yturns,mxturns); 
 
 
 
}
 
 
if(mxturns%2)cout<<"Ashish"<<endl;
else cout<<"Utkarsh"<<endl;
 
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