#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
 
 
/*void dfs(int v)
{
    vis[v] = 1;
    if (used[v] > m) return;
    int cnt = 0;
    for (int u : g[v])
    {
        if (vis[u]) continue;
        used[u] = used[v] + 1;
        if (a[u] == 0) used[u] = 0;
        dfs(u);
        cnt++;
    }
    if (cnt == 0) ans++;
    return;
}
*/
 
int a[200005];
int32_t main(){
 
int t;
cin>>t;
while(t--){
int n;
cin>>n;
 
 
for(int i =0; i<n; i++){
 
  cin>>a[i];
}
 
 
int sum1 =0;
int sum2 =0;
int j =0;
int count1=0;
int count2 =0;
 
for(int i =0; i<n; i++){
  
 
 
  if(a[i]==0){
 
    count1++;
  }
  
 
  else {
count2++;
 
  }
 
 
 
}
 
 
vector<int>v;
if(count1==count2){
  
  for(int i =0; i<n; i++){
 
    if(a[i]==0){
 
     v.push_back(a[i]);
    }
  }
//cout<<endl;
 
}
 
 
 
 
 
 
else if(count1>count2){
  int j =0;
  for(int i =0; i<n; i++){
     
      if(a[i]==0){
 
        //cout<<a[i]<<" ";
        v.push_back(a[i]);
        j++;
      }   
 
    if((j%2)==0 && j>=n/2){
      break;
    }
 
  }
 
 // cout<<endl;
}
 
else {
 
 
 int j =0;
  for(int i =0; i<n; i++){
     
      if(a[i]==1){
 
        //cout<<a[i]<<" ";
        v.push_back(a[i]);
        j++;
      }   
 
    if((j%2)==0 && j>=n/2){
      break;
    }
 
  }
 
  //cout<<endl;
 
 
 
}
 
 
cout<<v.size()<<endl;
for(int i =0; i<v.size(); i++){
  cout<<v[i]<<" ";
}
 
cout<<endl;
 
 
 
 
}
}