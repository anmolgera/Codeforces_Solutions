#include <bits/stdc++.h>
using namespace std ;
# define int long long 
#define inf 2000000
 
int32_t main(){
    
 int n;
 cin>>n;
 
 
 int a[n];
 int b[n];
 
 int sum =0;
 int mn = 0;
 
 for(int i =0; i<n-1; i++){
 
 
    cin>>a[i];
    sum+=a[i];
 
    if(sum<mn){
        mn = sum;
    }
 
 
 
 }
 
 int prefix[n];
 
 memset(prefix,0,sizeof(prefix));
 //int mn = inf;
  mn = 1-mn;
 prefix[0] = mn;
 
 for(int i =1; i<n; i++){
 
    prefix[i] = prefix[i-1] + a[i-1];
    //cout<<prefix[i]<<" ";
   // mn = min(mn,prefix[i]);
 }
 
 
 //cout<<mn<<endl;
 
  /*for(int i =0; i<n; i++){
 
    prefix[i] +=mn;
 }
 */
 for(int i=0; i<n; i++){
 
    b[i] = prefix[i];
 }
 
 
 
 sort(prefix,prefix+n);
 
 
/*for(int i =0; i<n; i++){
 
    cout<<prefix[i]<<" ";
}
 
cout<<endl;
**/
 
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