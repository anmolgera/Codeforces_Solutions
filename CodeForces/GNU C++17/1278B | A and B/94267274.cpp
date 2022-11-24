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
 
 
 
int32_t main(){
 
 
anmol();
int t;
cin>>t;
 
while(t--){
 
 int a,b;
 cin>>a>>b;
 
 
int sum =0;
 
 int diff = max(a,b)-min(a,b);
 int i =0;
 int ans =0;
 int sol =0;
 
 if(a==b){
 
    cout<<0<<endl;
 }
 
 else {
 while(true){
 
    i++;
    sum+=i;
    ans++;
 
   /* if(sum==diff){
       
       sol = ans;
       break;
 
    }
   */
    if(sum>=diff){
 
        if((sum-diff)%2==0){
            sol = ans;
            break;
        }
 
       /* else if((sum-diff)%2) {sol = ans+1;
            break;
     }*/
    }
 
 }
 
 cout<<sol<<endl;
}
 
}
 
 
}
 
 
 