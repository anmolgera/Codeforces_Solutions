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
 
int n=  s.length();
vector<int> b1(n,0);
//vector<int> a;
//%1000000007
 
b1[n-1] =  (s[n-1] =='b') ? 1 :0;
int ans =0;
 
for(int i = n-2; i>=0; i--){
 
 
    if(s[i]=='b'){
 
      b1[i] = (b1[i+1] +1)%1000000007;
 
    }
 
    else {
 
         ans= (ans + b1[i+1])%1000000007;
         b1[i] = (2*(b1[i+1])%1000000007);
 
 
 
    }
 
 
 
} 
 
 
 
cout<<ans%1000000007<<endl;
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 