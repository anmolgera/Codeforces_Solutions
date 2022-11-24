#include <bits/stdc++.h>
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
 
 
int32_t main(){
 
anmol();
 
 
 
 int n;
 cin>>n;
 int a[n];
 for(int i =0; i<n; i++){
 
  cin>>a[i];
 } 
 
 
map<int,bool> mp;
vector<int> v;
int sum =0;
 
int count =0;
 
 for(int i = 0; i<n; i++){
 
    if(a[i]<0 && (mp.count(abs(a[i]))==0)){
 
      cout<<-1<<endl;
      return 0;
      //break;
    }
   
    //cout<<a[i]<<" ";
 
    if(mp.count(a[i])!=0){
      cout<<-1<<endl;
      return 0;
      //break;
    }
    sum+=a[i];
    if(a[i]>0){
      mp[a[i]]= true;
    }
    
    count++;
    
    if(sum<0){
 
      cout<<-1<<endl;
      return 0;
    }
    
    if(sum==0){
        
    v.push_back(count);
    mp.clear();
    count =0;
 
    }
 
}
 
if(sum!=0){
 
  cout<<-1<<endl;
  return 0;
}
 
cout<<v.size()<<endl;
int ans = v.size();
for(int i =0; i<ans; i++){
 
  cout<<v[i]<<" ";
}
 
 
cout<<endl;
}
 
 
 
 
 
 
 
 
 
 
 