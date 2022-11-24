 
 
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
int pw(int a,int b,int M){a%=M;int r=1;while(b>0){if(b&1)r=r*a%M;a=a*a%M;b>>=1;}return r;}
#define mod  1000000007
#define T() int TT; cin>>TT; while(TT--)
#define P pair<int,int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pr(r) cout <<"Case #"<<r <<": " ;
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 
const int N = 1e6 + 5 ;
int a[N] , dp[N] ;
 
signed main(){
  //anmol();
 
  T(){
 
    int n;
    cin>>n;
 
   // int *arr = new int[n];
 
    for(int i =1; i<=n; i++){
      cin>>a[i];
    }
 
  //memset(dp,1,sizeof(dp));
 
  for(int i =1; i<=n; i++){
      dp[i] =1;
    }
    int mx =1;
 
    for(int i =1; i<n; i++){
 
      for(int j =2*i; j<=n; j+=i){
       
 
       if(a[j]>a[i]){
   
 
         dp[j] = max(dp[j],dp[i]+1);
         mx = max(mx,dp[j]);
 
 
       }
 
 
 
      }
 
 
     /* for(int i =1; i<=n; i++){
        cout<<dp[i]<<" ";
      }
 
      cout<<endl;*/
    }
 
 
 
 
cout<<mx<<endl;
 
 
  }
  
  }
 
 
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
 
 
 
 
/*int32_t main()
{
   anmol();
jkj
w(t){
  int n;
  int m;
  cin>>n;
  cin>>m;
 
  int countb =0;
  int countw =0;
 
  
 
for(int i =0; i<n; i++){
 
  for(int j =0; j<m; j++){
 
   if((i==n-1)&&(j==m-1)){
    cout<<"W";
   }
 
   else cout<<"B";
 
 
  }
 
  cout<<endl;
}
 
}
 
}
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  