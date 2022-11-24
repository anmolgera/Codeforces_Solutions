#include<bits/stdc++.h>
using namespace std;
#define int long long
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
//#define vi              vector<int>
#define mii             map<int,int>
//#define my              unordered_map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define ml(brr,n,type)  type *brr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 
int32_t main(){
 
    anmol();
    int t;
    cin>>t;
 
    while(t--){
 
        int n,q;
        cin>>n>>q;
 
 
        /*#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>
using namespace std;
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
//#define vi              vector<int>
#define mii             map<int,int>
//#define my              unordered_map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define ml(brr,n,type)  type *brr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 
int32_t main(){
    
  anmol();
 /* bool flag = true;
  for(int i =1; i<n; i++){
 
    if(a[i-1]<=a[i]){
 
      flag = false;
      break;
    }
  }
 
 
 
if(!flag){
 
  cout<<"YES"<<endl;
}
 
else cout<<"NO"<<endl;
 
*/
 
 
//sort(a,a+n);
 
        vector<int> v(n,0);
 
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
 
        vector<pair<int,int> > a(n);
 
        a[n-1]=make_pair(v[n-1],-1*v[n-1]);
 
        int posi=v[n-1];
        int negi=-1*v[n-1];
 
        for(int i=n-2;i>=0;i--){
 
            int xx;
            int yy;
 
            if(v[i]>=(v[i]+negi)){
                xx=v[i];
            }
            else{
                xx=v[i]+negi;
            }
 
 
            if((-1*v[i])>=((-1*v[i])+posi)){
 
                yy=(-1*v[i]);
 
 
 
            }
 
            else{
 
                yy=(-1*v[i])+posi;
 
            }
 
            a[i]=make_pair(xx,yy);
 
            posi=max(posi,xx);
            negi=max(negi,yy);
 
 
        }
 
        int ans=0;
 
        for(int i=0;i<n;i++){
 
            ans=max(ans,a[i].first);
 
        }
 
        cout<<ans<<endl;
 
    }
 
 
 
 
 
 
return 0;
}