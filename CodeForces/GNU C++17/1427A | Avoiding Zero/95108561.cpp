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
 
 
/*bool check(int n){
   bool flag = false;
    int m = n;
 while(m!=1){
 
    
    if(m%2){
        flag = true;
        break;
    }
    m =  m/2;
 
 
 }
 
 
 return !flag;
 
 
 
}
 
*/
int32_t main(){
 
 
anmol();
 
int t;
cin>>t;
while(t--){
 
int n;
cin>>n;
 
int a[n];
int sum =0;
for(int i =0; i<n; i++){
 
    cin>>a[i];
    sum+=a[i];
}
 
sort(a,a+n);
 
if(sum==0){
 
    cout<<"NO"<<endl;
}
 
/*else if(a[n-1]==0 && sum!=0 ){
 
    cout<<"YES"<<endl;
    for(int i =0; i<n; i++){
 
        cout<<a[i]<<" ";
    }
 
    cout<<endl;
}
*/
else  {
 
   cout<<"YES"<<endl;
   int x =0;
   bool flag1 = false;
   bool flag2 = false;
   for(int i = n-1; i>=0; i--){
     
     x+=a[i];
     if(x==0){
        flag1 = true;
        break;
     }
 
      
     
   }
 
  x =0;
   for(int i =0; i<n; i++){
   x+=a[i];
   if(x==0){
     flag2 = true;
   }
 
   }
    
 
 
   if(!flag1){
 
 for(int i = n-1; i>=0; i--){
 
    cout<<a[i]<<" ";
 }
 
 cout<<endl;
 
   }
   
  else if(!flag2) {
 
 
 
    for(int i =0; i<n; i++){
 
        cout<<a[i]<<" ";
    }
 
    cout<<endl;
  }
 
  // cout<<endl;
 
}
 
 
 
 
 
}}