/* Author : Anmol Gera
NSIT ECE 4th Year */ 
 
#include<bits/stdc++.h>
 
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
int32_t main()
{
    anmol();
 
    int t;
    t =1;
    //cin>>t;
    while(t--){
     
         int n;
         cin>>n;
 
         int a[n+1];
         int check[n+1];
         for(int i =0; i<n; i++){
 
            cin>>a[i];
         }
 
         for(int i =1; i<=n; i++){
 
            check[i] =0;
         }
 
 
         for(int i =0; i<n; i++){
 
 
            check[a[i]]++;
            //s.insert(i);
         }
 
           set<int> s;
 
         for(int i =1; i<=n; i++){
 
 
            if(check[i]==0) { s.insert(i); 
 
            }
         }
        
 
      
        for(int i =0; i<n; i++){
 
 
             if(a[i]==0 && check[i+1]==0){
 
 
              for(auto it = s.rbegin(); it!=s.rend(); it++){
 
                     
                     if(*it!=i+1){
                     a[i] = *it;
                     s.erase(*it);
                     break;
 
                     }
 
              }
 
 
 
 
 
             }
 
 
 
 
         
 
 
 
 
      
 
 
 
 
    }
 
 
    auto  it = s.begin();
    for(int i =0; i<n; i++){
 
             if(a[i]==0){
 
                      a[i] = *it;
                      it++;
             }
 
    }
   
 
   for(int i =0; i<n; i++){
 
 
    cout<<a[i]<<" ";
 
 
       }
 
        }
    
 
}
 
    
 
 
 
 