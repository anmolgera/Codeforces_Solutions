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
 
 int32_t main(){
  anmol();
  
 
  int n;
  cin>>n;
 
  vector<int> a(n,0); 
  int min1 =INT_MAX;
  
  //vector<bool>vis(n,false);
   
 
   for(int i=0; i<n; i++){
 
    cin>>a[i];
   }
    
  /* for(int i =0; i<n; i++){
 
    cout<<a[i]<<" " ; 
   }
   */
   //cout<<endl;
 
   unordered_set<int> s;
 
   for(auto i : a){
 
    s.insert(i);
   }
    
   int sex=0;
 
  /* for(auto i : s){
 
    cout<<i<<" ";
   }
   */
   for(int i =0; i<n; i++){
   // cout<<a[i]<<" ";
    if((s.find(3*a[i])==s.end() ) && !((a[i]%2==0) &&s.find(a[i]/2)!=s.end())){
 
        sex = a[i];
        break;
    }
 
 
   }
 
  
 
  vector<int> ans;
 
 
  for(int i =0; i<n; i++){
   
   ans.push_back(sex);
  // cout<<sex<<"hi "<<endl;
 
   if(sex%3==0 && s.find(sex/3)!=s.end()){
 
    sex =sex/3;
   }
  
   else sex = 2*sex;
 
  }
 
   
   for(int i =0; i<n; i++){
 
    cout<<ans[i]<<" ";
   }
 
   cout<<endl;
 
 
 }
 
 
 
 
 
 