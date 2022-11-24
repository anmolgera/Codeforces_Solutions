#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
int32_t main() {
   
 int n,k,l;
 cin>>n>>k;
 
 string s;
 cin>>s;
 
 int a[2] ={0,0};
 //int b[n] ={0};
 int ans =0;
 l=0;
 for(int i =0; i<s.length(); i++){
 
  if(s[i]=='a'){
 
    a[0]++;
  }
 
  else a[1]++;
 
  
  if(min(a[0],a[1])<=k){
 
    ans = max(ans,a[0]+a[1]);
  }
 
  else {
 
          if(s[l]=='a'){
 
            a[0]--;
          }      
         
         else a[1]--;
        l++;
 
  }
 
 }
 
 
cout<<ans<<endl;
 
}
 