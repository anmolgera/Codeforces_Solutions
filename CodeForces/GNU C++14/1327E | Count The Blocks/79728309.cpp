#include<bits/stdc++.h>
using namespace std;
#define double long double
#define int long long 
#define f(z) for(int i=1;i<=z;i++)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<int>
#define pb push_back
#define si set<int>
int cl(int n ,int m) { if(n%m)return n/m + 1 ;else return n/m ;}
int pw(int a,int b){int r=1;while(b>0){if(b&1)r=r*a;a=a*a;b>>=1;}return r;}
#define mod  1000000007
#define T() int TT; cin>>TT; while(TT--)
#define P pair<int,int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
const int N = 1e6 + 5  ;
int Mod =  998244353 ;
int n; 
int modexp( int x , int y ){
 int res = 1 ;
 while(y!=0){
  if( y%2==0){
   y = y/2 ;
   x = (x*x)%Mod ;
  }
  else{
   y-- ;
   res = (res*x)%Mod ;
  }
 }
 return res ;
}
 
int cal ( int k){
 int x = n-k+1 ;
 int A = n- (k+1)  , B = n-(k+2) ;
 
 if( x == 1 ) return ( 10 )%Mod ;
 else if( x == 2 ) return (2*10*9* modexp(10 , A) )%Mod ;
 else {
  return ( (2*10*9* modexp(10 , A) )%Mod  + ((x-2)* ( 9*10*9* modexp(10,B)) )%Mod )%Mod ;
 }
}
 
signed main(){
 
 cin >> n ;
 
 for ( int i = 1; i<=n ; i++) {
  cout << cal(i) <<" " ;
 }
}