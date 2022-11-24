/* ****GT_18**** */
//Motivational Source->FUHPD
 
#include<bits/stdc++.h>
#define MIN(a,b,c) min(min(a,b),c)
#define MAX(a,b,c) max(max(a,b),c)
#define ll          long long
#define itr         vector<ll int>::iterator
#define pb          push_back
#define mp          make_pair
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define endl        '\n'
#define rep(i,a,b) for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
using namespace std;
void print(ll ans)
{
 cout<<ans;
 exit(0);
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int TESTS=1;
// cin>>TESTS;
 while(TESTS--)
 {
  ll n,m,k;
  cin>>n>>m>>k;
  if(k>n+m-2)
  print(-1);
  if(n==1)
  print(m/(k+1));
  if(m==1)
  print(n/(k+1));
  if(k<max(n,m))
  print(max(m*(n/(k+1)),n*(m/(k+1))));
  print(max(m/(k-n+1+1),n/(k-m+1+1)));
 }
 return 0;
}