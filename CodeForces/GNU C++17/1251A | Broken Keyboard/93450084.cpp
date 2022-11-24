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
 
 
 
/*bool check(string s){
 
 if(s.length()==1){
  return true;
 }
 
 for(int i =1; i<s.length(); i++){
 
  if(abs(s[i]-s[i-1])==1){
    return false;
  }
 
 
 }
 
 return true;
 
*/
 
 
int32_t main(){
 
anmol();
 
int t;
cin>>t;
 
while(t--){
 
string s;
cin>>s;
 
stack<char> st;
stack<char> st2;
 
for(int i =0; i<s.length(); i++){
 
   /*if(st.empty()){
    continue;
   }*/
  
  if(i>0){
   
   if(!st.empty() && (s[i]==st.top())){
    st.pop();
    continue;
   }
  }
   
   if(!st.empty() && (s[i]!=st.top())){
    char x = st.top();
    st.pop();
    st2.push(x);
   // continue;
   }
  
   st.push(s[i]);
 
 
}
 
 
string res ="";
 
while(!st.empty()){
  char sex = st.top();
  st.pop();
  res+=sex;
}
 
while(!st2.empty()){
 
  char sex = st2.top();
  st2.pop();
  res+=sex;
}
sort(res.begin(),res.end());
 
//cout<<res<<endl;
set<char> sex;
 
for(int i =0; i<res.length(); i++){
  //cout<<res[i];
  sex.insert(res[i]);
}
 
for(auto i : sex){
  cout<<i;
}
 
cout<<endl;
 
}
 
}
 