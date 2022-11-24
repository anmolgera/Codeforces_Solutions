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
 
      string s;
      cin>>s;
 
      int a[n];
      map<int,int> mp;
      //mp[s[1]]++;
 
      for(int i =0; i<s.length(); i++){
 
 
        a[i] = s[i]-'1';
      }
      
      mp[0]++;
      int sum =0;
      int cnt =0;
      for(int i =0; i<n; i++){
        
        sum+=a[i];
        //sum--;
        cnt+=mp[sum];
        mp[sum]++;
       
       
 
 
 
      }
 
      cout<<cnt<<endl;
 
 
 
    }
  
    }
  
 
 
 
 
 
 
 
 
 
 
 
 
 