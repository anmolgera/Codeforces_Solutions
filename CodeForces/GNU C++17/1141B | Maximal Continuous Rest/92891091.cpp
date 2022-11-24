#include <bits/stdc++.h>
using namespace std ;
# define int long long 
 
int32_t main(){
    
 int n;
 cin>>n;
 
 
 
 int a[n+2];
 int b[n+1];
 
 for(int i =0; i<n; i++){
 
    cin>>a[i];
    //b[i+1] = a[i];
 }
 
 //a[n] = a[0];
 //b[0] = a[n-1];
 
//a[0] = a[n];
//a[n+1] = a[1];
 
int mx =0;
int sum =0;
 for(int i =0; i<2*n; i++){
  
  if(a[i%n]==1){
 
    sum++;
 
    if(sum>mx){
        mx = sum;
    }
 
    /*if(i==n){
 
        if(sum>mx){
            mx = sum;
        }
    }
    */
 
 
  }
 
  else {
 
 
    sum =0;
  }
 
 
 }
 
cout<<mx<<endl;
 
 
 
 
 
}