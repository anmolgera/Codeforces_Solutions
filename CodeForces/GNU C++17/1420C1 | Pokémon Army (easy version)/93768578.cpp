#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main(){
 
int t;
cin>>t;
 
while(t--){
 
 
    int n,q;
    cin>>n>>q;
 
 
    int a[n];
 
 
 
    for(int i =0; i<n; i++){
 
        cin>>a[i];
        }
 
int ans =a[0];
 
 
for(int i=1; i<n; i++){
   int x = a[i]-a[i-1];
   
   if(x>0){
    ans+=x;   }
 
    else continue;
}
cout<<ans<<endl;
}
 
 
 
 
}