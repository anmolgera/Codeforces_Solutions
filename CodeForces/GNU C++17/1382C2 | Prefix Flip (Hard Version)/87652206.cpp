#include<bits/stdc++.h>
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
const int N = 1e6 + 5 ;
//int a[N] , dp[N] , freq[N];
 
 
int32_t main()
{
    anmol();
    
     int t;
     cin>>t;
 
     while(t--){
 
     int n;
     cin>>n;
 
     string a;
     string b;
 
     cin>>a;
     cin>>b;
     vector<int> v;
 
     for(int i =1; i<n; i++){
 
         if(a[i]!=a[i-1]){
 
            v.push_back(i);
         }
 
 
     }
 
     if(a[n-1]!=b[n-1]){
 
        v.push_back(n);
     }
 
     vector<int> v1;
 
 
     for(int i =1; i<n; i++){
 
            if(b[i]!=b[i-1]){
 
                v1.push_back(i);
            }
 
     } 
reverse(v1.begin(),v1.end());
 
cout<<v.size()+ v1.size()<<" ";
 
for(int i =0; i<v.size(); i++){
 
 
    cout<<v[i]<<" ";
}
 
 
for(int i =0; i<v1.size(); i++){
 
    cout<<v1[i]<<" ";
}
 
cout<<endl;
 
 
 
}}