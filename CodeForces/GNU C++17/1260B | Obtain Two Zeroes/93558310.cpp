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
   
int a,b;
cin>>a>>b;
bool flag = false;
 
if(a==b && b==0){
cout<<"YES"<<endl;
}
 
 else if( max(a,b) <=2*(min(a,b)) && (a+b)%3==0 && (a+b)!=abs(a-b) ){
  cout<<"YES"<<endl;
 }
 else cout<<"NO"<<endl;
 
}
 
 
}
 
 
 
 
 
 
 
 
 
 
 