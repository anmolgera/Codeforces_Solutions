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
 
int x,y;
cin>>x>>y;
int n;
cin>>n;
 
int f[6];
f[0] = x;
f[1] = y;
f[2] = y-x;
f[3] = -x;
f[4] = -y;
f[5] = x-y;
//f[6] = x;
 
cout<<(f[((n-1) + 6)%6]%1000000007+ 1000000007)%1000000007<<endl;
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 