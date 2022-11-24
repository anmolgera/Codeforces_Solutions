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
//bool dp[2005][2005];
int n,k,z;
 
int dp[N][6][2];
 
 
int func(int idx, int left, int choice, int moves){
 
  if(k==moves){
 
   return a[idx];
 
 
  }
 
  if(dp[idx][left][choice]!=-1){
 
    return dp[idx][left][choice];
  }
 
  dp[idx][left][choice] = a[idx]+ func(idx+1, left, 0, moves+1);
 
  if(choice ==0 && left+1<=z){
 
    dp[idx][left][choice] = max(dp[idx][left][choice] , a[idx] + func(idx-1, left+1, 1, moves+1));
  }
 
  return dp[idx][left][choice];
 
 
}
 
 
 
 
int32_t main(){
    
  anmol();
 
  int t;
  cin>>t;
  while(t--){
 
   int n;
   cin>>n;
 
 
   if(n>=31){
 
     cout<<"YES"<<endl;
    
     if(n==36){
 
 
 
      cout<<14<<" "<<15<<" "<<6<<" "<<1<<endl;
     }
 
     else if(n==44){
 
       cout<<14<<" "<<15<<" "<<6<<" "<<n-35<<endl;
 
 
     }
 
     else if(n==40){
       
 
        cout<<14<<" "<<15<<" "<<6<<" "<<n-35<<endl;
 
     }
 
 
     else cout<<6<<" "<<10<<" "<<14<<" "<<(n-30)<<endl;
 
 
 
 
   }
 
  else cout<<"NO"<<endl;
 
 
 
 
 
 
  }
 
  
  }
 
   