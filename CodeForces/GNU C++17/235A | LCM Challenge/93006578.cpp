#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
int32_t main() {
   
int n;
cin>>n;
 
 
 
if(n==2 || n==1){
 
 
  cout<<n<<endl;
  return 0;
}
 
else if(n==3){
 
  cout<<6<<endl;
  return 0;
}
 
 
else if(n%2){
 
  cout<<n*(n-1)*(n-2)<<endl;
}
 
else {
 
    if(n%3){
 
         cout<<n*(n-1)*(n-3)<<endl;
 
 
    }
 
    else cout<<(n-1)*(n-2)*(n-3)<<endl;
 
 
}
 
 
 
 
 
  }
 