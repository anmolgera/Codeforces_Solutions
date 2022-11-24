#include<bits/stdc++.h>
using namespace std;
#define int long long
 
vector<int> adj(10009,0);
 
/*bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i< n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
 
*/
int32_t main(){
 
 
int n;
cin>>n;
int t;
cin>>t;
 
int a[n];
 
for(int i =0; i<n; i++){
 
  cin>>a[i];
}
 
 
vector<int> b(n,0);
 
b[0] = a[0];
 
for(int i =1; i<n; i++){
 
  b[i] = b[i-1] + a[i];
}
 
/*for(int i =0; i<n; i++){
 
  cout<<b[i]<<" ";
}
 
cout<<endl;
*/
int mx =0;
 
for(int i =0; i<n; i++){
 
  int x = upper_bound(b.begin(),b.end(), t) - b.begin()-i;
 
  if(x>mx){
    mx= x;
  }    
 
 t+=a[i];
 
}
 
 
cout<<mx<<endl;
  
 
}
 
 
 
 
 