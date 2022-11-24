#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m = 3000,x,y,z=0;
cin>>n;
for(int i =0 ; i<n;i++){
cin>>x>>y;
m=min(m,y);
z += x*m;
 
 
 
}
cout<<z;
 
 
 
 
}