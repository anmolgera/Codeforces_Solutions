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
 
 
    int t;
    cin>>t;
    while(t--){
 
       int n;
       cin>>n;
 
       //int a[n];
        int freq[200];
        memset(freq,0,sizeof(freq));
 
       for(int i =0; i<n; i++){
 
        int x;
        cin>>x;
        freq[x]++;
       }
 
 
      
       /*for(int i =0; i<n; i++){
 
        freq[a[i]]++;
       }
      */
 
    /*for(int i =0; i<n; i++){
 
      cout<<freq[i]<<" ";
    }
    */
    //cout<<endl;
 
 
     int ans=0;
 
     for(int i =0; i<102; i++){
 
      if(freq[i]<2){
        ans+=i;
        break;
      }
     }
 
 
     for(int i=0; i<102; i++){
 
      if(freq[i]<1){
        ans+=i;
        break;
      }
     }
   
   cout<<ans<<endl;
 
 
 
    }
  
    }
  
 
 
 
 
 
 
 
 
 
 
 
 
 