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
 
 
    int dieSimulator(int n, vector<int>& rollMax) {
        long p = 1e9 + 7;
        vector<vector<long>> dp(n+1, vector<long>(6, 0));
        vector<long> sum(n+1, 0);
        sum[0] = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < 6; ++j)  {
                for (int k = 1; k <= rollMax[j] && i - k >= 0; ++k)
                    dp[i][j] = (dp[i][j] + sum[i-k] - dp[i-k][j] + p) % p;
                sum[i] = (sum[i] + dp[i][j]) % p;
            }                
        }
        
        return sum[n];
    }
bool lucky(int n, int d){
  int num = n;
  while(num!=0){
    int y = num%10;
    num/=10;
    if(y==d){
       return true;
    }
  }
  
  return false;
 
 
}
void solve(){
  
        int n,y;
        cin>>n>>y;
        int a[n],b[n],c[y];
        map<int,int>mp;
        map<int,int>mp1;
        map<int,vector<int>>mp2;
 
         bool visited[10005];
 
        for(int i =0; i<n; i++){
            cin>>a[i];
            
        }
    
       for(int i=0;i<n;i++){
       cin>>b[i];
      
       
 
       }
       
 
        for(int i=0;i<n;i++){
      
       mp[b[i]]=i;
       
 
       }
    
   
   
       for(int i=0;i<y;i++){
        cin>>c[i];
      if(mp2.find(c[i])==mp2.end()){
         vector<int>v;
         mp2[c[i]]=v;
      }
      mp2[c[i]].push_back(i);
          
       }
 
       
        bool flag = true;
          
       
       
       int max_v=-1;
       
       for(int i=0;i<n;i++){
          if(a[i]!=b[i]){
             if(mp2.find(b[i])==mp2.end()){
                flag=false;
               
             }
             else{
                int x=mp2[b[i]].size();
                mp1[mp2[b[i]][x-1]]=i;
                max_v=max(max_v,mp2[b[i]][x-1]);
                 mp2[b[i]].pop_back();
                if(x==1){
                   mp2.erase(b[i]);
                }
               
             }
          }
       }
 
       if(flag==false){
          cout << "NO" << endl;
          return;
       }
       
         for(int i=0;i<y;i++){
          if(mp1.find(i)==mp1.end()){
             if(mp.find(c[i])!=mp.end()){
                mp1[i]=mp[c[i]];
                max_v=max(max_v,i);
             
             }
            
       }
         }
         
         
         
 
       
       for(int i=0;i<y;i++){
          if(mp1.find(i)==mp1.end()){
             if(i>max_v){
                flag=false;
                break;
             }
             mp1[i]=mp1[max_v];
          }
       }
       
        if(flag==false){
          cout << "NO" << endl;
          return;
       }
       
       cout << "YES" << endl;
       for(int i=0;i<y;i++)
       cout << mp1[i]+1 << " ";
       
       cout << endl;
 
 
 
 
 
 
 
 }
 
 
 
 
 
int32_t main(){
 
 
  anmol();
  //fact0();
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
/*Hello Srishy,
I am Anmol Gera currently in my final year. I got to know about this opportunity through your linkedin post.
I am highly interested.
 
I have Solved around 1000 questions on all the sites Combined. Have participated in more than 70 contests on codeforces and Currently a specialist.
 
Leetcode -https://leetcode.com/anmolgera/
Codeforces -https://codeforces.com/profile/DumbCarlsen69
 
Can you help me (if it's possible for you) with the process ?
 
Thanks a lot for your valuable time.
*/
 
  }
 
}