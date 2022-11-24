#include<bits/stdc++.h>
using namespace std;
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
const int N = 1e6 + 5 ;
int a[N] , dp[N] , b[N] ;
 
int main(){
anmol();
 
 
 
int n;
cin>>n;
 
int x =0;
for(int i =0; i<n; i++){
 cin>>a[i];
 
 a[i] +=x;
 x = max(a[i],x);
 cout<<a[i]<<" ";
}
 
//cout<<a[0]<<" ";
 
 
 
for(int i =0; i<n; i++){
 
 
}
 
cout<<endl;
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 