#include<bits/stdc++.h>
using namespace std;
#define int long long
//vector<int> adj[200005];
//vector<int> ans(200005,-1);
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
 
int a[n];
 
for(int i =0; i<n; i++){
 
  cin>>a[i];
}
 
 
 
int j =0;
int cur =0;
vector<bool> v(n,false);
//vector<int> sex;
int mx =0;
for(int i =0; i<n; i++){
 
  if(a[i]>mx){
    mx = a[i];
    j = i;
  }
 
 
}
 
v[j] = true;
//sex.push_back(mx);
cout<<mx<<" ";
 
j=0;
for(int i =0; i<n; i++){
 
  cur = -1;
  int id =0;
   
   for(j =0; j<n; j++){
        
       if(v[j]==false){
       if(__gcd(a[j],mx)>cur){
 
         cur = __gcd(a[j],mx);
         id = j;
       }
        }
 
        else continue;
 
   }
  mx = cur;
 if(v[id]==false){
  cout<<a[id]<<" ";
 }
 
 v[id] = true;
 }
 
cout<<endl;
}
 
 
}
 
 
 
 
 
 