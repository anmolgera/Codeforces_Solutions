#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
int32_t main() {
   
int a[2];
for(int i =0; i<3; i++){
cin>>a[i];
 
}
 
 
sort(a,a+3);
 
int count =0;
 
if(2*(a[0]+a[1])<=a[2]){
   
    cout<<a[0]+a[1]<<endl;
 
  }
 
  else cout<<(a[0]+a[1]+a[2])/3<<endl;
}
 