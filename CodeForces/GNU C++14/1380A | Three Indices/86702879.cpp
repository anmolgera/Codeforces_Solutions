 
        
        
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
 
   int n;
   cin>>n;
 
   for(int i =0; i<n; i++){
 
    cin>>a[i];
   }
    
    vector<int>v;
 
   for(int i =1; i<n-1; i++){
  
 
    if(a[i]>a[i-1] && a[i]>a[i+1]){
 
      v.push_back(i);
      v.push_back(i+1);
      v.push_back(i+2);
 
      break;
     
 
 
 
   }
    }
 
 
    if(v.size()==0){
 
 
      cout<<"NO"<<endl;
    }
 
 
    else {
 
 
 
      cout<<"YES"<<endl;
 
      for(int i=0; i<v.size(); i++){
 
           cout<<v[i]<<" ";
 
 
      }
 
      cout<<endl;
    }
  
 
 
 
  }
 
}
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
   
 
  
  
 
   
   
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  