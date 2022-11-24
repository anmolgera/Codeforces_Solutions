#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 
 
int32_t main(){
 
 
anmol();
 
int n,m;
cin>>n;
 
int a[n];
double sum =0;
int maxt =0;
for(int i =0; i<n; i++){
 
  cin>>a[i];
  sum+=a[i];
  maxt =max(maxt,a[i]);
}
 
cout<<max(maxt, (int)ceil(sum/(n-1)))<<endl;
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 