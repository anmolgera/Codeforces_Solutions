#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
int32_t main() {
   
 int n,d;
 cin>>n>>d;
 
 
 pair<int,int> a[n];
 
 for(int i =0; i<n; i++){
 
   cin>>a[i].first;
   cin>>a[i].second;
 
 
 
 }
 
 
 sort(a,a+n);
 int m[n];
 int f[n];
 
 
 for(int i =0; i<n; i++){
 
 
  m[i] = a[i].first;
  f[i] = a[i].second;
 }
 
int sex[n+1];
sex[0] =0;
 
for(int i=1; i<=n; i++){
 
  sex[i] = sex[i-1] + f[i-1];
}
 
int maxi = 0;
for(int i=0; i<n; i++){
 
  int end = upper_bound(m,m+n,m[i]+d-1)-m;
  maxi = max(maxi, sex[end]-sex[i]);
 
}
 
cout<<maxi<<endl;
}
 