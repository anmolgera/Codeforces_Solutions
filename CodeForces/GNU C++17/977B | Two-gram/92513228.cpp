#include<bits/stdc++.h>
using namespace std;
#define int long long
//vector<int> adj[200005];
//vector<int> vis(200005,0);
//vector<int> deg(200005,0);
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 //double output =0;
 //int ans =1;
 
  
/*void dfs(int node){
 
  if(vis[node]){
    return;
  }
 
    vis[node] =1;
 
    if(deg[node]!=2){
      ans =0;
    }
 
 for(auto i : adj[node]){
 
  if(!vis[i]){
 
    dfs(i);
  }
 }
return;
}
*/
 
 int32_t main(){
  anmol();
 
 
 int n;
 cin>>n;
 
 
 string s;
 cin>>s;
 //cout<<s<<endl;
 int count =0;
 string res ="";
 int mx =0;
 string sex= "";
 map<string,int> mp;
 for(int i =0; i<s.length()-1; i++){
 
    res +=s[i];
    res+=s[i+1];
    //cout<<res<<endl;
   
   mp[res]++;
   res ="";
 
 
 }
 
for(auto i : mp){
 
  if(i.second>mx){
    mx = i.second;
  }
 
}
 
 
for(auto i : mp){
 
 if(i.second == mx){
  sex = i.first;
 }
 
 
}
cout<<sex<<endl;
 
  
 //cout<<n<<endl;
 }
 
 
 
 
 
 