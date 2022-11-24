/* Author : Anmol Gera
NSIT 4th Year */
 
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
 
bool isPerfectSquare(long double x) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 
 
/*
while(lo < hi) {
int mid = lo + (hi - lo) / 2;
if(Special condition passed)(optional):
  return mid; 
if(condition passed)
  hi = mid;
else 
  lo = mid + 1;
}
return lo;
*/
 
void solve(){
 
int n,k;
cin>>n>>k;
 
string res ="";
int cnt =0;
 
for(int i =0; i<n; i++){
 
 cnt = cnt%3;
 if(cnt ==0){
  res+= 'b';
 
  }
 
  else if(cnt==1){
    res+='a';
  }
 
  else res+='c';
 
  cnt++;
 
}
cout<<res<<endl;
return;
 
 
}
 
int32_t main(){
 
 
  anmol();
  int t;
  ///t =1;
  cin>>t;
  while(t--){
 
 
        //hhgfhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
        //hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
        //hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
        //hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
    ///  hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh'b'
 
        
        //int a,b;
        //cin>>a>>b;
 
    solve();
   //""""""""""""
        //cout<<fact[a] - fact[b];
        // look for base cases always 
       
//lkjgfdsaqwertyuiop.,mnbvcxz=-87564321`()hH" "
 
 
 
  }
 
}