#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void anmol()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int32_t main(){
anmol();
int t;
cin>>t;
int z =0;
while(t--){
   int n;
   cin>>n;
   int a[n];
   int b[105] ={0};
   for(int i =0; i<n; i++){
     cin>>a[i];
   }
  
   for(int i =0; i<n; i++){
       b[a[i]]++;
   }
   int ans =0;
   for(int i =0; i<101; i++){
       if(b[i]>0){
         ans = b[i];
         break;
       }
   }
 cout<<n-ans<<endl;
}
 
}