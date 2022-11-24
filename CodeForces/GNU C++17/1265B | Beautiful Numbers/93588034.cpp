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
 
 
int32_t main(){
 
anmol();
 
int t;
cin>>t;
while(t--){
   
string res ="";
int mini = INT_MAX;
int maxi = INT_MIN;
 
int n;
cin>>n;
int a[n+1];
 
map<int,int> mp;
for(int i =1; i<=n; i++){
 
cin>>a[i];
mp[a[i]] = i;
 
}
 
 
 
for(int i =1; i<=n; i++){
 
  int x = mp[i];
 
  if(x>maxi){
    maxi = x;
  }
 
  if(x<mini){
 
    mini =x;
  }
 
 
  if(maxi-mini+1==i){
    res+='1';
  }
 
  else res+='0';
 
}
 
cout<<res<<endl;
 
}
 
 
}
 
 
 
 
 
 
 
 
 
 
 