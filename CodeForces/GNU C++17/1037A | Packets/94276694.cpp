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
 
int ans =0;
int count =0;
int m = n;
 
set<int> s;
for(int i =1;; i=i*2){
count++;
n-=i;
if(n<=0 && (s.find(i)==s.end())){
//ans=i;
ans = count;
break;
}
 
s.insert(i);
 
 
 
}
 
cout<<ans<<endl;
 
}
 
 
 
 
 