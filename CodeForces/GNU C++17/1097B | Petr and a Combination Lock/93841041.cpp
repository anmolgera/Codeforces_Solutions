#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int a[190];
bool func(int x, int b, int n){
 
  if(x==n && b==0){
    return true;
  }
 
 
 else if(x==n && b!=0){
    return false;
 }
 
 
 else {return func(x+1,(b+a[x+1] + 360)%360 ,n) || func(x+1, (b-a[x+1]+360)%360 , n);
}
 
 
}
int32_t main(){
 
  
  int n;
  cin>>n;
 
 
   //int a[n];
 
   for(int i =1; i<=n; i++){
 
    cin>>a[i];
   }
 
 
   if(func(0,0,n)){
 
    cout<<"YES"<<endl;
   }
 
 
   else cout<<"NO"<<endl;
 
}
 
 
 
 
 