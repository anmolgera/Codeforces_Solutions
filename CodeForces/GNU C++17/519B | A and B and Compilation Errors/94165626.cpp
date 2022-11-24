#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
int32_t main(){
 
 
 
int n;
cin>>n;
 
int a[n],b[n],c[n];
//int b[n-1];
//int c[n-2];
 
//set<int> s;
//set<int> s1;
 
for(int i =0; i<n; i++){
 
    cin>>a[i];
    //s.insert(a[i]);
}
 
 
for(int i =0; i<n-1; i++){
 
 
   cin>>b[i];
 
 
}
 
for(int i=0; i<n-2; i++){
 
    cin>>c[i];
}
 
sort(a,a+n);
sort(b,b+n-1);
sort(c,c+n-2);
 
 
int id =0;
int iy =0;
 
 
 
while(id<n){
 
    if(a[id]==b[iy]){
        id++;
        iy++;
    }
 
    else {
 
        cout<<a[id]<<endl;
        break;
    }
 
 
}
 
id =0;
iy =0;
while(id<n){
 
    if(b[id]==c[iy]){
        id++;
        iy++;
    }
 
    else {
 
        cout<<b[id]<<endl;
        break;
    }
 
 
}
 
 
 
}