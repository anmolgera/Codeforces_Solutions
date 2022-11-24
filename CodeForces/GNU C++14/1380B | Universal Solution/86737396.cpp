 
        
        
      #include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
 
 
#define int             long long
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
const int N = 1e6 + 5 ;
 int a[N], b[N] , freq[N];
 
 
int32_t main(){
 
  anmol();
 
  int t;
  cin>>t;
 
 
  while(t--){
 
    string s;
    cin>>s;
 
 
 
    int count1 =0, count2 =0, count3 =0;
 
 
    for(int i =0; i<s.length(); i++){
 
 
       if(s[i]=='R'){
 
        count1++;
       }
 
       if(s[i]=='P'){
 
        count2++;
       }
 
       if(s[i]=='S'){
 
        count3++;
       }
 
    }
 
  int max1 = max(count1,max(count2,count3));
 
 
  if(max1 == count1){
 
     for(int i =0; i<s.length(); i++){
 
      cout<<"P";
     }
 
     cout<<endl;
 
  }
 
  else  if(max1 == count2){
 
     for(int i =0; i<s.length(); i++){
 
      cout<<"S";
     }
 
     cout<<endl;
 
  }
 
 else {
 
     for(int i =0; i<s.length(); i++){
 
      cout<<"R";
     }
 
     cout<<endl;
 
  }
 
  
    }
  
 
 
 
  }
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
   
 
  
  
 
   
   
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  