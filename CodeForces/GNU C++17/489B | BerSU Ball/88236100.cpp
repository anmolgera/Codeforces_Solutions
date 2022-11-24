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
    
  int n;
  cin>>n;
 
  for(int i =0; i<n; i++){
 
    cin>>a[i];
  }
 
  int m;
  cin>>m;
 
  for(int i =0; i<m; i++){
 
    cin>>b[i];
  }
 
  int ans =0;
 
  sort(a,a+n);
  sort(b,b+m);
 
  for(int i =0; i<n; i++){
 
    for(int j =0; j<m; j++){
 
         if(abs(a[i]-b[j])<=1){
 
          ans++;
          a[i] = 1000;
          b[j] = 102;
         }
 
         
 
    }
  }
 
 
  cout<<ans<<endl;
 
    }
 
 
 
 
    
 
 
   