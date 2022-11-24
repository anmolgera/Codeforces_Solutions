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
 
/*void stoneGameVI(vector<int>&aliceValues, vector<int>& bobValues) {
        
        
       // vector<int> num(aliceValues.size(),0);
        int n = aliceValues.size();
        priority_queue<pair<int,int>> pq;
        for(int i =0; i<n; i++){
            
            //num[i] = min(aliceValues[i],bobValues[i]);
            pq.push(make_pair(aliceValues[i]+bobValues[i],i));
            
        }
        int alice_sum =0;
        int bob_sum =0;
        int cnt =0;
        while(!pq.empty()){
            auto i = pq.top();
            pq.pop();
            if(cnt%2==0){
                alice_sum+=aliceValues[i.second];
            }
            
            else {
                
                bob_sum+=bobValues[i.second];
            }
            
            cnt++;
            
            
        }
       
        if(alice_sum>bob_sum){
            //return 1;
            cout<<"Alice"<<endl;
            //cout<<t<<endl;
        }
        else if(alice_sum==bob_sum){
           cout<<"Tie"<<endl;
           //cout<<t<<endl;
 
        }
        else  cout<<"Bob"<<endl;
        //pq.empty();
 
    }
*/
 
void solve(){
int n,m;
cin>>n>>m;
int a[n];
int b[m];
for(int i =0; i<n; i++){
  cin>>a[i];
  a[i]--;
}
 
for(int i =0; i<m; i++){
  cin>>b[i];
}
 
sort(a,a+n);
reverse(a,a+n);
int cur =0;
int ans =0;
for(int i =0; i<n; i++){
if(cur<=a[i]){
 cur++;
 ans+=b[i];
}
 
else{
  ans+=b[a[i]];
}
 
 
}
 
cout<<ans<<endl;
 
}
 
 
 
int32_t main(){
 
 
  anmol();
  int t;
  ///t =1;
  cin>>t;
  while(t--){
        
       //cout<<"gi"<<endl;
 
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