#include<bits/stdc++.h>
using namespace std;
int main(){
 
int n;
cin>>n;
while(n--){
    int a[3];
 for( int i = 1; i<=3; i++){
    cin>>a[i];
 }
 
int x = a[1];
 
 
for( int i =0; i<a[2]; i++){
 
    x = floor(x/2) + 10;
}
 
if(a[1]<=10 && a[3]>=1){
     cout<<"YES"<<endl;
}
 
 else if(x<=a[3]*10){
    cout<<"YES"<<endl;
 }
 
  else cout<<"NO"<<endl;
 
 
}
 
 
 
 
}