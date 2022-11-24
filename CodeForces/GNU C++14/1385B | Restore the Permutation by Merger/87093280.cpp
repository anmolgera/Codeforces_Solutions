 
        
        
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
 
   // int x,y,z;
    //cin>>x>>y>>z;
 
   int n;
   cin>>n;
 
    for (int i = 0; i <2*n ; ++i)
    {
      cin>>a[i];
    }
    
     set<int> s;
    for(int i =0; i<2*n; i++){
 
       if(s.find(a[i])==s.end()){
 
          cout<<a[i]<<" ";
          s.insert(a[i]);
 
 
       }
 
 
    }
   
   cout<<endl;
 
    
 
 
    }
  
 
 
 
  }
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
   
 
  
  
 
   
   
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  