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
 
 
int main(){
anmol();
int t;
cin>>t;
 
while(t--){
 
 
int n,x,m;
cin>>n>>x>>m;
 
int a,b;
 
int left =x;
int right = x;
 
for(int i =0; i<m; i++){
 
 cin>>a>>b;
 
 if(!(a>right )&& !(b<left)){
 
   left = min(left,a);
   right = max(right,b);
 
 }
 
 
 
 
 
}
 
 
cout<<right-left+1<<endl;
 
 
 
 
}
 
 
 
 
 
 
}