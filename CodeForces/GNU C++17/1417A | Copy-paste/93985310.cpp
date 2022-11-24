#include<bits/stdc++.h>
using namespace std;
#define int long long
int m;
 
  /*  for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j+=i){
            a[j]++;
        }
    }
 
    */
int32_t main(){
 
int t;
cin>>t;
 
while(t--){
 
 int n,k;
 cin>>n>>k;
 
  int a[n];
  for(int i =0; i<n; i++){
 
    cin>>a[i];
  }
 
  sort(a,a+n);
  int ans =0;
  
  int j=0;
  bool  flag = true;
  /*for(int i =0; i<n; i++){
  
   if(a[i]>k){
       j = i;
       flag = false;
       break;
   }
 
  }
 */
 /*if(!flag){
     
    
     for(int i =1; i<=j; i++){
      
            while(a[i]<=k){
              a[i] +=a[0];
               ans++;
            }
            
 
     } 
 
     cout<<ans<<endl;
 
 }
 
 else {
*/
 
  /*if(a[0]==k){
 
    cout<<1<<endl;
  }
  */
  
  if(a[0]>=k){
 
    cout<<0<<endl;
  }
 
   else { for(int i =1; i<n; i++){
       
         while(a[i]<=k){
              a[i] +=a[0];
              if(a[i]<=k){
               ans++;
              }
            }
 
    }
 
    // cout<<ans<<endl;
 
 
 
 
 
 
  /*int x = a[0];
  int y = a[1]; 
 
  int ans =1;
 
  while(a[1]<k){
    a[1]+=a[0];
    ans++;
  }
 
 
 */
 
   /* if(ans==0){
 
      cout<<1<<endl;
    }
    */
   cout<<ans<<endl;
 }
}
 
 
 
}
 
 
 
 
 