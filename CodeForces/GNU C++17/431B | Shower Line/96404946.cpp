#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mp make_pair
#define rep(i,a,b) for(int i=a; i<b; i++)
#define repd(i,a,b) for(int i=a-1; i>=b; i--)
#define ll long long
#define pii pair <int, int> 
#define int long long
typedef long double ld;
typedef pair <ll, ll> pll;
 
 
 
signed main(){
int a[5][5];
rep(i,0,5)
rep(j,0,5)
cin>>a[i][j];
 
int b[5]={0,1,2,3,4};
int cost=0;
rep(i,1,5){
  cost+=(a[b[i]][b[i-1]]+a[b[i-1]][b[i]])*((i+1)/2);
  
  }
int ans=cost;
while(next_permutation(b,b+5)){
 
 
 cost=0;
 rep(i,1,5){
  cost=cost+(a[b[i]][b[i-1]]+a[b[i-1]][b[i]])*((i+1)/2);
  }
  ans=max(cost,ans);
 }
 cout<<ans;
}