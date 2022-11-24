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
 
bool check (string s){
 
 int i =0;
 int j = s.length()-1;
 
 
 while(i<=j){
 
    if(s[i]!=s[j]){
      return false;
    }
    i++;
    j--;
 
 }
 
 
return true;
 
 
}
 
 
 
int32_t main(){
 
 
anmol();
 
string s;
cin>>s;
 
 
/*if(check(s)){
 
  cout<<"First"<<endl;
}
 
else cout<<"Second"<<endl;
*/
 
 
int a[26] ={0};
 
for(int i =0; i<s.length(); i++){
     
     a[s[i]-'a']++;
 
 
 
}
 
 
int k =0;
for(int i =0; i<26; i++){
 
if(a[i]%2==1){
  k++;
}
 
 
}
 
//cout<<k<<endl;
if(k%2  || k==0){
  cout<<"First"<<endl;
}
 
else cout<<"Second"<<endl;
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 