#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
int32_t main() {
   
int a[5];
int s =0;
for(int i =0; i<5; i++){
cin>>a[i];
s+=a[i];
 
}
 
 
if(s%5==0 && s!=0){
 
  cout<<s/5<<endl;
}
 
 
else cout<<-1<<endl;
/*sort(a,a+3);
 
int count =0;
 
if(2*(a[0]+a[1])<=a[2]){
   
    cout<<a[0]+a[1]<<endl;
 
  }
 
  else cout<<(a[0]+a[1]+a[2])/3<<endl;
 
  */
}
 