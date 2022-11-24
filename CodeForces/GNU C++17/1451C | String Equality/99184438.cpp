/* Author : Anmol Gera
NSIT 4th Year */
 
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
 
 
 
 
 
void solve(){
 
int n;
cin>>n;
 
int k;
cin>>k;
 
 string a;
 cin>>a;
 
 
 string b;
 cin>>b;
 
 int count1[26];
 int count2[26];
 
 
 for(int i =0; i<26; i++){
 
 
  count1[i]=0;
  count2[i]=0;
 }
 
 
  
  for(int i =0; i<n; i++){
 
    count1[a[i]-'a']++;
    count2[b[i]-'a']++;
  }
 
  bool flag =  true;
 
   for(int i =0; i<26; i++){
      
      int x = min(count1[i],count2[i]);
      count1[i]-=x;
      count2[i]-=x;
 
 
 
 
   }
  
  for(int i =0; i<26; i++){
 
    if(count1[i]%k){
      flag = false;
      break;
    }
 
    if(count2[i]%k){
      flag = false;
      break;
    }
     
     int x = min(count1[i],count2[i]);
      count1[i]-=x;
      count2[i]-=x;
 
     if(i!=25){
        
        count1[i+1]+=count1[i];
        count1[i] =0;
     }
 
 
 
 
 
 
 
  }
 
 for(int i =0; i<26; i++){
 
  if(count1[i]>0){
    flag= false;
    break;
  }
 }
 
 
if(flag){
  cout<<"YES"<<endl;
}
 
else cout<<"NO"<<endl;
 
}
 
 
 
 
 
int32_t main(){
 
 
  anmol();
  int t;
  ///t =1;
  cin>>t;
  while(t--){
        
        //int a,b;
        //cin>>a>>b;
 
    solve();
 
        //cout<<fact[a] - fact[b];
        // look for base cases always 
 
 
 
  }
 
}