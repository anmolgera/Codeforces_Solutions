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
 
 
bool ifperfect ( int num){
return (!(num-sqrt(num)*sqrt(num)));
}
int32_t main(){
 
 
 
 anmol();
 
 
int a,b,c,d,e,f;
cin>>a>>b>>c>>d>>e>>f;
 
 
int sum = a+b+c;
 
cout<<sum*sum - a*a-c*c-e*e<<endl;
 
 
 
 
 
 
}