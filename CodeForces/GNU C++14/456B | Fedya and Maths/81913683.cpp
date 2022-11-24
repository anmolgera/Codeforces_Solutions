 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define f(n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<int>
#define pb push_back
#define si set<int>
#define mod 1000000007
#define cl(n,m) (ceil(double(n)/double(m)))
#define T() int t; cin>>t; while(t--)
 
signed main(){
 int n;
 string s;
 cin>>s;
 n+=(s[s.length()-1]-'0');
 if(s.length()>1) n+=(10*(s[s.length()-2]));
 if(n%4==0) cout<<"4\n";
 else cout<<"0\n";
}