#include <bits/stdc++.h>
using namespace std;
//#define int long long 
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 
 
int main(){
 
 
anmol();
 
int t;
cin>>t;
while(t--){
 
int n;
cin>>n;
 
 
int a[n];
 
for(int i =0; i<n; i++){
 
  cin>>a[i];
}
 
int res[n];
//memset(res,-1,sizeof(res));
for(int i =0; i<n; i++) res[i] = -1;
 
int p[11] = {2,3,5,7,11,13,17,19,23,29,31};
int count =0;
 
for(int i =0; i<11; i++){
// count++;
 bool flag = false;
 for(int j = 0; j<n; j++){
 
    if(a[j]%p[i]==0 && res[j]==-1){
         
 
         if(flag == false){
          flag = true;
          count++;
         }
         res[j] = count;
 
    }
 
 
 }
 
 
 
 
 
 
 
}
 
 
cout<<count<<endl;
 
 for(int i =0; i<n; i++){
 
  cout<<res[i]<<" ";
 }
 
 cout<<endl;
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}