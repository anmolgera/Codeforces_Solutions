#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
#define int long long 
 
int mod(int x){
    if(x>=0){
        return x;
    }
    
    return -x;
}
 
 
vector<int> countDigit(int n)
{
    vector<int>ret;
    while (n != 0) 
    {
        ret.push_back(n%10);
        n = n / 10;
     
    }
    return ret;
}
 
bool check(int mid,set<int>s,int n){
    for(auto it=s.begin();it!=s.end();it++){
        int val = *it;
        if(mid%val!=0 && val<=mid){
            return true;
        }
    }
    
    return false;
    
    
    
    
}
 
bool ispallidrome(string s){
 
 
    int i =0;
    int j= s.length();
    while(i<=j){
        if(s[i++]!=s[j--]){
            return false;
        }
    }
    return true;
}
 
 
void solve(){
 //cout << "NO" << endl;
//cout << "YES" << endl;
    //h
string s;
cin>>s;
string res = s;
int n = res.length();
if(n==1){
 
    cout<<0<<endl;
    return;
}
 
else if(n==2){
 
    if(res[0]==res[1]){
        cout<<1<<endl;
        return;
    }
    else {
        cout<<0<<endl;
        return;
    }
}
else {
for(int i =1; i<res.length(); i++){
 if( res[i]==res[i-1] || ((i-2>=0) && res[i]==res[i-2])){
    res[i] = '*';
 }
 
 
}
int ans =0;
for(int i =0; i<res.length(); i++){
ans+=(res[i]=='*');
 
 
}
cout<<ans<<endl;
}
}
 
 
 
int32_t main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
   cin>>t;
    while(t){
        t--;
      solve();
     
    }
    
    
}