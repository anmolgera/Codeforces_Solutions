 
        
        
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
  
  int n;
  cin>>n;
 
  for(int i =0; i<n; i++){
 
 
    cin>>a[i];
  }
 
  int sum =0;
 
 
  for(int i =0; i<n; i++){
 
    sum +=a[i];
  }
 
  if(sum%3!=0){
 
    cout<<0<<endl;
  }
 
  else {
 
    
   int countsumby3 =0;
   int count2sumby3 =0;
 
   int s1 =0;
 
   for(int i =0; i<n-1; i++){
 
 
      s1 +=a[i];
 
     
 
      if(s1 == 2*sum/3){
 
      count2sumby3 +=countsumby3;
 
      }
 
 
 
      if(s1 == sum/3){
 
          
countsumby3 ++;
 
      }
 
 
   }
 
 
   cout<<count2sumby3<<endl;
 
 
 
 
  }
 
 
 
 
 
 
 
   }
 
  
  
 
   
   
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  