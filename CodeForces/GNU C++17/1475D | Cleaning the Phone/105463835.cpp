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
int mod = 1e9 + 7,mxn=3e5 + 5;
 
          int add(int a, int b,int mod) {
                a%=mod;
                b%=mod;
                a += b;
                if (a >= mod) a -= mod;
                if(a<0)
                {
                    a += mod;
                    a %= mod;
                }
                return a;
            }
 
            int mul(int a, int b,int mod) {
                a%=mod;
                b%=mod;
                a *= b;
                a += mod;
                return a % mod;
            }
            int po(int a,int b,int mod)
            {
                if(b==0)
                    return 1;
                if(b%2==0)
                    return po(mul(a,a,mod),b/2,mod);
                return mul(a,po(mul(a,a,mod),(b-1)/2,mod),mod);
            }
 
 
            int fact[200003];
            int inv[200003];
 
            void fact0()
            {
                int i,j;
                fact[0]=1;
                for(i=1;i<=200000;i++)
                {
                    fact[i]=i*fact[i-1]%mod;
                }
                inv[0]=1;
                inv[1]=1;
                int p=mod;
                for (i=2; i<=200000; i++)
                    inv[i] = (p - (p/i) * inv[p%i] % p) % p;
 
                for(i=2;i<=200000;i++)
                {
                    inv[i]*=inv[i-1];
                    inv[i]%=mod;
                }
            }
            int Comb(int a,int b)
            {
               // cout<<a<<" "<<b<<endl;
                int an = fact[a];
                //cout<<an<<endl;
                an *= inv[b];
                an %= mod;
                an *= inv[a-b];
                an %= mod;
                return an;
            }
 
 
 
void solve(){
  
int n;
cin>>n;
int m;
cin>>m;
 
int a[n];
for(int i =0; i<n; i++){
  cin>>a[i];
}
 
 
vector<int> imp;
vector<int> reg;
 
for(int i =0; i<n; i++){
  int x;
  cin>>x;
  if(x==2){
    imp.push_back(a[i]);
  }
 
  else reg.push_back(a[i]);
 
 
}
 
 
sort(imp.begin(),imp.end());
reverse(imp.begin(),imp.end());
sort(reg.begin(),reg.end());
reverse(reg.begin(),reg.end());
 
 
 
for(int i =1; i<imp.size(); i++){
  imp[i] =  imp[i] + imp[i-1];
}
 
for(int i =1; i<reg.size(); i++){
  reg[i] = reg[i] + reg[i-1];
}
 
 
 
int ans = INT_MAX;
 
 
for(int i =0; i<=imp.size(); i++){
 
  int cost = 2*i;
  int sum =0;
  if(i>0){
    sum = imp[i-1];
  }
 
  if(sum>=m){
    ans = min(ans,cost);
  }
 
  else {
 
  int k = lower_bound(reg.begin(),reg.end(),m-sum) - reg.begin();
  
  if(k<reg.size()) ans = min(ans,cost+k+1);
  }
}
 
if(ans==INT_MAX){
  cout<<-1<<endl;
}
 
else cout<<ans<<endl;
 
 
 }
 
 
 
 
 
int32_t main(){
 
 
  anmol();
  fact0();
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