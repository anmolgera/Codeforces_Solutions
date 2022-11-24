#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
const int N = 1e6 + 5 ;
int  a[N];
int  b[N];
bool dp[2005][2005];
 
int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
 
bool valid(int x,int y,int n,int m){
    if(x>=0 && y>=0 && x<n && y<m)
    return true;
    return false;
}
 
 
 
 
int32_t main(){
    
  anmol();
 
  int t;
  cin>>t;
 
  while(t--){
    
   string s;
   cin>>s;
   int n = s.length();
 
   int freq[10] ={0};
 
   for(int i =0; i<n; i++){
 
    freq[s[i]-'0']++;
   }
   int ans = INT_MAX;
   for(int i =0; i<10; i++){
   
   ans =min (ans,n-freq[i]);
 
   }
 
   for(int i =0; i<10; i++){
 
 
    for(int j =0; j<10; j++){
 
    
       if(i==j)
            continue;
            int k=0;
            int v=0;
            bool can = true;
            while(k<n){
                while(k<n && s[k]-'0'!=i){
                k++;
                v++;
                }
                if(k==n){
                    can = false;
                    break;
                }
                k++;
                while(k<n && s[k]-'0'!=j){
                k++;
                v++;}
                  if(k==n){
                    can = false;
                    break;
                }
                k++;
                ans = min(ans,v+(n-k));
             }
    }
   }
 cout<<ans<<endl;
  }}