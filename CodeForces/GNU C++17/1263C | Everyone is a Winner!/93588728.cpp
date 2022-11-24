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
 
 
 set<int> s;
s.insert(0);
 
 for(int i =1; i<=sqrt(n); i++){
  
  s.insert(i);
  s.insert(n/i);
 
 
 }
 
cout<<s.size()<<endl;
 for(auto i : s){
  cout<<i<<" ";
 }
 
 cout<<endl;
 
 
 
 
}
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 