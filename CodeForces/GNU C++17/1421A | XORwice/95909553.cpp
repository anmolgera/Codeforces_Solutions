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
 
    while(n--){
 
 
     int a,b;
     cin>>a>>b;
     //int mn = max(a,b);
    /* int j =0;
     for(int i =0; i<=(a+b)+1; i++){
        int x = a^i + b^i;
        if(x < mn){
          //cout<<(a^i + b^i)<<"  "<<n<<" "<<i<<endl;
          mn  = x;
          //j =i;
        }
 
     }
 
 
    // cout<<j<<endl;
   /* */
 
    int x = a^b;
    // cout<<mn<<endl;
     //cout<<mn<<endl;
     cout<<x<<endl;
 
    }
    }
  
 
 
 
 
 
 
 
 
 
 
 
 
 