#include <bits/stdc++.h>
using namespace std ;
# define int long long 
 
int32_t main(){
    
int n;
cin>>n;
 
 
int m;
cin>>m;
 
 
int ans =0;
 
int x = (m/n);
int y =0;
if(m%n!=0){
y =1;
}
 
if(y ){
    cout<<-1<<endl;
    return 0;
}
int flag =0;
while(x!=1){
 
   if(x%3==0){
 
    x = x/3;
    //continue;
   }
 
   else if(x%2==0) {x = x/2;
 
 
    //continue;
   }
 
   else {
    flag =1;
    break;
 
   }
 
   ans++;
 
 
}
if(flag){
 
    cout<<-1<<endl;
}
else cout<<ans<<endl;
 
}