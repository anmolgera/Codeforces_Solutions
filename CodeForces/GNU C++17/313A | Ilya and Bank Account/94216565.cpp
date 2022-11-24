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
int n;
cin>>n;
 
/*vector<int> v (n,0);
 
 
for(int i =0; i<n; i++){
 
    cin>>v[i];
}
 
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
 
 
int sum =0;
int suffix[n+1];
suffix[0] =0;
 
 
for(int i =1; i<=n; i++){
 
    suffix[i] = suffix[i-1]+v[i-1];
}
 
for(int i =1; i<=n; i=i*4){
 
    sum+=suffix[i];
}
 
cout<<sum<<endl;
*/
 
if(n>=0){
    cout<<n<<endl;
}
 
else {
 
 
   n = -n;
   n = 10*(n/100) + min(n%10,(n/10)%10);
   n = -n;
 
cout<<n<<endl;
 
 
}
 
 
 
 
}
 
 
 