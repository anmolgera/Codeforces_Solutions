#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
 
int n,m,r,c;
cin>>n>>m>>r>>c;
 
/*int ans = abs(r-c);
 
if(r>c){
    r = c;
}
else {
    c = r;
}
*/
cout<<max(max(abs(n-r)+abs(m-c),abs(r-1)+abs(c-1)),max(abs(n-r)+abs(c-1),abs(r-1)+abs(m-c)))<<endl;
 
 
 
 
}
 
int32_t main(){
 
int t;
cin>>t;
 while(t--){
    solve();
 }
 
 
 
 
 
}