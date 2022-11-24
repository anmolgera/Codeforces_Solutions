#include <bits/stdc++.h>
#include <map>
using namespace std;
 
#define int long long 
 
 
 
 
 
int32_t main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
    
 
int n;
cin>>n;
 
int a[n],b[n];
 
for(int i=0; i<n; i++){
 
  cin>>a[i];
  //cin>>b[i];
}
 
 
for(int i =0; i<n; i++){
 
  b[i] = a[i];
}
 
 sort(b,b+n);
 
 int min = INT_MAX;
 
 for(int i=0; i<n; i++){
 
   if(a[i]<min){
 
    min = a[i];
   }
 
 }
 
//cout<<min<<endl;
 //int min = INT_MAX;
bool flag = true;
 for(int i=0; i<n; i++){
 
      if(a[i]!=b[i]){
 
        if((a[i]%min)!=0){
           
          flag = false;
          break;
 
        }
 
      }
 
 }
 
 
if(flag){
 
  cout<<"YES"<<endl;
}
 
else cout<<"NO"<<endl;
 
  } 
     
    }
    
    