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
cin>>n;
 
 
int a[n];
int b[n];
 
for(int i =0; i<n; i++){
  cin>>a[i];
}
 
for(int i =0; i<n; i++){
 
  cin>>b[i];
}
 
bool neg = false;
bool pos = false;
 
bool flag1 = true;
bool flag2 = true;
for(int i =0; i<n; i++){
 
 if(a[i]>b[i] && !neg){
 
    flag1 = false;
 
 }
 
 if(a[i]<b[i] && !pos){
 
 flag2 = false;
 
 }
 
 if(a[i]>0){
  pos = true;
 }
 
 else if(a[i]<0){
  neg = true;
 }
 
 
 
}
 
if(flag1 && flag2){
  cout<<"YES"<<endl;
}
 
else cout<<"NO"<<endl;
 
 
}
 
 
 
 
}