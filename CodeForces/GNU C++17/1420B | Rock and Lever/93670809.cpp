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
 
 
    int t;
    cin>>t;
 
    while(t--){
 
        int n;
        cin>>n;
 
        vector<int> v(n,0);
 
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
       
       
        unordered_map<int,int> mp;
 
        for(int i=0;i<n;i++){
 
            int xx=v[i];
 
            int prev=0;
 
            for(int j=0;j<32;j++){
 
                if((xx&1)!=0){
                    prev=j;
                }
                xx=xx>>1;
 
            }
 
            mp[prev]++;
 
        }
     
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
 
 
        unordered_map<int,int> ::iterator it=mp.begin();
 
        int ans=0;
 
        while(it!=mp.end()){
 
            if(it->second==1){
                it++;
                continue;
            }
 
            else{
 
                 int yy=it->second;
 
                 int val=((yy)*(yy-1))/2;
 
                ans+=val;
            }
 
            it++;
        }
 
        cout<<ans<<endl;
 
    }
 
 
 
 
 
 
return 0;
}