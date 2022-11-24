#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
const int N = 1e6 + 5 ;
int  a[N];
int  b[N];
bool dp[2005][2005];
 
int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
 
bool valid(int x,int y,int n,int m){
    if(x>=0 && y>=0 && x<n && y<m)
    return true;
    return false;
}
 
 
 
 
int32_t main(){
    
  anmol();
 
  int t;
  cin>>t;
 
  while(t--){
    
    int x,y;
    cin>>x>>y;
 
     if(2*x>y){
 
      cout<<-1<<" "<<-1<<endl;
     }
 
     else cout<<x<<" "<<2*x<<endl;
 
  }
 }
   