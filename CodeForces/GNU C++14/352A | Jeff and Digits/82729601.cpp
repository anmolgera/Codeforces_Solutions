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
 
for(int i=0; i<n; i++){
 
 cin>>a[i];
}
 
 
//sort(a,a+n);
 
 
 int sum =0;
 for(int i =0; i<n; i++){
 
   if(a[i]==5){
    sum++;
   }
 
 
 }
 
int z = sum-sum%9;
int y = n-sum;
 
 
if(y <1){
 cout<<-1<<endl;
}
else{
 
 
if(z>=9 && y>=1){
 
 for(int i =0; i<z; i++){
 cout<<5;
}
for(int i =0; i<y; i++){
 cout<<0;
}
}
 
else cout<<0;
 
 
cout<<endl;
 
}
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 