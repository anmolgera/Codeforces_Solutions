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
 
  
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
 
 
void solve(){
 
int d;
cin>>d;
 
int x = 1+d;
int ans1= 0;
int ans2 =0;
 
while(true){
  if(isPrime(x)){
    ans1 = x;
    break;
  }
  x++;
}
x+=d;
while(true){
  if(isPrime(x)){
    ans2 = x;
    break;
  }
  x++;
}
 
cout<<ans1*ans2<<endl;
 
 
 
 
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