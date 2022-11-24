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
 
 
 
 
void solve(){
 //cout << "NO" << endl;
//cout << "YES" << endl;
//string s;
//cin>>s;
int n;
cin>>n;
 
 
vector<int> a ={};
//int a[n];
for(int i =0; i<n; i++){
 
    int x;
    cin>>x;
    a.push_back(x);
}
 map<int,int> mp;
 
 for(int i =0; i<n; i++){
   // cout<<a[i]<<" ";
 }
 //cout<<endl;
for(int i = n-1; i>=0; i--){
 
   if(mp.find(a[i]+1)==mp.end()) a[i]=a[i]+1;
    //cout<<a[i];
    mp[a[i]]++;
 
 
 
 
 
}
//cout<<endl;
cout<<mp.size()<<endl;
mp.clear();
a.clear();
 
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