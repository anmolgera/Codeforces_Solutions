#include <bits/stdc++.h>
using namespace std ;
# define int long long 
//#define inf 2000000
 
int32_t main(){
 
    //ttm = clock();
    
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int t;
    cin>>t;
 
    while(t--){
   
 
    string s;
    cin>>s;
    int countzero =0;
    int countone =0;
    for(int i =0; i<s.length(); i++){
 
          if(s[i]=='0'){
 
            countzero++;
          }
 
          else countone++;
 
 
    }
    
    int ans = min(countone,countzero);
    int cz =0;
    int co =0;
 
    for (int i = 0; i < s.length(); ++i)
   {
       
          if(s[i]=='0'){
            cz++;
 
 
 
          }
 
          else co++;
 
 
          ans = min(ans, cz+countone-co );
          ans = min(ans, co + countzero -cz);
 
 
 
 
 
 
 
   }
 
   cout<<ans<<endl;
 
}
}