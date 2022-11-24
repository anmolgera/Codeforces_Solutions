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
ll solve(int i,int j) {
    if (!j) return 0;
    if (i<m) return -lim;
    if (dp[i][j] == -1) {
        ll temp = solve(i-m,j-1) + p[i] - p[i-m];
        dp[i][j] = max(solve(i-1,j),temp);
    }
    return dp[i][j];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    memset(dp,-1,sizeof(dp));
    cin>>n>>m>>k;
    p[0] = 0;
    for (int i=1;i<=n;i++) {
        cin>>a[i];
        p[i] = p[i-1] + a[i];
    }
    cout<<solve(n,k);
}