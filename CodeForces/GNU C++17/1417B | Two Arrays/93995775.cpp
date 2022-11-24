#include<bits/stdc++.h>
using namespace std;
#define int long long
int m;
 
  /*  for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j+=i){
            a[j]++;
        }
    }
 
    */
int32_t main(){
 
int t;
cin>>t;
 
while(t--){
 
 int n;
 cin>>n;
 int k;
 cin>>k;
 
 int a[n];
 for(int i =0; i<n; i++){
 
  cin>>a[i];
 }
 
 /*if(k%2){
   
for(int i =0; i<n; i++)
 
{
 
  if(a[i]%2==0){
    cout<<1<<" ";
  }
 
  else cout<<0<<" ";
}
 
cout<<endl;
 }
 
 else {
  
     bool flag =0;
 
     for(int i =0; i<n; i++){
 
      if(a[i]%2==0){
 
        cout<<1<<" ";
      }
 
      else {
 
        if(!flag){
          cout<<0<<" ";
          flag =1;
        }
 
        else cout<<1<<" ";
      }
     }
  
 
 */
 
 map<int,int> mp1;
 map<int,int> mp2;
 
 vector<int> v;
 
 
 for(int i=0; i<n; i++){
 
   int x = a[i];
 
   if(mp1.count(x)==0){
    
     mp1[k-x]++;
     v.push_back(0);
 
   } 
 
   else if(mp2.count(x)==0){
        mp2[k-x]++;
        v.push_back(1);
   }
 
   else {
 
 
       int sex = mp1[x];
       int blow = mp2[x];
 
       if(sex<blow){
 
        mp1[k-x]++;
        v.push_back(1);
       }
 
       else {
         
 
         mp2[k-x]++;
 
        v.push_back(0);
 
        }
 
 
   }
 
 }
 
 int s = v.size();
 
 for(int i =0; i<s; i++){
 
  cout<<v[i]<<" ";
 }
 
 cout<<endl;
 
 }
 
 }
 
 
 
 
 
 
 
 
 
 