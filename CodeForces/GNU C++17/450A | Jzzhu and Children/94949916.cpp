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
cin>>n>>m;
 
 
int a[n];
queue<pair<int,int>> q;
for(int i =0; i<n; i++){
 
  cin>>a[i];
  q.push({a[i],i+1});
}
 
pair<int,int> cur;
 
 
while(!q.empty()){
 
    cur = q.front();
    if(cur.first<=m){
      q.pop();
    }
 
    else {
 
       q.push({cur.first-m,cur.second});
       q.pop();
 
 
    }
 
 
}
 
cout<<cur.second<<endl;
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 