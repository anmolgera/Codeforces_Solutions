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
 
//cout<<"YES"<<endl;
//cout<<"NO"<<endl;
//cout<<" "<<endl;
 
int x;
cin>>x;
 
int y;
cin>>y;
 
 
 
 
int n;
cin>>n;
 
 
 
int a[n];
//vector<int> v;
map<int,int> ma;
map<int,int> mb;
for(int i =0; i<n; i++){
  cin>>a[i];
  ma[a[i]]++;
}
 
int b[n];
for(int i =0; i<n; i++){
 
  cin>>b[i];
  mb[b[i]]++;
}
int ans =0;
for(int i =0; i<n; i++){
 
ans+=(n-1)-(ma[a[i]]-1) -(mb[b[i]]-1);
 
}
 
cout<<ans/2<<endl;
 
 
 
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
/*Hello Kanika,
I am Anmol Gera currently in my final year. I came across a FTE opening at Amazon - Bangalore.
The job id for the same is: 1391296
Here, is the link for the same:
https://www.amazon.jobs/en/jobs/1391296/software-development-engineer
 
Leetcode -https://leetcode.com/anmolgera/
Codeforces -https://codeforces.com/profile/DumbCarlsen69
 
I have Solved around 1000 questions on all the sites Combined. Have participated in more than 70 contests on codeforces and Currently a specialist.
You can see my cv, I have attached that as well.
Thanks a lot for your valuable time.
*/
 
  }
 
}