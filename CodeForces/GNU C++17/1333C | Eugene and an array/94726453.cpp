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
 
 
 
int n,m;
cin>>n;
 
 
int a[n+1];
int b[n];
 
map<int,int> mp;
int sum =0;
int sex =0;
mp[0] =1;
int ans =0;
int pos =0;
 
for(int i =1; i<=n; i++){
 
  cin>>a[i];
  sum+=a[i];
  
  pos = max(pos,mp[sum]);
  ans+=(i-pos);
  mp[sum]=i+1;
 
 
 
}
 
cout<<ans<<endl;
 
 
 
 
 
 
 
}