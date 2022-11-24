#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
int32_t main(){
 
 
string s;
cin>>s;
 
 
int t;
cin>>t;
 
int n = s.length();
int a[n];
a[0] =0;
 
for(int i =0; i<s.length()-1; i++){
 
 
    if(s[i]==s[i+1]){
         
 
         a[i+1]=a[i]+1;
    }
 
    else a[i+1] = a[i];
}
 
 
while(t--){
 
 
 int l,r;
 cin>>l>>r;
 
 cout<<a[r-1]-a[l-1]<<endl;
 
// cout<<count<<endl;
 
 
 
}
 
 
}
 
 