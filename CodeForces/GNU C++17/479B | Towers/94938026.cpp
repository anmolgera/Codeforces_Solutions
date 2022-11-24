#include <bits/stdc++.h>
using namespace std;
//#define int long long 
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 
 
int main(){
 
 
anmol();
 
int t;
t =1;
while(t--){
 
int n,k;
cin>>n>>k;
 
 
int a[n+1];
vector<pair<int,int>> v;
vector<pair<int,int>> v1;
 
for(int i =0; i<n; i++){
 
  cin>>a[i];
  v.push_back({a[i],i});
}
 
sort(v.begin(),v.end());
 
int ans = v[n-1].first-v[0].first;
int moves =0;
for(int i =1; i<=k; i++){
 
   
    if(v[0].first==v[n-1].first ){
      break;
    }
    
   /* if(v[0].first +1== v[n-1].first){
      ans =1;
      break;
    }
   */
    v[0].first++;
    v[n-1].first--;
    moves++;
    ans = v[n-1].first - v[0].first;
 
    v1.push_back({v[0].second,v[n-1].second});
    sort(v.begin(),v.end());
 
 
 
 
 
 
 
}
 
ans = v[n-1].first - v[0].first;
cout<<ans<<" "<<moves<<" "<<endl;
 
for(int i =0; i<v1.size(); i++ ){
 
 
  cout<<v1[i].second+1<<" "<<v1[i].first+1<<" "<<endl;
}
 
 
 
 
 
 
 
 
 
 
 
}
 
 
 
 
}