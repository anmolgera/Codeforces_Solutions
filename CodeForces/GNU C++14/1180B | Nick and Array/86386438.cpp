 
        
        
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
 
 
   int sum(int n){
 
    int count =0;
     while(n!=0){
   
     count+=n%10;
     n = n/10;
 
 
 
    }
 
    return count;
 
   }
 
 
 
int32_t main(){
 
  anmol();
 
 int n;
 cin>>n;
 
 
 for(int i =0; i<n; i++){
 
   cin>>a[i];
 
 
 }
 
 
 
 for(int i =0; i<n; i++){
 
    if(a[i]>=0){
 
       a[i] = -1*a[i];
       a[i] = a[i]-1;
 
    }
 
 
 }
 
 
  if(n%2==0){
 
 
  for(int i =0; i<n; i++){
 
      cout<<a[i]<<" ";
 
 
  }
  
  cout<<endl;
 
 
  }
 
 
 
  else {
 
 
      int min = INT_MAX; int index =-1;
 
      for(int i =0; i<n; i++){
       
       if(a[i]<min && (a[i])!=-1){
            
            min = a[i];
            index = i;
 
 
       }
     }
 
   if(index ==-1){
 
     a[0] =0;
 
     for(int i =0; i<n; i++){
 
      cout<<a[i]<<" ";
     }
 
     cout<<endl;
 
   }
 
    
  else{  a[index] = a[index]*(-1);
    a[index] = a[index]-1;
 
    for(int i =0; i<n; i++){
 
 
      cout<<a[i]<<" ";
 
          }
 
 
     cout<<endl;
 
}
  }
 
  
 }
 
 
 
 
 
 
   
 
  
  
 
   
   
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  