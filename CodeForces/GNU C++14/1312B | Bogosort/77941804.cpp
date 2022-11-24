#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
 
 
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
 
int x;
cin>>x;
while(x--){
 
 
int n;
cin>>n;
int * p = new int[n];
 
for(int i =0; i<n; i++){
 
 cin>>p[i];
}
 
sort(p,p+n);
for(int i =n-1; i>=0; i--){
 cout<<p[i]<<" ";
}
cout<<endl;
}
 
}