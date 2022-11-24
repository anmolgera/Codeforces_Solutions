 
 #include<iostream>
#include<map>
 
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
 
 
 
 
int32_t main() 
{ 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 //anmol();
 int t;
 cin>>t;
 while(t--){
 
 
int n,y;
cin>>n>>y;
 
 
if(n<=y){
 
cout<<abs(n-y)<<endl;
 
}
 
 
else {
 
if((n-y)%2){
 
  cout<<1<<endl;
}
 
else cout<<0<<endl;
 
 
}
 
 
 }
 
 
}
 