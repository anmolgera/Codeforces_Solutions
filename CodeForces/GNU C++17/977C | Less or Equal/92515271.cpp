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
 
  int k;
  cin>>k;
 
  int a[n];
  
  int min1 = INT_MAX;
  for(int i =0; i<n; i++){
    cin>>a[i];
    min1 = min(a[i],min1);
  }
  
 sort(a,a+n);
  
  if(k==0){
   
    if(min1-1<1){
        cout<<-1<<endl;
    }
    else cout<<min1-1<<endl;
  }
 
  else if(n==k){
 
    cout<<a[k-1]<<endl;
  }
 
  else if(n>k){
 
    if(a[k-1]==a[k]){
 
      cout<<-1<<endl;
    }
 
    else cout<<a[k-1]<<endl;
 
  }
  
 
 }
 
 
 
 
 
 