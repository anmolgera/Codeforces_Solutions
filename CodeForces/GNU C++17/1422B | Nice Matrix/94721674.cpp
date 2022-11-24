#include <bits/stdc++.h>
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
 
int a[102][102];
 
int func(int k,int n, int m){
 
int sex =0;
for(int i =0; i<n; i++){
 
  for(int j =0; j<m; j++){
    
    sex+=abs(a[i][j]-k);
 
  }
 
 
}
 
return sex;
 
 
 
 
}
 
int32_t main(){
 
 
anmol();
 
int t;
cin>>t;
 
while(t--){
 
int n,m;
cin>>n>>m;
 
for(int i =0; i<n; i++){
 
  for(int j =0; j<m; j++){
 
    a[i][j] =0;
  }
}
 
for(int i =0; i<n; i++){
 
  for(int j =0; j<m; j++){
 
    cin>>a[i][j];
  }
}
 
int ans =0;
int mn = INT_MAX;
 
for(int i =0; i<n/2; i++){
 
   for(int j =0; j<m/2; j++){
 
            
         mn = INT_MAX;
         int  tt = a[i][j];
         mn = min(mn, abs(tt-a[i][j]) + abs(tt-a[n-i-1][j]) + abs(tt-a[i][m-j-1]) + abs(tt- a[n-1-i][m-1-j]));
 
          tt = a[n-i-1][j];
        mn = min(mn, abs(tt-a[i][j]) + abs(tt-a[n-i-1][j]) + abs(tt-a[i][m-j-1]) + abs(tt- a[n-1-i][m-1-j]));
 
         tt = a[i][m-j-1];
        mn = min(mn, abs(tt-a[i][j]) + abs(tt-a[n-i-1][j]) + abs(tt-a[i][m-j-1]) + abs(tt- a[n-1-i][m-1-j]));
        
        
         tt = a[n-i-1][m-j-1];
        mn = min(mn, abs(tt-a[i][j]) + abs(tt-a[n-i-1][j]) + abs(tt-a[i][m-j-1]) + abs(tt- a[n-1-i][m-1-j]));
 
        ans+=mn;
   }
 
}
 
if(n%2){
 
  for(int i =0; i<m/2; i++){
 
         ans+= abs(a[n/2][i]-a[n/2][m-i-1]);
 
  }
}
 
if(m%2){
 
 
 
  for(int i =0; i<n/2; i++){
    
    ans+=abs(a[i][m/2]-a[n-i-1][m/2]);
 
  }
}
 
cout<<ans<<endl;
 
}
 
 
 
 
}