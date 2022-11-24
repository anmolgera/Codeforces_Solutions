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
const int N = 1e6 + 5 ;
int  freq[N];
bool dp[2005][2005];
 
 
int32_t main()
{
    anmol();
    
     int t;
     cin>>t;
 
     while(t--){
 
     int n;
     cin>>n;
 
      vector<int> v;
      int mx =0, cnt =0;
      for(int i = 0; i < 2*n; i++) {
    int x; cin >> x;
    if(x > mx) {
      if(cnt) v.push_back(cnt);
      mx = x;
      cnt = 1;
    } else {
      cnt += 1;
    }
  }
  
  v.push_back(cnt);
 
 
  int m = v.size();
 
  int sum = n;
  for(int i =0; i<=m; i++){
 
    dp[i][0] = true;
  }
 
  for(int j =1; j<=sum; j++){
 
    dp[0][j] = false;
  }
 
  
  for(int i =1; i<=m; i++){
 
 
 
    for(int j =1; j<=sum; j++){
 
 
           if(j<v[i-1]){
 
            dp[i][j] = dp[i-1][j];
           }
 
           if(j>=v[i-1]){
 
            dp[i][j] = dp[i-1][j] || dp[i-1][j-v[i-1]];
           }
 
 
    }
  }
 
 /* for(int i =0; i<m; i++){
 
 
 
    for(int j =0; j<n; j++){
 
 
        cout<<dp[i][j]<<" ";
    }
 
    cout<<endl;
  }
*/
  
  
 
  if(dp[m][sum]){
 
    cout<<"YES"<<endl;
  }
 
  else cout<<"NO"<<endl;
 
  /*for(int i=0; i<v.size(); i++) cout<<v[i]<<" "; 
    cout<<endl;*/
}}