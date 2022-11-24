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
 
 int n,m;
 cin>>n>>m;
    bool flag= false;
    bool flag1= false;
 for(int i =0; i<n; i++){
 
           int x,y,a,b;
           cin>>x>>y;
           cin>>a>>b;
 
        
 
           if(y==a){
 
            flag1 = true;
           }
 
 
 }
 
 if(m%2==0){
 
  if(flag1){
            cout<<"YES"<<endl;
  }
 
  else cout<<"NO"<<endl;
 }
   
 
    else {
 
       /*  if(m==1 && flag1){
          
 
          cout<<"YES"<<endl;
 
         }
 
      /*
     if(flag1){
 
      cout<<"YES"<<endl;
 
     }
     */
 
     cout<<"NO"<<endl;
    }
 
 
 
}
 
}
 