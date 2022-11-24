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
 
 
    int t;
    cin>>t;
    while(t--){
 
       int n;
       cin>>n;
 
       //int a[n];
        int a[n];
        for(int i =0; i<n; i++){
 
          cin>>a[i];
        }
 
 
       if(a[0]+a[1]>a[n-1]){
 
       cout<<-1<<endl;
       }
     
      else  cout<<1<<" "<<2<<" "<<n<<endl;
 
  
 
 
 
    }
  
    }
  
 
 
 
 
 
 
 
 
 
 
 
 
 