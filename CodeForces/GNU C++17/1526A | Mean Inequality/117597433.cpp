#include<bits/stdc++.h>
using namespace std;
//#define int long long
 
void anmol()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int32_t main(){
anmol();
int t;
t=1;
 
cin>>t;
//int z =0;
while(t--){
 
  int n;
  cin>>n;
  int a[2*n];
  for(int i =0; i<2*n;  i++) cin>>a[i];
  sort(a,a+2*n);
  int i =0;
  int j = 2*n-1;
  bool flag = false;
  while(i<=j){
  if(!flag){
      cout<<a[i]<<" ";
      i++;
      flag = true;
  }
 
  else {
      cout<<a[j]<<" ";
      j--;
      flag = false;
  }
  }
   
 cout<<endl;  
}
 
}