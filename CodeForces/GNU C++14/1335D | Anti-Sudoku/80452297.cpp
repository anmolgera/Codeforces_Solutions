#include<bits/stdc++.h>
using namespace std;
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
 
 
 
for(int j =0; j<=9; j++){
string s;
cin>>s;
 
 
for(int i =0;i<s.length(); i++){
 
  if(s[i]=='2'){
   s[i]='1';
  }
 
}
  
cout<<s<<endl;
 
 
}
 
 
}
 
 
 
 
 
 
 
 
}