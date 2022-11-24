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
 
 
   string s;
   cin>>s;
 
  
 
   string x;
   cin>>x;
 
   sort(s.begin(),s.end());
 
   int n = x.length();
   int m = s.length();
 
   bool flag = false;
 
   for(int i =0; i<=n-m; i++){
         
         string res ="";
         for(int j = i; j<m+i; j++){
 
                res+=x[j];
 
 
 
         }
        
        sort(res.begin(),res.end());
        //cout<<res<<endl;
         if(res==s){
 
            flag =  true;
            break;
         }
 
         res ="";
         
 
 
   }
 
 
if(flag){
 
    cout<<"YES"<<endl;
}
 
else cout<<"NO"<<endl;
 
 
 
}
 
 
 
 
}
 
 
 