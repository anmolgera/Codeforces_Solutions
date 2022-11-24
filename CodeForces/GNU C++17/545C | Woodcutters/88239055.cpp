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
  int n;
  cin>>n;
 
  vector<pair<int,int>> v1;
 
 
  for(int i =0; i<n; i++){
    
    int x,y;
    cin>>x>>y;
 
    v1.push_back({x,y});
  }
    int count =0;
 
 
    if(n==1 || n==2){
      cout<<n<<endl;
    }
 
   else {
 
 
     for(int i =1; i<n-1; i++){
 
         if(v1[i-1].first<(v1[i].first-v1[i].second)){
 
          count++;
         }
 
         else if(v1[i+1].first>(v1[i].first+v1[i].second)){
 
          count++;
 
          v1[i].first = (v1[i].first+v1[i].second);
         }
 
 
 
     }
 
  cout<<count+2<<endl;
 
 
 
 
   }
 
  }
 
    
 
 
 
 
    
 
 
   