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
 
 
bool ifperfect ( int num){
return (!(num-sqrt(num)*sqrt(num)));
}
 
 
string check(string s){
 
 if(s.size()%2){
  return s;
 }
 
 
 string s1 = check(s.substr(0,s.size()/2));
 string s2 = check(s.substr(s.size()/2,s.size()/2));
 
 
 if(s1<s2){
  return s1+s2;
 
   }
 
else return s2+s1;
 
}
int32_t main(){
 
anmol();
int t;
cin>>t;
 
map<int,int> sex;
map<int,int> sey;
 
 
map<pair<int,int>,int> blowjob;
 
 
int ans =0;
 
while(t--){
 
 int x,y;
 cin>>x>>y;
 
 ans+=sex[x]++;
 ans+=sey[y]++;
 
 ans-=blowjob[{x,y}]++;
 
 ///cout<<ans<<"Hi"<<endl;
 
 
 
 
 
 
}
 
cout<<ans<<endl;
 
 
 
}