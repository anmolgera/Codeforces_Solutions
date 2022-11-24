#include <bits/stdc++.h>
using namespace std ;
# define int long long 
#define inf 2000000
 
int32_t main(){
    
 int n;
 cin>>n;
 
 
 int a[n];
 int b[n];
 
 
 for(int i =0; i<n-1; i++){
 
 
    cin>>a[i];
 
 
 
 }
 
 int prefix[n];
 
 memset(prefix,0,sizeof(prefix));
 int mn = 0;
 prefix[0] = 0;
 
 for(int i =1; i<n; i++){
 
    prefix[i] = prefix[i-1] + a[i-1];
    //cout<<prefix[i]<<" ";
    mn = min(mn,prefix[i]);
 }
 
 mn = 1-mn;
 //cout<<mn<<endl;
 
  for(int i =0; i<n; i++){
 
    prefix[i] +=mn;
 }
 
 for(int i=0; i<n; i++){
 
    b[i] = prefix[i];
 }
 
 
 
 sort(prefix,prefix+n);
 
 
 
 bool flag = true;
 for(int i =0; i<n; i++){
 
    if(prefix[i]!=(i+1)){
 
   flag = false;
   break;
    }
 }
 
 
 if(flag){
 
    for(int i =0; i<n; i++){
 
        cout<<b[i]<<" ";
    }
 
    cout<<endl;
 }
 
 else cout<<-1<<endl;
 
 
 
}