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
 
 
bool ifperfect ( int num){
return (!(num-sqrt(num)*sqrt(num)));
}
 
 
string check(string s){
 
 if(s.size()%2){
  return s;
 }
 
 
 string s1 = check(s.substr(0,s.size()/2));
 string s2 = check(s.substr(s.size()/2,s.size()/2));
 
 
 if(s1<s2){
  return s1+s2;
 
   }
 
else return s2+s1;
 
}
int32_t main(){
 
anmol();
 
int n;
cin>>n;
 
int a[n];
 
bool flag = false;
int ans =0;
 
for(int i=1; i<=n; i++){
 cin>>a[i];
 
 if(i>1){
 
   if(a[i]==2 && a[i-1]==3 || a[i] ==3 && a[i-1]==2 ){
 
 
    cout<<"Infinite";
    flag = true;
    break;
   }
 
   ans += max(a[i],a[i-1])+1;
 
   if(i>=2 && a[i-2]==3 && a[i]==2){
 
      ans--;
   }
 
 }
 
 
 
}
 
if(!flag){
 
  cout<<"Finite"<<endl;
  cout<<ans<<endl;
}
 
 
 
}