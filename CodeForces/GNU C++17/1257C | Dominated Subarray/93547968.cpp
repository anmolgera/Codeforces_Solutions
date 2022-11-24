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
   
 
   int n;
   cin>>n;
 
   int a[n+1];
   //int freq[]
 
   for(int i =1; i<=n; i++){
 
 
    cin>>a[i];
   }
 
  unordered_map<int,int> mp;
  int j =0;
  int mn = INT_MAX;
   
 
   for(int i =1; i<=n; i++){
 
         if(mp[a[i]]!=0){
 
          mn = min((i-mp[a[i]]+1),mn);
         }
 
         mp[a[i]] =i;
   }
 
   if(mn ==INT_MAX){
 
    cout<<-1<<endl;
   }
 
   else cout<<mn<<endl;
 
}
 
 
}
 
 
 
 
 
 
 
 
 
 
 