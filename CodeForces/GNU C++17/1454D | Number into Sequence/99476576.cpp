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
 
void primeFactors(int n, map<int,int>&mp)  
{  
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        //cout << 2 << " ";
        mp[2]++;  
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            //cout << i << " ";
            mp[i]++;  
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2) mp[n]++; 
        //cout << n << " ";  
}  
 
void solve(){
 
int n;
cin>>n;
 
map<int,int> mp;
mp.clear();
primeFactors(n,mp);
 
int mx =INT_MIN;
int element =INT_MAX;
for(auto i : mp){
//cout<<i.first<<" "<<i.second<<endl;
if(i.second>mx){
  mx = i.second;
   element = INT_MAX;
   if(i.first<element){
    element = i.first;
   }
 
}
 
}
 
//mp[element]-=(mx-1);
int count = mx;
//cout<<element<<endl;
 
//cout<<element<<" "<<mx<<"Hi"<<endl;
 
if(element==n){
  cout<<1<<endl;
  cout<<element<<endl;
}
 
 
 
else {
cout<<count<<endl;
 
//int pro =1;
int pro = 1;
for(int i =0; i<mx-1; i++){
 
  cout<<element<<" ";
  pro*=element;
}
 
cout<<(n/pro)<<endl;
 
 
 
 
 
}
 
 
 
 
}
 
 
 
 
 
int32_t main(){
 
 
  anmol();
  int t;
  //t =1;
  cin>>t;
  while(t--){
        
        //int a,b;
        //cin>>a>>b;
 
    solve();
 
        //cout<<fact[a] - fact[b];
        // look for base cases always 
 
 
 
  }
 
}