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
 
 
string s;
cin>>s;
 
 
stack<char> st;
int count =0;
 
for(int i =0; i<s.length(); i++){
 
if(i>0){
 // cout<<st.top()<<endl;
  if(!st.empty() && s[i]==st.top()){
    st.pop();
    count++;
    continue;
  }
 /* else {
    st.push(s[i]);
    continue;
  }*/
}
 
//cout<<s[i]<<" ";
st.push(s[i]);
 
}
 
//cout<<count<<endl;
if(count%2==0 ){
  cout<<"NO"<<endl;
}
 
else cout<<"YES"<<endl;
 
 
 
 
 
 
 
 
//cout<<ans<<endl;
 
 
 
 
 
}