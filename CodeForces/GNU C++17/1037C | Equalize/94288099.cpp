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
 
int n;
cin>>n;
 
string a;
string b;
cin>>a;
cin>>b;
 
 
int sum =0;
int count =0;
for(int i =0; i<n; i++){
 
if(a[i]==b[i]){
 
    continue;
}
 
else if(a[i]!=b[i]) {
 
            
      if( (i<n-1 )&& ((a[i]==b[i+1]) && (b[i] == a[i+1])) ){
            sum++;
           // continue;
           //cout<<sum<<endl;
           i++;
 
 
      }
    
      else {
       // cout<<sum<<endl;
        sum++;
      }
 
}
 
}
 
//sum+=count;
cout<<sum<<endl;
 
 
}
 
 
 
 
 