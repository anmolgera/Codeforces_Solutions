 
        
        
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
 int a[N], nums2[N] , freq[N];
 
 
int32_t main(){
 
  anmol();
 
  int t;
  cin>>t;
 
 
  while(t--){
 
   int n;
   cin>>n;
 
   if(n%2==0){
 
    cout<<n/2<<" "<<n/2;
   }  
 
   else {
 
    int m = 0;
    int x = n;
 
     for(int i =3; i*i<=n; i+=2){
 
             if(n%i==0){
 
                 m = i;
                 break;
 
             }
 
    }
 
    if(m==0){
 
 
      cout<<1<<" "<<n-1;
    }
 
    else cout<<n/m<<" "<<(m-1)*n/m;
 
   }
 
 
 
 
 
   cout<<endl;
 
 
 
  }
 
}
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
   
 
  
  
 
   
   
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  