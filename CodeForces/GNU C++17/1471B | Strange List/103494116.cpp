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
 
int n;
cin>>n;
int x;
cin>>x;
vector<pair<int,int>> v;
for(int i =0; i<n; i++){
  int y;
  cin>>y;
  v.push_back({y,1});
}
/*for(int i =0; i<v.size(); i++){
  cout<<v[i].first<<" ";
}*/
//cout<<endl;
for(int i =0; i<v.size(); i++){
    if(v[i].first%x==0){
      //cout<<v[i].first/x<<" ";
      v.push_back({v[i].first/x,x*v[i].second});
      //v[i].f
    }
    
    else {
       break;
    }
 
}
//cout<<endl;
int sum =0;
for(int i =0; i<v.size(); i++){
  sum+=(v[i].first*v[i].second);
  //cout<<v[i].first<<" ";
}
 
cout<<sum<<endl;
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