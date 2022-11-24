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
 
 
 /*void dfs(int node, int &vertices, int& edges){
 
 
    if(vis[node]){
        return;
    }
    //cout<<"sex"<<endl;
    vis[node] = 1;
    ++vertices;
    
    edges +=adj[node].size();
 
    for(int i : adj[node]){
   
       if(!vis[i]){
       
        dfs(i,vertices,edges);
       }
 
    }
 
 }
 
*/
 
 
 int32_t main(){
   anmol();
   
    int t;
    cin>>t;
 
    while(t--){
 
    int n;
    cin>>n;
 
    int a[n];
    unordered_set<int> s;
    unordered_set<int>s2;
 
    for(int i =0; i<n; i++){
 
 
        cin>>a[i];
 
    }
 
    vector<int> sex;
    vector<int> no;
 
 
    for(auto i : a){
 
        if(s.find(i)!=s.end()){
           
            if(s2.find(i)!=s.end()){
               continue;
             }
            sex.push_back(i);
            s2.insert(i);
 
        }
 
        else {
 
 
            s.insert(i);
            no.push_back(i);
        }
    }
  
    
    for(int i =0; i<no.size(); i++){
 
 
    }
 
    sort(no.begin(),no.end());
    sort(sex.begin(),sex.end());
 
    int element =0;
 
    bool flag = true;
    for(int i =0; i<no.size(); i++){
 
 
        if(i!=no[i]){
 
            element+=i;
            flag = false;
            break;
        }
    }
 
    if(flag){
        element +=no.size();
    }
     flag = true;
     for(int i =0; i<sex.size(); i++){
 
 
        if(i!=sex[i]){
 
            element+=i;
            flag = false;
            break;
        }
    }
if(flag){
 
    element +=sex.size();
}
cout<<element<<endl;
 
    }
  
 }
 
 
 
 
 
 