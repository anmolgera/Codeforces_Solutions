#include<bits/stdc++.h>
using namespace std;
#define int long long
int n1,n2,k1,k2;
int cache[102][102][12][12];
#define MOD 100000000
 
int dp(int n ,int m, int check, int og){
 
  if(n>n1){
    return 0;
  }
 
  if(m>n2){
    return 0;
  }
 
  if(check==0){
 
      
      if(og>k1){
        return 0;
      }
 
  }
 
 
  else if(check==1){
 
    if(og>k2){
      return 0;
    }
  }
 
  if(n+m==n1+n2){
 
    if(n==n1 && m==n2){
      return 1;
    }
 
    else return 0;
  }
 
 if(cache[n][m][check][og]!=-1){
  return cache[n][m][check][og];
 }
 
if(check==0){
 
 cache[n][m][check][og] = dp(n+1, m, check, og+1) + dp(n, m+1,1-check, 1);
 
 
}
 
 
 
else if(check ==1){
 
 
  cache[n][m][check][og] = dp(n, m+1, check, og+1) + dp(n+1, m, 1-check,1);
}
 
 
cache[n][m][check][og] = cache[n][m][check][og]% MOD;
return cache[n][m][check][og];
 
}
int32_t main() {
   
 
cin>>n1>>n2>>k1>>k2;
memset(cache,-1,sizeof(cache));
cout<<(dp(1,0,0,1) +  dp(0,1,1,1))%MOD<<endl;
 
 
 
 
}
 