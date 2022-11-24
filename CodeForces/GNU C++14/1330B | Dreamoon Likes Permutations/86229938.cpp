 
        
        
      #include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
 
 
#define int             long long
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
const int N = 1e6 + 5 ;
 int a[N], b[N] , freq[N];
 
 
 
 
int32_t main(){
 
  anmol();
  
  int t;
  cin>>t;
  while(t--){
  
  int n;
  cin>>n;
 
 
  for(int i =0; i<n; i++){
 
    cin>>a[i];
  }
   
  map<int,int> mp;
  map<int,int> mp1;
  map<int,int> mp2;
  map<int,int> mp3;
 
 
 int j =0;
 
  for(int i =0; i<n; i++){
 
       if(mp.count(a[i])==0){
 
        mp[a[i]]++;
       }
 
       else { 
 
        j = i;
        break;
 
     }
  }
 
 
 
  for(int i =j; i<n; i++){
 
       if(mp1.count(a[i])==0){
 
        mp1[a[i]]++;
       }
 
       else break;
 
 
  }
 
 
int k =0;
 
  for(int i =n-1; i>=0; i--){
 
       if(mp2.count(a[i])==0){
 
        mp2[a[i]]++;
       }
 
       else { 
 
        k = i;
        break;
 
     }
  }
 
 
 
  for(int i =k; i>=0; i--){
 
       if(mp3.count(a[i])==0){
 
        mp3[a[i]]++;
       }
 
       else break;
 
 
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
   bool flag1 = true;
   int max1 = INT_MIN;
  for(auto i = mp.begin(); i!=mp.end(); i++){
    
    //cout<<i->first<<" ";
    if(i->first > max1){
 
      max1 = i->first;
    }
 
  }
  //cout<<endl;
  
  bool flag2= true;
  int max2 = INT_MIN;
  for(auto i = mp1.rbegin(); i!=mp1.rend(); i++){
    
    //cout<<i->first<<" ";
    if(i->first > max2){
  
      max2 = i->first;
    }
 
  }
  //cout<<mp.size()<<" "<<mp1.size()<<endl;
  //cout<<endl;
 
   bool flag3 = true;
   int max3 = INT_MIN;
  for(auto i = mp2.begin(); i!=mp2.end(); i++){
    
   // cout<<i->first<<" ";
    if(i->first > max3){
 
      max3 = i->first;
    }
 
  }
 
 
 bool flag4= true;
  int max4 = INT_MIN;
  for(auto i = mp3.rbegin(); i!=mp3.rend(); i++){
    
   // cout<<i->first<<" ";
    if(i->first > max4){
  
      max4 = i->first;
    }
 
  }
 
 
 
 
 
 
 
 
 
 
//  cout<<endl;
 
 
 
 
 
  
  if(mp.size()!=max1){
 
      flag1 = false;
  }
 
  if(mp1.size()!=max2){
 
    flag2 = false;
  }
  
 
 
  if(mp2.size()!=max3){
 
      flag3 = false;
  }
 
  if(mp3.size()!=max4){
 
    flag4 = false;
  }
  
  
  if( flag1 && flag2  && flag3 && flag4 && (mp.size()==mp2.size()) && (mp.size()+mp1.size()==n) ){
    
 
    if(mp.size()==mp2.size() && mp.size()==n/2){
 
 
      cout<<1<<endl;
      cout<<mp.size()<<" "<<mp1.size()<<endl;
 
    }
 
    else {
    cout<<2<<endl;
    cout<<mp.size()<<" "<<mp1.size()<<endl;
    cout<<mp1.size()<<" "<<mp.size()<<endl;
    }
 
  }
 
 
  else if( (flag1 && flag2 )    || (flag3 && flag4) ){
 
    
 
    if(mp.size() + mp1.size()==n){
      cout<<1<<endl;
    
    if(flag1 && flag2)
    cout<<mp.size()<<" "<<mp1.size()<<endl;
 
     else   cout<<mp3.size()<<" "<<mp2.size()<<endl;
 
      }
 
   
 
    
    else cout<<0<<endl;
  }
 
 
 /* else if(flag1 && !flag2 || !flag1 && !flag2){
 
    cout<<1<<endl;
 
    //if(!flag1 || !flag2)
    cout<<mp2.size()<<" "<<mp3.size()<<endl;
    //cout<<y<<" "<<mp.size()<<endl;
   // else cout<<mp2.size()<<" "<<mp3.size()<<endl;
 
  }
 
 
   else if(flag3 && !flag4 || !flag3 && flag4){
 
    cout<<1<<endl;
 
    //if(!flag1 || !flag2)
    cout<<mp1.size()<<" "<<mp2.size()<<endl;
    //cout<<y<<" "<<mp.size()<<endl;
   // else cout<<mp2.size()<<" "<<mp3.size()<<endl;
 
  }*/
 
 else  {
 
   cout<<0<<endl;
 
 }
 /*int count =0;
 bool s1 = false;
 bool s2 = false;
 
  if(n-mp.size()==mp1.size() ){
 
    count++;
    s1 = true;
 
  }
 
  if(n-mp1.size()==mp.size()){
 
    count++;
    s2 = true;
 
  }
 
  cout<<count<<endl;
 
 
  if(count ==1 && s1){
 
     cout<<mp.size()<<" "<<n-mp1.size()<<endl;
 
  }
 
 
  else if(count ==1 && s2){
 
     cout<<mp1.size()<<" "<<mp.size()<<endl;
 
  }
 
 
  else if(count ==0){
 
    cout<<0<<endl;
  }
 
  else {
 
 
    cout<<2<<endl;
     cout<<mp.size()<<" "<<mp1.size()<<endl;
      cout<<mp1.size()<<" "<<mp.size()<<endl;
 
  }
 */
 }
 
  }
  
 
 
   
 
   
  
 
   
   
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  