#include <bits/stdc++.h>
using namespace std ;
# define int long long 
//#define inf 2000000
 
int32_t main(){
 
    //ttm = clock();
    
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int t;
    cin>>t;
 
    while(t--){
     
    vector<int> adj(200000,0);
 
     int n;
     cin>>n;
 
     int x;
     cin>>x;
 
 
     for(int i =0; i<n-1; i++){
 
 
        int u,v;
        cin>>u>>v;
 
        adj[u]++;
        adj[v]++;
        //adj[v]++;
     }
 
    if(adj[x]<=1){
  
      cout<<"Ayush"<<endl;
 
    }
 
    else {
 
        if(n%2){
 
            cout<<"Ashish"<<endl;
        }
 
        else cout<<"Ayush"<<endl;
 
 
    }
 
    }
}