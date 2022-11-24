#include<bits/stdc++.h>
#define mod 1000000007
#define lim 1000000000000000007
#define all(v) v.begin(),v.end()
using namespace std;
typedef long long int ll;
typedef pair<int,int> pi;
const int N = (int)5e3+5;
ll dp[N][N],a[N],p[N];
int n,m,k;
/*ll solve(int i,int j) {
    if (!j) return 0;
    if (i<m) return -lim;
    if (dp[i][j] == -1) {
        ll temp = solve(i-m,j-1) + p[i] - p[i-m];
        dp[i][j] = max(solve(i-1,j),temp);
    }
    return dp[i][j];
}*/
 
 
int dfs(int i ){
 
  if(a[i]==-1){
    
    return 1;
  }
 
  return 1+dfs(a[i]);
 
 
 
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    
    int n;
    cin>>n;
 
    for(int i =1; i<=n; i++){
 
        cin>>a[i];
    }
    
    int mx =0;
    for(int i =1; i<=n; i++){
        
        mx = max(mx,dfs(i));
 
   
    }
    
    cout<<mx<<endl;
 
    //cout<<solve(n,k);
}