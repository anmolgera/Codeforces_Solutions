#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
 
int n;
cin>>n;
while(n--){
 
 int t;
 cin>>t;
 
 int x;
 cin>>x;
 int a[t],b[t];
 for(int i =0; i<t; i++){
 
    cin>>a[i];
 }
 
  for(int i =0; i<t; i++){
 
    cin>>b[i];
 }
 
 sort(a,a+t);
 sort(b,b+t);
 reverse(b,b+t);
 bool flag = true;
 for(int i =0; i<t; i++){
 
    if(a[i]+b[i]>x){
       flag = false;
    }
 }
 
 
 if(!flag){
    cout<<"NO"<<endl;
 }
 
 else cout<<"YES"<<endl;
}
}
 
 
 