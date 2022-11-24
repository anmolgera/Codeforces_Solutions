#include<iostream>
#include<bits/stdc++.h>
//#define li long long int
#define int long long 
using namespace std;
 
 
int32_t main(){
 
 
int n;
cin>>n;
 
 
vector<int> a(n,0);
int sum =0;
for(int i =0; i<n; i++){
 
    cin>>a[i];
 
}
 
 
int x =0;
int s =0;
 
 
unordered_map<int,int> mp;
 
for(int i =0; i<n; i++){
 
    sum+=a[i];
 
    if((mp.find(sum)!=mp.end() && (s <= mp[sum]) )|| sum==0){
 
        sum = a[i];
        s = i;
        x++;
 
 
    }
 
    mp[sum] = i;
}
 
cout<<x<<endl;
 
return 0;
 
  }