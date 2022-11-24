 
        
        
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
 
 int n,k;
 cin>>n>>k;
 
 
 
  for(int i =0; i<n; i++){
 
    cin>>a[i];
  }
 
 
  sort(a,a+n);
 
    
  int end = n-1;
  int x =n-1;
  int count =0;
 
 
  while(end>=0){
 
   if(a[end]*(x-end+1)>=k){
      end--;
       count++;
      x = end;
 
   }
 
  else {
 
 
    end--;
  }
 
  }
 
 
 
cout<<count<<endl;
 
 
 
 
    }
  
 
 
 
  }
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
   
 
  
  
 
   
   
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  