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
 
int n,s;
cin>>n>>s;
 
int a[n];
 
for(int i =0; i<n; i++){
 
    cin>>a[i];
}
 
sort(a,a+n);
int sum =0;
for(int i =0; i<n/2; i++){
 
    if (a[i]>s)
    {
        sum+=(a[i]-s);
    }
}
 
sum+=abs(a[n/2]-s);
 
for(int i =(n/2)+1; i<n; i++ ){
 
 if(s>a[i]){
 
    sum+=(s-a[i]);
 }
 
}
cout<<sum<<endl;
 
 
 
}
 
 
 
 
 